
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(void)
{
 u8 VAR_5 = *(volatile char *)VAR_2;
 unsigned long VAR_6;

 if (VAR_5 & VAR_0) {
  int VAR_7;





  VAR_7 = FUNC_2();
  if (FUNC_4(VAR_7 < 0))
   return;

  FUNC_1(VAR_7);
 }

 if (!(VAR_5 & VAR_1)) {
  VAR_6 = FUNC_3();
  FUNC_0(VAR_4);
  FUNC_1(VAR_3);
  FUNC_5(VAR_6);
 }
}
