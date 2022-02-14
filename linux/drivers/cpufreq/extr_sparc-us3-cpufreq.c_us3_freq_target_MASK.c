
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int cpu; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (unsigned int,int ,unsigned long*,int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4->cpu;
 unsigned long VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_6) / 1000;
 switch (VAR_5) {
 case 0:
  VAR_7 = VAR_0;
  VAR_8 /= 1;
  break;
 case 1:
  VAR_7 = VAR_1;
  VAR_8 /= 2;
  break;
 case 2:
  VAR_7 = VAR_2;
  VAR_8 /= 32;
  break;

 default:
  FUNC_0();
 }

 return FUNC_1(VAR_6, VAR_3, &VAR_7, 1);
}
