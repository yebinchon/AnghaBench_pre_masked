
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int cr_cpuid; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cpuref*) ;
 int FUNC_2 (struct cpuref*) ;

void
FUNC_3(void)
{
 struct cpuref VAR_2;
 int VAR_3;

 VAR_1 = 0;
 VAR_0 = 0;
 VAR_3 = FUNC_1(&VAR_2);
 while (!VAR_3) {
  VAR_1++;
  VAR_0 = FUNC_0(VAR_2.cr_cpuid, VAR_0);
  VAR_3 = FUNC_2(&VAR_2);
 }

 if (VAR_1 == 0)
  VAR_1 = 1;
}
