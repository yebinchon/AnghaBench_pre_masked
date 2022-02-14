
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int cpu_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct cpuinfo_x86*,struct cpuinfo_x86*) ;
 int FUNC_2 (struct cpuinfo_x86*,struct cpuinfo_x86*,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct cpuinfo_x86 *VAR_3, struct cpuinfo_x86 *VAR_4)
{
 int VAR_5 = VAR_3->cpu_index, VAR_6 = VAR_4->cpu_index;


 if (FUNC_0(VAR_1, VAR_5) == VAR_0)
  return 0;


 if (FUNC_0(VAR_1, VAR_5) != FUNC_0(VAR_1, VAR_6))
  return 0;






 if (!FUNC_1(VAR_3, VAR_4) && FUNC_3(VAR_2))
  return 0;

 return FUNC_2(VAR_3, VAR_4, "llc");
}
