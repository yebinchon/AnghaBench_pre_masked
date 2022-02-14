
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct sysinfo {int totalram; int totalhigh; int mem_unit; } ;
struct TYPE_2__ {int max_system_mem_limit; int max_ttm_mem_limit; int mem_limit_lock; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct sysinfo*) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
 struct sysinfo VAR_1;
 uint64_t VAR_2;

 FUNC_1(&VAR_1);
 VAR_2 = VAR_1.totalram - VAR_1.totalhigh;
 VAR_2 *= VAR_1.mem_unit;

 FUNC_2(&VAR_0.mem_limit_lock);
 VAR_0.max_system_mem_limit = (VAR_2 >> 1) + (VAR_2 >> 2);
 VAR_0.max_ttm_mem_limit = (VAR_2 >> 1) - (VAR_2 >> 3);
 FUNC_0("Kernel memory limit %lluM, TTM limit %lluM\n",
  (VAR_0.max_system_mem_limit >> 20),
  (VAR_0.max_ttm_mem_limit >> 20));
}
