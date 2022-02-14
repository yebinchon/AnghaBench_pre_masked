
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;

void FUNC_3 (void)
{
  if (FUNC_0 (VAR_1) < 0) {
    FUNC_2 (VAR_0, "fatal: cannot change user to %s\n", VAR_1 ? VAR_1 : "(default)");
    FUNC_1 (1);
  }
  if (VAR_2 >= 2) {
    FUNC_2 (VAR_0, "User changed to %s\n", VAR_1 ? VAR_1 : "(default)");
  }
}
