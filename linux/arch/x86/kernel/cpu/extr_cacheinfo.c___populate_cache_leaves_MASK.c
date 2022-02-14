
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cacheinfo {unsigned int num_leaves; int cpu_map_populated; struct cacheinfo* info_list; } ;
struct cacheinfo {int dummy; } ;
struct _cpuid4_info_regs {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned int,struct _cpuid4_info_regs*) ;
 int FUNC_1 (int ,struct _cpuid4_info_regs*) ;
 unsigned int FUNC_2 (unsigned int,struct _cpuid4_info_regs*) ;
 int FUNC_3 (unsigned int,struct _cpuid4_info_regs*) ;
 struct cpu_cacheinfo* FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_0)
{
 unsigned int VAR_1, VAR_2;
 struct cpu_cacheinfo *VAR_3 = FUNC_4(VAR_0);
 struct cacheinfo *VAR_4 = VAR_3->info_list;
 struct _cpuid4_info_regs VAR_5 = {};

 for (VAR_1 = 0; VAR_1 < VAR_3->num_leaves; VAR_1++) {
  VAR_2 = FUNC_2(VAR_1, &VAR_5);
  if (VAR_2)
   return VAR_2;
  FUNC_3(VAR_0, &VAR_5);
  FUNC_1(VAR_4++, &VAR_5);
  FUNC_0(VAR_0, VAR_1, &VAR_5);
 }
 VAR_3->cpu_map_populated = 1;

 return 0;
}
