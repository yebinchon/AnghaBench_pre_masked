
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,unsigned long) ;
 scalar_t__ FUNC_1 (size_t*,size_t,size_t) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_4 (void*) ;
 unsigned char* FUNC_5 (size_t) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (size_t*,unsigned char const**,unsigned char const*) ;
 int FUNC_8 (unsigned char*,unsigned char const*,unsigned char) ;

int FUNC_9(
 void **VAR_1,
 size_t *VAR_2,
 const unsigned char *VAR_3,
 size_t VAR_4,
 const unsigned char *VAR_5,
 size_t VAR_6)
{
 const unsigned char *VAR_7 = VAR_5 + VAR_6;
 size_t VAR_8, VAR_9, VAR_10;
 unsigned char *VAR_11;

 *VAR_1 = ((void*)0);
 *VAR_2 = 0;






 if ((FUNC_7(&VAR_8, &VAR_5, VAR_7) < 0) || (VAR_8 != VAR_4)) {
  FUNC_6(VAR_0, "failed to apply delta: base size does not match given data");
  return -1;
 }

 if (FUNC_7(&VAR_9, &VAR_5, VAR_7) < 0) {
  FUNC_6(VAR_0, "failed to apply delta: base size does not match given data");
  return -1;
 }

 FUNC_3(&VAR_10, VAR_9, 1);
 VAR_11 = FUNC_5(VAR_10);
 FUNC_2(VAR_11);

 VAR_11[VAR_9] = '\0';
 *VAR_1 = VAR_11;
 *VAR_2 = VAR_9;

 while (VAR_5 < VAR_7) {
  unsigned char VAR_12 = *VAR_5++;
  if (VAR_12 & 0x80) {

   size_t VAR_13 = 0, VAR_14 = 0, VAR_15;


   if (VAR_12 & 0x01) { if (VAR_5 < VAR_7) (VAR_13) |= ((unsigned) *VAR_5++ << 0UL); else goto fail; };
   if (VAR_12 & 0x02) { if (VAR_5 < VAR_7) (VAR_13) |= ((unsigned) *VAR_5++ << 8UL); else goto fail; };
   if (VAR_12 & 0x04) { if (VAR_5 < VAR_7) (VAR_13) |= ((unsigned) *VAR_5++ << 16UL); else goto fail; };
   if (VAR_12 & 0x08) { if (VAR_5 < VAR_7) (VAR_13) |= ((unsigned) *VAR_5++ << 24UL); else goto fail; };

   if (VAR_12 & 0x10) { if (VAR_5 < VAR_7) (VAR_14) |= ((unsigned) *VAR_5++ << 0UL); else goto fail; };
   if (VAR_12 & 0x20) { if (VAR_5 < VAR_7) (VAR_14) |= ((unsigned) *VAR_5++ << 8UL); else goto fail; };
   if (VAR_12 & 0x40) { if (VAR_5 < VAR_7) (VAR_14) |= ((unsigned) *VAR_5++ << 16UL); else goto fail; };
   if (!VAR_14) VAR_14 = 0x10000;


   if (FUNC_1(&VAR_15, VAR_13, VAR_14) ||
       VAR_4 < VAR_15 || VAR_9 < VAR_14)
    goto fail;

   FUNC_8(VAR_11, VAR_3 + VAR_13, VAR_14);
   VAR_11 += VAR_14;
   VAR_9 -= VAR_14;

  } else if (VAR_12) {




   if (VAR_7 - VAR_5 < VAR_12 || VAR_9 < VAR_12)
    goto fail;
   FUNC_8(VAR_11, VAR_5, VAR_12);
   VAR_5 += VAR_12;
   VAR_11 += VAR_12;
   VAR_9 -= VAR_12;

  } else {

   goto fail;
  }
 }

 if (VAR_5 != VAR_7 || VAR_9)
  goto fail;
 return 0;

fail:
 FUNC_4(*VAR_1);

 *VAR_1 = ((void*)0);
 *VAR_2 = 0;

 FUNC_6(VAR_0, "failed to apply delta");
 return -1;
}
