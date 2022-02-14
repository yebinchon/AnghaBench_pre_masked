
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*) ;
 unsigned int FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static u32 FUNC_2(unsigned int VAR_1)
{
 int VAR_2;
 u8 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  u32 VAR_4 = VAR_0[VAR_2];
  bool VAR_5 = 0;
  u8 VAR_6 = 0;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < 24; VAR_7++) {
   if (!(FUNC_1(VAR_7) & VAR_4))
    continue;

   if (!VAR_5) {
    VAR_6 = (FUNC_1(VAR_7) & VAR_1) ? 1 : 0;
    VAR_5 = 1;
   } else {
    VAR_6 ^= (FUNC_1(VAR_7) & VAR_1) ? 1 : 0;
   }
  }

  VAR_3 |= VAR_6 << VAR_2;
 }

 return VAR_3;
}
