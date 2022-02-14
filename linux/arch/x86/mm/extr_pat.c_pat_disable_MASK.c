
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*) ;

void FUNC_2(const char *VAR_2)
{
 if (VAR_1)
  return;

 if (VAR_0) {
  FUNC_0(1, "x86/PAT: PAT cannot be disabled after initialization\n");
  return;
 }

 VAR_1 = 1;
 FUNC_1("x86/PAT: %s\n", VAR_2);
}
