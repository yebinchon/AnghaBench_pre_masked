
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;

int
FUNC_2(int VAR_4, int VAR_5, struct test *VAR_6)
{

 if (FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1) < 0) {
  FUNC_1("priv_kenv_unset: kenv");
  return (-1);
 }
 return (0);
}
