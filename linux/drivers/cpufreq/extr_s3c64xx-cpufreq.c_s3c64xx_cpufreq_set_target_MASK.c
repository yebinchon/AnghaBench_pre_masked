
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c64xx_dvfs {int vddarm_max; int vddarm_min; } ;
struct cpufreq_policy {int clk; } ;
struct TYPE_2__ {unsigned int frequency; size_t driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 struct s3c64xx_dvfs* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_3,
          unsigned int VAR_4)
{
 struct s3c64xx_dvfs *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_3->clk) / 1000;
 VAR_7 = VAR_1[VAR_4].frequency;
 VAR_5 = &VAR_0[VAR_1[VAR_4].driver_data];
 VAR_8 = FUNC_1(VAR_3->clk, VAR_7 * 1000);
 if (VAR_8 < 0) {
  FUNC_3("Failed to set rate %dkHz: %d\n",
         VAR_7, VAR_8);
  return VAR_8;
 }
 FUNC_2("Set actual frequency %lukHz\n",
   FUNC_0(VAR_3->clk) / 1000);

 return 0;
}
