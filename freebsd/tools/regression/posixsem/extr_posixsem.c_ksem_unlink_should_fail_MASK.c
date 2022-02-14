
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, int VAR_2)
{

 if (FUNC_2(VAR_1) >= 0) {
  FUNC_0("ksem_unlink() didn't fail");
  return;
 }
 if (VAR_0 != VAR_2) {
  FUNC_1("ksem_unlink");
  return;
 }
 FUNC_3();
}
