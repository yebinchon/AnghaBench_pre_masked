
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct fam15h_power_data {scalar_t__* cu_acc_power; scalar_t__* cpu_sw_pwr_ptsc; scalar_t__* cu_on; scalar_t__ max_cu_acc_power; int cpu_pwr_sample_ratio; int power_period; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int x86_max_cores; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct fam15h_power_data* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fam15h_power_data*) ;
 long FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 struct fam15h_power_data *VAR_5 = FUNC_0(VAR_2);
 u64 VAR_6[VAR_0], VAR_7[VAR_0],
     VAR_8[VAR_0];
 u64 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 signed long VAR_14;





 VAR_12 = VAR_1.x86_max_cores;

 VAR_13 = FUNC_3(VAR_5);
 if (VAR_13)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_6[VAR_11] = VAR_5->cu_acc_power[VAR_11];
  VAR_7[VAR_11] = VAR_5->cpu_sw_pwr_ptsc[VAR_11];
 }

 VAR_14 = FUNC_4(FUNC_2(VAR_5->power_period));
 if (VAR_14)
  return 0;

 VAR_13 = FUNC_3(VAR_5);
 if (VAR_13)
  return 0;

 for (VAR_11 = 0, VAR_10 = 0; VAR_11 < VAR_12; VAR_11++) {

  if (VAR_5->cu_on[VAR_11] == 0)
   continue;

  if (VAR_5->cu_acc_power[VAR_11] < VAR_6[VAR_11]) {
   VAR_8[VAR_11] = VAR_5->max_cu_acc_power + VAR_5->cu_acc_power[VAR_11];
   VAR_8[VAR_11] -= VAR_6[VAR_11];
  } else {
   VAR_8[VAR_11] = VAR_5->cu_acc_power[VAR_11] - VAR_6[VAR_11];
  }
  VAR_9 = VAR_5->cpu_sw_pwr_ptsc[VAR_11] - VAR_7[VAR_11];
  VAR_8[VAR_11] *= VAR_5->cpu_pwr_sample_ratio * 1000;
  FUNC_1(VAR_8[VAR_11], VAR_9);


  VAR_10 += VAR_8[VAR_11];
 }

 return FUNC_5(VAR_4, "%llu\n", (unsigned long long)VAR_10);
}
