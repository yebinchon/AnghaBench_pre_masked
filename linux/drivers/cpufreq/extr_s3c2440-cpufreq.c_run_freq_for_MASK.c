
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {int dummy; } ;


 int FUNC_0 (struct cpufreq_frequency_table*,int,size_t,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0, unsigned long VAR_1,
   int *VAR_2,
   struct cpufreq_frequency_table *VAR_3,
   size_t VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = *VAR_2; VAR_7 > 0; VAR_7 = *VAR_2++) {
  VAR_5 = VAR_1 / VAR_7;

  if (VAR_5 > VAR_0 && VAR_7 != 1)
   continue;

  VAR_5 /= 1000;
  VAR_6 = FUNC_0(VAR_3, VAR_6, VAR_4, VAR_5);
  if (VAR_6 < 0)
   break;
 }

 return VAR_6;
}
