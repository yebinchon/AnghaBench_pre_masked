
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {size_t pc_cpuid; int pc_bsp; int pc_domain; int pc_hwref; } ;
struct cpuref {int cr_cpuid; int cr_domain; int cr_hwref; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pcpu* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 (void*,size_t) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct pcpu*,size_t,int) ;
 struct pcpu* VAR_8 ;
 int FUNC_7 (struct cpuref*) ;
 int FUNC_8 (struct cpuref*) ;
 int FUNC_9 (struct cpuref*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int) ;
 int VAR_9 ;

void
FUNC_12(void)
{
 struct cpuref VAR_10, VAR_11;
 struct pcpu *VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = FUNC_8(&VAR_10);
 FUNC_3(VAR_14 == 0, ("Don't know BSP"));

 VAR_14 = FUNC_7(&VAR_11);
 while (!VAR_14) {
  if (VAR_11.cr_cpuid >= VAR_1) {
   FUNC_11("SMP: cpu%d: skipped -- ID out of range\n",
       VAR_11.cr_cpuid);
   goto next;
  }
  if (FUNC_0(VAR_11.cr_cpuid, &VAR_6)) {
   FUNC_11("SMP: cpu%d: skipped - duplicate ID\n",
       VAR_11.cr_cpuid);
   goto next;
  }

  if (VAR_9 > 1)
   VAR_13 = VAR_11.cr_domain;
  else
   VAR_13 = 0;

  if (VAR_11.cr_cpuid != VAR_10.cr_cpuid) {
   void *VAR_15;

   VAR_12 = &VAR_5[VAR_11.cr_cpuid];
   VAR_15 = (void *)FUNC_5(FUNC_2(VAR_13),
       VAR_0, VAR_3 | VAR_4);
   FUNC_6(VAR_12, VAR_11.cr_cpuid, sizeof(*VAR_12));
   FUNC_4(VAR_15, VAR_11.cr_cpuid);
  } else {
   VAR_12 = VAR_8;
   VAR_12->pc_cpuid = VAR_10.cr_cpuid;
   VAR_12->pc_bsp = 1;
  }
  VAR_12->pc_domain = VAR_13;
  VAR_12->pc_hwref = VAR_11.cr_hwref;

  FUNC_1(VAR_12->pc_cpuid, &VAR_7[VAR_12->pc_domain]);
  FUNC_3(VAR_12->pc_domain < VAR_2, ("bad domain value %d\n",
      VAR_12->pc_domain));
  FUNC_1(VAR_12->pc_cpuid, &VAR_6);
next:
  VAR_14 = FUNC_9(&VAR_11);
 }




}
