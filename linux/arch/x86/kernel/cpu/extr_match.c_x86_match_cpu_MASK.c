
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_cpu_id {int vendor; int family; int model; int feature; } ;
struct cpuinfo_x86 {int x86_vendor; int x86; int x86_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cpuinfo_x86 VAR_4 ;
 int FUNC_0 (struct cpuinfo_x86*,int) ;

const struct x86_cpu_id *FUNC_1(const struct x86_cpu_id *VAR_5)
{
 const struct x86_cpu_id *VAR_6;
 struct cpuinfo_x86 *VAR_7 = &VAR_4;

 for (VAR_6 = VAR_5; VAR_6->vendor | VAR_6->family | VAR_6->model | VAR_6->feature; VAR_6++) {
  if (VAR_6->vendor != VAR_3 && VAR_7->x86_vendor != VAR_6->vendor)
   continue;
  if (VAR_6->family != VAR_0 && VAR_7->x86 != VAR_6->family)
   continue;
  if (VAR_6->model != VAR_2 && VAR_7->x86_model != VAR_6->model)
   continue;
  if (VAR_6->feature != VAR_1 && !FUNC_0(VAR_7, VAR_6->feature))
   continue;
  return VAR_6;
 }
 return ((void*)0);
}
