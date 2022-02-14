
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_7;

 if (FUNC_0() < VAR_5)
  return;





 VAR_7 = FUNC_1();
 if (VAR_7 & VAR_2) {
  VAR_7 &= ~VAR_3;
  VAR_7 |= VAR_6 & VAR_3;
  VAR_7 |= VAR_4;
  FUNC_3(VAR_7);

  FUNC_2(VAR_1 |
      VAR_0);
 }
}
