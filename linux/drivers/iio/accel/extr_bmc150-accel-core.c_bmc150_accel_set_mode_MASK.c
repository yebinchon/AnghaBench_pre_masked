
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct bmc150_accel_data {int regmap; } ;
typedef enum bmc150_power_modes { ____Placeholder_bmc150_power_modes } bmc150_power_modes ;
struct TYPE_3__ {int sleep_dur; int reg_value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct bmc150_accel_data *VAR_5,
     enum bmc150_power_modes VAR_6,
     int VAR_7)
{
 struct device *VAR_8 = FUNC_3(VAR_5->regmap);
 int VAR_9;
 int VAR_10;
 u8 VAR_11;
 int VAR_12 = -1;

 if (VAR_7 > 0) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4);
          ++VAR_9) {
   if (VAR_4[VAR_9].sleep_dur ==
         VAR_7)
    VAR_12 =
    VAR_4[VAR_9].reg_value;
  }
 } else {
  VAR_12 = 0;
 }

 if (VAR_12 < 0)
  return -VAR_3;

 VAR_11 = VAR_6 << VAR_1;
 VAR_11 |= (VAR_12 << VAR_0);

 FUNC_1(VAR_8, "Set Mode bits %x\n", VAR_11);

 VAR_10 = FUNC_4(VAR_5->regmap, VAR_2, VAR_11);
 if (VAR_10 < 0) {
  FUNC_2(VAR_8, "Error writing reg_pmu_lpw\n");
  return VAR_10;
 }

 return 0;
}
