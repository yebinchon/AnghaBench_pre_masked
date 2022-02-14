
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ) ;

int
FUNC_4(void)
{
 int VAR_4;

 if (FUNC_0(VAR_1)) {
  return !(
      (VAR_2 == ((void*)0) || VAR_3) &&
      FUNC_2());
 }
 if ((VAR_4 = FUNC_1(VAR_1)) == VAR_0) {
  return !(
      (VAR_2 == ((void*)0) || VAR_3) &&
      FUNC_2());
 }
 FUNC_3(VAR_4, VAR_1);
 return (0);
}
