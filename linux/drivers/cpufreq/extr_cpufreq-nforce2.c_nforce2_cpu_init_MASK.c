
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_freq; int max_freq; } ;
struct cpufreq_policy {scalar_t__ cpu; int min; int max; TYPE_1__ cpuinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;


 if (VAR_8->cpu != 0)
  return -VAR_1;


 VAR_9 = FUNC_0(0);

 if (!VAR_9)
  return -VAR_0;


 if (!VAR_5) {
  if (!VAR_4) {
   FUNC_2("cpu_khz not set, can't calculate multiplier!\n");
   return -VAR_1;
  }

  VAR_5 = VAR_4 / (VAR_9 * 100);
  VAR_10 = VAR_5 % 5;

  if (VAR_10) {
   if (VAR_10 > 2)
    VAR_5 += 5 - VAR_10;
   else
    VAR_5 -= VAR_10;
  }
 }

 FUNC_1("FSB currently at %i MHz, FID %d.%d\n",
  VAR_9, VAR_5 / 10, VAR_5 % 10);


 VAR_6 = FUNC_0(1);

 if (!VAR_6)
  return -VAR_0;

 if (!VAR_7)
  VAR_7 = VAR_6 - VAR_3;

 if (VAR_7 < VAR_2)
  VAR_7 = VAR_2;


 VAR_8->min = VAR_8->cpuinfo.min_freq = VAR_7 * VAR_5 * 100;
 VAR_8->max = VAR_8->cpuinfo.max_freq = VAR_6 * VAR_5 * 100;

 return 0;
}
