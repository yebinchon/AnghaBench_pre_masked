
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(const char *VAR_0)
{
  if (VAR_0 == ((void*)0))
    FUNC_0(((void*)0));
  else if (VAR_0[0] == '-' && VAR_0[1] != '\0')
    FUNC_0("-%s", VAR_0 + 1);
  else
    FUNC_0("%s", VAR_0);
}
