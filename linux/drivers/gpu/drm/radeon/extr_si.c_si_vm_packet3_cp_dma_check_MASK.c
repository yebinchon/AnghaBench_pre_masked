
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u32 *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = VAR_5[VAR_6 + 4];
 u32 VAR_11 = VAR_5[VAR_6 + 1];
 u32 VAR_12 = VAR_5[VAR_6];
 if (VAR_10 & VAR_4) {

  if (((VAR_11 & 0x60000000) >> 29) == 0) {
   VAR_7 = VAR_12 << 2;
   if (VAR_10 & VAR_3) {
    VAR_8 = VAR_7;
    if (!FUNC_1(VAR_8)) {
     FUNC_0("CP DMA Bad SRC register\n");
     return -VAR_0;
    }
   } else {
    for (VAR_9 = 0; VAR_9 < (VAR_10 & 0x1fffff); VAR_9++) {
     VAR_8 = VAR_7 + (4 * VAR_9);
     if (!FUNC_1(VAR_8)) {
      FUNC_0("CP DMA Bad SRC register\n");
      return -VAR_0;
     }
    }
   }
  }
 }
 if (VAR_10 & VAR_2) {

  if (((VAR_11 & 0x00300000) >> 20) == 0) {
   VAR_7 = VAR_5[VAR_6 + 2];
   if (VAR_10 & VAR_1) {
    VAR_8 = VAR_7;
    if (!FUNC_1(VAR_8)) {
     FUNC_0("CP DMA Bad DST register\n");
     return -VAR_0;
    }
   } else {
    for (VAR_9 = 0; VAR_9 < (VAR_10 & 0x1fffff); VAR_9++) {
     VAR_8 = VAR_7 + (4 * VAR_9);
    if (!FUNC_1(VAR_8)) {
      FUNC_0("CP DMA Bad DST register\n");
      return -VAR_0;
     }
    }
   }
  }
 }
 return 0;
}
