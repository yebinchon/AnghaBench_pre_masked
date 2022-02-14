
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct bmc150_accel_data {TYPE_1__* chip_info; int range; int regmap; } ;
struct TYPE_4__ {int scale; int reg_range; } ;
struct TYPE_3__ {TYPE_2__* scale_table; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct bmc150_accel_data *VAR_2, int VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_2->regmap);
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2->chip_info->scale_table); ++VAR_6) {
  if (VAR_2->chip_info->scale_table[VAR_6].scale == VAR_3) {
   VAR_5 = FUNC_3(VAR_2->regmap,
         VAR_0,
         VAR_2->chip_info->scale_table[VAR_6].reg_range);
   if (VAR_5 < 0) {
    FUNC_1(VAR_4, "Error writing pmu_range\n");
    return VAR_5;
   }

   VAR_2->range = VAR_2->chip_info->scale_table[VAR_6].reg_range;
   return 0;
  }
 }

 return -VAR_1;
}
