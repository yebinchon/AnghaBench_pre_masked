
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct microcode_header_intel {int ldrver; int hdrver; size_t sig; size_t pf; size_t cksum; } ;
struct extended_sigtable {size_t count; } ;
struct extended_signature {size_t sig; size_t pf; size_t cksum; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (struct extended_sigtable*) ;
 unsigned long FUNC_1 (struct microcode_header_intel*) ;
 unsigned long FUNC_2 (struct microcode_header_intel*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 struct microcode_header_intel *VAR_10 = VAR_5;
 struct extended_sigtable *VAR_11 = ((void*)0);
 u32 VAR_12, VAR_13, VAR_14 = 0, VAR_15;
 struct extended_signature *VAR_16;

 VAR_7 = FUNC_2(VAR_10);
 VAR_8 = FUNC_1(VAR_10);

 if (VAR_8 + VAR_4 > VAR_7) {
  if (VAR_6)
   FUNC_3("Error: bad microcode data file size.\n");
  return -VAR_1;
 }

 if (VAR_10->ldrver != 1 || VAR_10->hdrver != 1) {
  if (VAR_6)
   FUNC_3("Error: invalid/unknown microcode update format.\n");
  return -VAR_1;
 }

 VAR_9 = VAR_7 - (VAR_4 + VAR_8);
 if (VAR_9) {
  u32 VAR_17 = 0;
  u32 *VAR_18;

  if ((VAR_9 < VAR_2)
   || ((VAR_9 - VAR_2) % VAR_3)) {
   if (VAR_6)
    FUNC_3("Error: truncated extended signature table.\n");
   return -VAR_1;
  }

  VAR_11 = VAR_5 + VAR_4 + VAR_8;
  if (VAR_9 != FUNC_0(VAR_11)) {
   if (VAR_6)
    FUNC_3("Error: extended signature table size mismatch.\n");
   return -VAR_0;
  }

  VAR_14 = VAR_11->count;





  VAR_18 = (u32 *)VAR_11;

  VAR_15 = VAR_9 / sizeof(u32);
  while (VAR_15--)
   VAR_17 += VAR_18[VAR_15];

  if (VAR_17) {
   if (VAR_6)
    FUNC_4("Bad extended signature table checksum, aborting.\n");
   return -VAR_1;
  }
 }






 VAR_13 = 0;
 VAR_15 = (VAR_4 + VAR_8) / sizeof(u32);
 while (VAR_15--)
  VAR_13 += ((u32 *)VAR_5)[VAR_15];

 if (VAR_13) {
  if (VAR_6)
   FUNC_3("Bad microcode data checksum, aborting.\n");
  return -VAR_1;
 }

 if (!VAR_9)
  return 0;




 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_16 = (void *)VAR_11 + VAR_2 +
     VAR_3 * VAR_15;

  VAR_12 = (VAR_10->sig + VAR_10->pf + VAR_10->cksum) -
        (VAR_16->sig + VAR_16->pf + VAR_16->cksum);
  if (VAR_12) {
   if (VAR_6)
    FUNC_3("Bad extended signature checksum, aborting.\n");
   return -VAR_1;
  }
 }
 return 0;
}
