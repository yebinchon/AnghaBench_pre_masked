
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int** VAR_0 ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_1 = FUNC_2();
 u64 VAR_2 = FUNC_3(FUNC_1(VAR_1));
 u64 VAR_3 = FUNC_3(FUNC_0(VAR_1));

 VAR_2 &= VAR_3;
 if (FUNC_6(VAR_2)) {
  int VAR_4 = FUNC_5(VAR_2) - 1;
  int VAR_5 = VAR_0[2][VAR_4];

  if (FUNC_6(VAR_5))
   FUNC_4(VAR_5);
  else
   FUNC_7();
 } else {
  FUNC_7();
 }
}
