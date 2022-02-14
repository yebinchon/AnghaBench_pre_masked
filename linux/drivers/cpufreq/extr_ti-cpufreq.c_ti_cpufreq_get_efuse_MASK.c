
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_cpufreq_data {TYPE_1__* soc_data; int syscon; struct device* cpu_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int efuse_mask; int efuse_shift; int (* efuse_xlate ) (struct ti_cpufreq_data*,int) ;int efuse_offset; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (struct ti_cpufreq_data*,int) ;

__attribute__((used)) static int FUNC_3(struct ti_cpufreq_data *VAR_0,
    u32 *VAR_1)
{
 struct device *VAR_2 = VAR_0->cpu_dev;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->syscon, VAR_0->soc_data->efuse_offset,
     &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2,
   "Failed to read the efuse value from syscon: %d\n",
   VAR_4);
  return VAR_4;
 }

 VAR_3 = (VAR_3 & VAR_0->soc_data->efuse_mask);
 VAR_3 >>= VAR_0->soc_data->efuse_shift;

 *VAR_1 = VAR_0->soc_data->efuse_xlate(VAR_0, VAR_3);

 return 0;
}
