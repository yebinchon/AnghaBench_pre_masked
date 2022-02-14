
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_long ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(vm_offset_t VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0("\tat 0x%lx, active bytes: ", (u_long)VAR_0);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if ((VAR_1 & (1 << VAR_2)) != 0)
   FUNC_0("%d ", VAR_2);
 }
 if (VAR_1 == 0)
  FUNC_0("none");
 FUNC_0("\n");
}
