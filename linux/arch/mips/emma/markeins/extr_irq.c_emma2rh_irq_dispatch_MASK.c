
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (int ) ;

void FUNC_2(void)
{
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 VAR_15 = FUNC_1(VAR_3) &
      FUNC_1(VAR_0);
 for (VAR_17 = 0, VAR_16 = 1; VAR_17 < 32; VAR_17++, VAR_16 <<= 1) {
  if (VAR_15 & VAR_16) {
   FUNC_0(VAR_12 + VAR_17);
   return;
  }
 }

 VAR_15 = FUNC_1(VAR_4) &
      FUNC_1(VAR_1);
 for (VAR_17 = 32, VAR_16 = 1; VAR_17 < 64; VAR_17++, VAR_16 <<= 1) {
  if (VAR_15 & VAR_16) {
   FUNC_0(VAR_12 + VAR_17);
   return;
  }
 }

 VAR_15 = FUNC_1(VAR_5) &
      FUNC_1(VAR_2);

 for (VAR_17 = 64, VAR_16 = 1; VAR_17 < 96; VAR_17++, VAR_16 <<= 1) {
  if (VAR_15 & VAR_16) {
   FUNC_0(VAR_12 + VAR_17);
   return;
  }
 }
}
