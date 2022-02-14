
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned int *VAR_0)
{
 int VAR_1;

 if ((((unsigned long) VAR_0) & 3))
  return;

 FUNC_0("Instruction DUMP:");
 for (VAR_1 = -3; VAR_1 < 6; VAR_1++)
  FUNC_0("%c%08x%c",VAR_1?' ':'<',VAR_0[VAR_1],VAR_1?' ':'>');
 FUNC_0("\n");
}
