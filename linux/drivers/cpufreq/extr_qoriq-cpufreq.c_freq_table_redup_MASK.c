
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {scalar_t__ frequency; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cpufreq_frequency_table *VAR_1,
  int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   if (VAR_1[VAR_4].frequency == VAR_0 ||
     VAR_1[VAR_4].frequency !=
     VAR_1[VAR_3].frequency)
    continue;

   VAR_1[VAR_3].frequency = VAR_0;
   break;
  }
 }
}
