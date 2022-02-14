
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86_max_cores; int cpuid_level; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

void FUNC_2(struct cpuinfo_x86 *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_1->x86_max_cores = 1;
 if (!FUNC_0(VAR_0) || VAR_1->cpuid_level < 4)
  return;

 FUNC_1(4, 0, &VAR_2, &VAR_3, &VAR_4, &VAR_5);
 if (VAR_2 & 0x1f)
  VAR_1->x86_max_cores = (VAR_2 >> 26) + 1;
}
