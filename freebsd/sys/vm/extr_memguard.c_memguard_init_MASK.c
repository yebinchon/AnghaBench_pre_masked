
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uintmax_t ;
typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,scalar_t__,int,scalar_t__*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,int ,int ,int) ;

void
FUNC_3(vmem_t *VAR_6)
{
 vm_offset_t VAR_7;

 FUNC_1(VAR_6, VAR_5, VAR_0 | VAR_1, &VAR_7);
 FUNC_2(VAR_3, "memguard arena", VAR_7, VAR_5,
     VAR_2, 0, VAR_1);
 VAR_4 = VAR_7;

 FUNC_0("MEMGUARD DEBUGGING ALLOCATOR INITIALIZED:\n");
 FUNC_0("\tMEMGUARD map base: 0x%lx\n", (u_long)VAR_7);
 FUNC_0("\tMEMGUARD map size: %jd KBytes\n",
     (uintmax_t)VAR_5 >> 10);
}
