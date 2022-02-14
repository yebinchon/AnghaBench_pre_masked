
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int x86; int x86_max_cores; int cpu_core_id; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cpuinfo_x86 *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->x86 >= 0x17)
  return;

 VAR_2 = VAR_1->x86_max_cores / VAR_0;
 VAR_1->cpu_core_id %= VAR_2;
}
