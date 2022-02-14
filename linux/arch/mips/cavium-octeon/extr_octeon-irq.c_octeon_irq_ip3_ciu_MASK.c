
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
 u64 VAR_3 = FUNC_1(VAR_0);

 VAR_3 &= FUNC_0(VAR_1);
 if (FUNC_4(VAR_3)) {
  int VAR_4 = FUNC_3(VAR_3) - 1;
  int VAR_5 = VAR_2[1][VAR_4];
  if (FUNC_4(VAR_5))
   FUNC_2(VAR_5);
  else
   FUNC_5();
 } else {
  FUNC_5();
 }
}
