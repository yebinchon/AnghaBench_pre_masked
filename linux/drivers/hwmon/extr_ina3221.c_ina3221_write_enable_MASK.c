
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ina3221_data {int reg_config; int pm_dev; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct ina3221_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, int VAR_2, bool VAR_3)
{
 struct ina3221_data *VAR_4 = FUNC_2(VAR_1);
 u16 VAR_5, VAR_6 = FUNC_0(VAR_2);
 u16 VAR_7 = VAR_4->reg_config & VAR_6;
 u32 VAR_8;
 int VAR_9;

 VAR_5 = VAR_3 ? VAR_6 : 0;


 if (VAR_7 == VAR_5)
  return 0;


 if (VAR_3) {
  VAR_9 = FUNC_3(VAR_4->pm_dev);
  if (VAR_9 < 0) {
   FUNC_1(VAR_1, "Failed to get PM runtime\n");
   return VAR_9;
  }
 }


 VAR_8 = (VAR_4->reg_config & ~VAR_6) | (VAR_5 & VAR_6);
 VAR_9 = FUNC_5(VAR_4->regmap, VAR_0, VAR_8);
 if (VAR_9)
  goto fail;


 VAR_4->reg_config = VAR_8;


 if (!VAR_3)
  FUNC_4(VAR_4->pm_dev);

 return 0;

fail:
 if (VAR_3) {
  FUNC_1(VAR_1, "Failed to enable channel %d: error %d\n",
   VAR_2, VAR_9);
  FUNC_4(VAR_4->pm_dev);
 }

 return VAR_9;
}
