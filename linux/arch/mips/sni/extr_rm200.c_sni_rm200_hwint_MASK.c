
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 u32 VAR_7 = FUNC_4() & FUNC_5();
 u8 VAR_8;
 u8 VAR_9;
 int VAR_10;

 if (VAR_7 & VAR_1)
  FUNC_1(VAR_3 + 7);
 else if (VAR_7 & VAR_0) {
  FUNC_0(VAR_2);
  VAR_8 = *(volatile u8 *)VAR_4 ^ 0x1f;
  VAR_9 = *(volatile u8 *)VAR_6 ^ 0x14;
  VAR_10 = FUNC_2(VAR_9 & VAR_8 & 0x1f);

  if (FUNC_3(VAR_10 > 0))
   FUNC_1(VAR_10 + VAR_5 - 1);
  FUNC_6(VAR_2);
 }
}
