
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

void FUNC_2 (const char *VAR_0) {
  if (VAR_0 == ((void*)0))
    return;

  if (FUNC_1(VAR_0) != 0) {
    FUNC_0 ("Could not remove the pid file %s.\n", VAR_0);
  }

}
