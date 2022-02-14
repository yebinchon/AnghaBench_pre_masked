
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct lochnagar_hwmon {int sensor_lock; struct regmap* regmap; } ;
struct device {int dummy; } ;
typedef enum lochnagar_measure_mode { ____Placeholder_lochnagar_measure_mode } lochnagar_measure_mode ;


 int FUNC_0 (struct device*,char*,int) ;
 struct lochnagar_hwmon* FUNC_1 (struct device*) ;
 int FUNC_2 (struct regmap*,int,int,int) ;
 long FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct regmap*,int,int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0, int VAR_1,
         enum lochnagar_measure_mode VAR_2, int VAR_3,
         unsigned int VAR_4, long *VAR_5)
{
 struct lochnagar_hwmon *VAR_6 = FUNC_1(VAR_0);
 struct regmap *VAR_7 = VAR_6->regmap;
 u32 VAR_8;
 int VAR_9;

 FUNC_4(&VAR_6->sensor_lock);

 VAR_9 = FUNC_2(VAR_7, VAR_1, VAR_2, VAR_3);
 if (VAR_9 < 0) {
  FUNC_0(VAR_0, "Failed to perform measurement: %d\n", VAR_9);
  goto error;
 }

 VAR_9 = FUNC_6(VAR_7, VAR_1, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_0, "Failed to read measurement: %d\n", VAR_9);
  goto error;
 }

 *VAR_5 = FUNC_3(VAR_8, VAR_4);

error:
 FUNC_5(&VAR_6->sensor_lock);

 return VAR_9;
}
