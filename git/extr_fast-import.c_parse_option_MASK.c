
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(const char *VAR_1)
{
 if (VAR_0)
  FUNC_0("Got option command '%s' after data command", VAR_1);

 if (FUNC_1(VAR_1))
  return;

 FUNC_0("This version of fast-import does not support option: %s", VAR_1);
}
