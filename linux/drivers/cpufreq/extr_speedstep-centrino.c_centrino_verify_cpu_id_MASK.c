
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {scalar_t__ x86; scalar_t__ x86_model; scalar_t__ x86_stepping; } ;
struct cpu_id {scalar_t__ x86; scalar_t__ x86_model; scalar_t__ x86_stepping; } ;



__attribute__((used)) static int FUNC_0(const struct cpuinfo_x86 *VAR_0,
      const struct cpu_id *VAR_1)
{
 if ((VAR_0->x86 == VAR_1->x86) &&
     (VAR_0->x86_model == VAR_1->x86_model) &&
     (VAR_0->x86_stepping == VAR_1->x86_stepping))
  return 1;
 return 0;
}
