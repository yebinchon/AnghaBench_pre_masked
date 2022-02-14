
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct davinci_cpufreq_config {int (* set_voltage ) (unsigned int) ;TYPE_1__* freq_table; } ;
struct cpufreq_policy {unsigned int cur; } ;
struct clk {int dummy; } ;
struct TYPE_6__ {unsigned int asyncrate; struct clk* asyncclk; struct clk* armclk; TYPE_2__* dev; } ;
struct TYPE_5__ {struct davinci_cpufreq_config* platform_data; } ;
struct TYPE_4__ {unsigned int frequency; } ;


 int FUNC_0 (struct clk*,unsigned int) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_1, unsigned int VAR_2)
{
 struct davinci_cpufreq_config *VAR_3 = VAR_0.dev->platform_data;
 struct clk *VAR_4 = VAR_0.armclk;
 unsigned int VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_1->cur;
 VAR_6 = VAR_3->freq_table[VAR_2].frequency;


 if (VAR_3->set_voltage && VAR_6 > VAR_5) {
  VAR_7 = VAR_3->set_voltage(VAR_2);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_6 * 1000);
 if (VAR_7)
  return VAR_7;

 if (VAR_0.asyncclk) {
  VAR_7 = FUNC_0(VAR_0.asyncclk, VAR_0.asyncrate);
  if (VAR_7)
   return VAR_7;
 }


 if (VAR_3->set_voltage && VAR_6 < VAR_5)
  VAR_3->set_voltage(VAR_2);

 return 0;
}
