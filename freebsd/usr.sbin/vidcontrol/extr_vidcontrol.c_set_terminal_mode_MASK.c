
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1)
{

 if (FUNC_1(VAR_1, "xterm") == 0)
  FUNC_0(VAR_0, "\033[=T");
 else if (FUNC_1(VAR_1, "cons25") == 0)
  FUNC_0(VAR_0, "\033[=1T");
}
