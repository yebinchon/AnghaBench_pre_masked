
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2416_data {scalar_t__ is_dvs; TYPE_1__* freq_table; int hclk; scalar_t__ disable_dvs; } ;
struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {int driver_data; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 struct s3c2416_data VAR_3 ;
 int FUNC_4 (struct s3c2416_data*,int) ;
 int FUNC_5 (struct s3c2416_data*,int) ;
 int FUNC_6 (struct s3c2416_data*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_4,
          unsigned int VAR_5)
{
 struct s3c2416_data *VAR_6 = &VAR_3;
 unsigned int VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;

 FUNC_1(&VAR_2);

 VAR_8 = VAR_6->freq_table[VAR_5].driver_data;

 if (VAR_8 == VAR_1)
  VAR_10 = 1;


 if (VAR_10 && VAR_6->disable_dvs) {
  FUNC_3("cpufreq: entering dvs mode not allowed\n");
  VAR_9 = -VAR_0;
  goto out;
 }





 VAR_7 = (VAR_6->is_dvs && !VAR_10)
    ? FUNC_0(VAR_6->hclk) / 1000
    : VAR_6->freq_table[VAR_5].frequency;

 if (VAR_10) {
  FUNC_3("cpufreq: enter dvs\n");
  VAR_9 = FUNC_4(VAR_6, VAR_8);
 } else if (VAR_6->is_dvs) {
  FUNC_3("cpufreq: leave dvs\n");
  VAR_9 = FUNC_5(VAR_6, VAR_8);
 } else {
  FUNC_3("cpufreq: change armdiv to %dkHz\n", VAR_7);
  VAR_9 = FUNC_6(VAR_6, VAR_7);
 }

out:
 FUNC_2(&VAR_2);

 return VAR_9;
}
