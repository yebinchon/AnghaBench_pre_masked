
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {scalar_t__ phys_proc_id; scalar_t__ cpu_die_id; } ;



__attribute__((used)) static bool FUNC_0(struct cpuinfo_x86 *VAR_0, struct cpuinfo_x86 *VAR_1)
{
 if ((VAR_0->phys_proc_id == VAR_1->phys_proc_id) &&
  (VAR_0->cpu_die_id == VAR_1->cpu_die_id))
  return 1;
 return 0;
}
