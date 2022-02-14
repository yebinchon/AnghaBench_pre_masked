
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpufreq_frequency_table {scalar_t__ frequency; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct cpufreq_frequency_table *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].frequency != VAR_0; VAR_2++)
  ;

 return VAR_2;
}
