
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_3;

 if (FUNC_2(VAR_1, &VAR_3) >= 0) {
  FUNC_0("ksem_getvalue() didn't fail");
  return;
 }
 if (VAR_2 != VAR_0) {
  FUNC_1("ksem_getvalue");
  return;
 }
 FUNC_3();
}
