
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_cpu_desc {int x86_family; int x86_model; scalar_t__ x86_vendor; scalar_t__ x86_stepping; } ;
struct cpuinfo_x86 {scalar_t__ x86_vendor; int x86; int x86_model; scalar_t__ x86_stepping; } ;


 struct cpuinfo_x86 VAR_0 ;

__attribute__((used)) static const struct x86_cpu_desc *
FUNC_0(const struct x86_cpu_desc *VAR_1)
{
 struct cpuinfo_x86 *VAR_2 = &VAR_0;
 const struct x86_cpu_desc *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->x86_family | VAR_3->x86_model; VAR_3++) {
  if (VAR_2->x86_vendor != VAR_3->x86_vendor)
   continue;
  if (VAR_2->x86 != VAR_3->x86_family)
   continue;
  if (VAR_2->x86_model != VAR_3->x86_model)
   continue;
  if (VAR_2->x86_stepping != VAR_3->x86_stepping)
   continue;
  return VAR_3;
 }
 return ((void*)0);
}
