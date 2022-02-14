
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_cpufreq_data {TYPE_1__* soc_data; int syscon; struct device* cpu_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int rev_offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct ti_cpufreq_data *VAR_2,
         u32 *VAR_3)
{
 struct device *VAR_4 = VAR_2->cpu_dev;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2->syscon, VAR_2->soc_data->rev_offset,
     &VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_4,
   "Failed to read the revision number from syscon: %d\n",
   VAR_6);
  return VAR_6;
 }

 *VAR_3 = FUNC_0((VAR_5 >> VAR_1) & VAR_0);

 return 0;
}
