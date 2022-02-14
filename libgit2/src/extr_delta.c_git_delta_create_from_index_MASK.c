
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {unsigned char* ptr; unsigned int val; struct index_entry* next; } ;
struct git_delta_index {size_t src_size; unsigned char* src_buf; unsigned int hash_mask; struct index_entry** hash; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned int) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned int) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(
 void **VAR_9,
 size_t *VAR_10,
 const struct git_delta_index *VAR_11,
 const void *VAR_12,
 size_t VAR_13,
 size_t VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;
 const unsigned char *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 unsigned char *VAR_26;

 *VAR_9 = ((void*)0);
 *VAR_10 = 0;

 if (!VAR_12 || !VAR_13)
  return 0;

 if (VAR_11->src_size > VAR_8 ||
     VAR_13 > VAR_8 ||
     VAR_14 > (VAR_8 - VAR_3 - 1)) {
  FUNC_4(VAR_1, "buffer sizes too large for delta processing");
  return -1;
 }

 VAR_16 = 0;
 VAR_17 = 8192;
 if (VAR_14 && VAR_17 >= VAR_14)
  VAR_17 = (unsigned int)(VAR_14 + VAR_3 + 1);
 VAR_26 = FUNC_2(VAR_17);
 FUNC_0(VAR_26);


 VAR_15 = (unsigned int)VAR_11->src_size;
 while (VAR_15 >= 0x80) {
  VAR_26[VAR_16++] = VAR_15 | 0x80;
  VAR_15 >>= 7;
 }
 VAR_26[VAR_16++] = VAR_15;


 VAR_15 = (unsigned int)VAR_13;
 while (VAR_15 >= 0x80) {
  VAR_26[VAR_16++] = VAR_15 | 0x80;
  VAR_15 >>= 7;
 }
 VAR_26[VAR_16++] = VAR_15;

 VAR_22 = VAR_11->src_buf;
 VAR_23 = VAR_22 + VAR_11->src_size;
 VAR_24 = VAR_12;
 VAR_25 = (const unsigned char *) VAR_12 + VAR_13;

 VAR_16++;
 VAR_20 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_5 && VAR_24 < VAR_25; VAR_15++, VAR_24++) {
  VAR_26[VAR_16++] = *VAR_24;
  VAR_20 = ((VAR_20 << 8) | *VAR_24) ^ VAR_6[VAR_20 >> VAR_4];
 }
 VAR_21 = VAR_15;

 VAR_18 = 0;
 VAR_19 = 0;
 while (VAR_24 < VAR_25) {
  if (VAR_19 < 4096) {
   struct index_entry *VAR_27;
   VAR_20 ^= VAR_7[VAR_24[-VAR_5]];
   VAR_20 = ((VAR_20 << 8) | *VAR_24) ^ VAR_6[VAR_20 >> VAR_4];
   VAR_15 = VAR_20 & VAR_11->hash_mask;
   for (VAR_27 = VAR_11->hash[VAR_15]; VAR_27; VAR_27 = VAR_27->next) {
    const unsigned char *VAR_28 = VAR_27->ptr;
    const unsigned char *VAR_29 = VAR_24;
    unsigned int VAR_30 = (unsigned int)(VAR_23 - VAR_28);
    if (VAR_27->val != VAR_20)
     continue;
    if (VAR_30 > (unsigned int)(VAR_25 - VAR_29))
     VAR_30 = (unsigned int)(VAR_25 - VAR_29);
    if (VAR_30 <= VAR_19)
     break;
    while (VAR_30-- && *VAR_29++ == *VAR_28)
     VAR_28++;
    if (VAR_19 < (unsigned int)(VAR_28 - VAR_27->ptr)) {

     VAR_19 = (unsigned int)(VAR_28 - VAR_27->ptr);
     VAR_18 = (unsigned int)(VAR_27->ptr - VAR_22);
     if (VAR_19 >= 4096)
      break;
    }
   }
  }

  if (VAR_19 < 4) {
   if (!VAR_21)
    VAR_16++;
   VAR_26[VAR_16++] = *VAR_24++;
   VAR_21++;
   if (VAR_21 == 0x7f) {
    VAR_26[VAR_16 - VAR_21 - 1] = VAR_21;
    VAR_21 = 0;
   }
   VAR_19 = 0;
  } else {
   unsigned int VAR_31;
   unsigned char *VAR_32;

   if (VAR_21) {
    while (VAR_18 && VAR_22[VAR_18-1] == VAR_24[-1]) {

     VAR_19++;
     VAR_18--;
     VAR_24--;
     VAR_16--;
     if (--VAR_21)
      continue;
     VAR_16--;
     VAR_21--;
     break;
    }
    VAR_26[VAR_16 - VAR_21 - 1] = VAR_21;
    VAR_21 = 0;
   }


   VAR_31 = (VAR_19 < 0x10000) ? 0 : (VAR_19 - 0x10000);
   VAR_19 -= VAR_31;

   VAR_32 = VAR_26 + VAR_16++;
   VAR_15 = 0x80;

   if (VAR_18 & 0x000000ff)
    VAR_26[VAR_16++] = VAR_18 >> 0, VAR_15 |= 0x01;
   if (VAR_18 & 0x0000ff00)
    VAR_26[VAR_16++] = VAR_18 >> 8, VAR_15 |= 0x02;
   if (VAR_18 & 0x00ff0000)
    VAR_26[VAR_16++] = VAR_18 >> 16, VAR_15 |= 0x04;
   if (VAR_18 & 0xff000000)
    VAR_26[VAR_16++] = VAR_18 >> 24, VAR_15 |= 0x08;

   if (VAR_19 & 0x00ff)
    VAR_26[VAR_16++] = VAR_19 >> 0, VAR_15 |= 0x10;
   if (VAR_19 & 0xff00)
    VAR_26[VAR_16++] = VAR_19 >> 8, VAR_15 |= 0x20;

   *VAR_32 = VAR_15;

   VAR_24 += VAR_19;
   VAR_18 += VAR_19;
   VAR_19 = VAR_31;

   if (VAR_19 < 4096) {
    int VAR_33;
    VAR_20 = 0;
    for (VAR_33 = -VAR_5; VAR_33 < 0; VAR_33++)
     VAR_20 = ((VAR_20 << 8) | VAR_24[VAR_33])
           ^ VAR_6[VAR_20 >> VAR_4];
   }
  }

  if (VAR_16 >= VAR_17 - VAR_3) {
   void *VAR_34 = VAR_26;
   VAR_17 = VAR_17 * 3 / 2;
   if (VAR_14 && VAR_17 >= VAR_14)
    VAR_17 = (unsigned int)(VAR_14 + VAR_3 + 1);
   if (VAR_14 && VAR_16 > VAR_14)
    break;
   VAR_26 = FUNC_3(VAR_26, VAR_17);
   if (!VAR_26) {
    FUNC_1(VAR_34);
    return -1;
   }
  }
 }

 if (VAR_21)
  VAR_26[VAR_16 - VAR_21 - 1] = VAR_21;

 if (VAR_14 && VAR_16 > VAR_14) {
  FUNC_4(VAR_2, "delta would be larger than maximum size");
  FUNC_1(VAR_26);
  return VAR_0;
 }

 *VAR_10 = VAR_16;
 *VAR_9 = VAR_26;
 return 0;
}
