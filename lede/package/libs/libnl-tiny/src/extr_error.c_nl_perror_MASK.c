
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,...) ;
 char* FUNC_1 (int) ;
 int VAR_0 ;

void FUNC_2(int VAR_1, const char *VAR_2)
{
 if (VAR_2 && *VAR_2)
  FUNC_0(VAR_0, "%s: %s\n", VAR_2, FUNC_1(VAR_1));
 else
  FUNC_0(VAR_0, "%s\n", FUNC_1(VAR_1));
}
