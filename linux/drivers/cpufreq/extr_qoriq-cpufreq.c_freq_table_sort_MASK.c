
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {unsigned int frequency; int driver_data; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cpufreq_frequency_table *VAR_1,
  int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;
 struct cpufreq_frequency_table VAR_8;

 for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++) {
  VAR_7 = VAR_1[VAR_3].frequency;
  VAR_5 = VAR_3;
  for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_2; VAR_4++) {
   VAR_6 = VAR_1[VAR_4].frequency;
   if (VAR_6 == VAR_0 ||
     VAR_6 <= VAR_7)
    continue;
   VAR_5 = VAR_4;
   VAR_7 = VAR_6;
  }

  if (VAR_5 != VAR_3) {

   VAR_8.driver_data = VAR_1[VAR_3].driver_data;
   VAR_8.frequency = VAR_1[VAR_3].frequency;
   VAR_1[VAR_3].driver_data = VAR_1[VAR_5].driver_data;
   VAR_1[VAR_3].frequency = VAR_1[VAR_5].frequency;
   VAR_1[VAR_5].driver_data = VAR_8.driver_data;
   VAR_1[VAR_5].frequency = VAR_8.frequency;
  }
 }
}
