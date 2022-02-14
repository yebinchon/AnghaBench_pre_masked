
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bmi160_data {int regmap; } ;
typedef enum bmi160_sensor_type { ____Placeholder_bmi160_sensor_type } bmi160_sensor_type ;
struct TYPE_2__ {int pmu_cmd_suspend; int pmu_cmd_normal; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static
int FUNC_2(struct bmi160_data *VAR_3, enum bmi160_sensor_type VAR_4,
      bool VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 if (VAR_5)
  VAR_7 = VAR_2[VAR_4].pmu_cmd_normal;
 else
  VAR_7 = VAR_2[VAR_4].pmu_cmd_suspend;

 VAR_6 = FUNC_0(VAR_3->regmap, VAR_0, VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_1[VAR_4], VAR_1[VAR_4] + 1000);

 return 0;
}
