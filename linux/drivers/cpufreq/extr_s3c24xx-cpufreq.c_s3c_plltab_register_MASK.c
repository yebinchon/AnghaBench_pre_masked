
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpufreq_frequency_table* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct cpufreq_frequency_table*,struct cpufreq_frequency_table*,unsigned int) ;
 struct cpufreq_frequency_table* VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int) ;

int FUNC_4(struct cpufreq_frequency_table *VAR_4,
          unsigned int VAR_5)
{
 struct cpufreq_frequency_table *VAR_6;
 unsigned int VAR_7;

 VAR_7 = sizeof(*VAR_6) * (VAR_5 + 1);

 VAR_6 = FUNC_0(VAR_7, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_6, VAR_4, VAR_7);
  VAR_3 = VAR_6;



  VAR_6 += VAR_5;
  VAR_6->frequency = VAR_0;

  FUNC_3("%d PLL entries\n", VAR_5);
 } else
  FUNC_2("no memory for PLL tables\n");

 return VAR_6 ? 0 : -VAR_1;
}
