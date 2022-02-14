
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int*) ;

void
FUNC_6(void)
{
 vm_offset_t VAR_0;
 vm_paddr_t VAR_1;
 int VAR_2;

 FUNC_0("Physical address watchpoint:\n");
 if (FUNC_2()) {
  VAR_1 = FUNC_3(&VAR_2);
  FUNC_1(VAR_1, VAR_2);
 } else
  FUNC_0("\tnot active.\n");
 FUNC_0("Virtual address watchpoint:\n");
 if (FUNC_4()) {
  VAR_0 = FUNC_5(&VAR_2);
  FUNC_1(VAR_0, VAR_2);
 } else
  FUNC_0("\tnot active.\n");
}
