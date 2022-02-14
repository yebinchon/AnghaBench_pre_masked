
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mlxreg_fan {struct device* cdev; int regmap; struct device* dev; } ;
struct mlxreg_core_platform_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct mlxreg_core_platform_data* FUNC_4 (struct device*) ;
 struct device* FUNC_5 (struct device*,char*,struct mlxreg_fan*,int *,int *) ;
 struct mlxreg_fan* FUNC_6 (struct device*,int,int ) ;
 struct device* FUNC_7 (struct device*,int *,char*,struct mlxreg_fan*,int *) ;
 int FUNC_8 (struct mlxreg_fan*,struct mlxreg_core_platform_data*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct mlxreg_core_platform_data *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct mlxreg_fan *VAR_9;
 struct device *VAR_10;
 int VAR_11;

 VAR_7 = FUNC_4(VAR_8);
 if (!VAR_7) {
  FUNC_3(VAR_8, "Failed to get platform data.\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_6(VAR_8, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->dev = VAR_8;
 VAR_9->regmap = VAR_7->regmap;

 VAR_11 = FUNC_8(VAR_9, VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_5(VAR_8, "mlxreg_fan",
         VAR_9,
         &VAR_5,
         ((void*)0));
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_8, "Failed to register hwmon device\n");
  return FUNC_2(VAR_10);
 }

 if (FUNC_1(VAR_0)) {
  VAR_9->cdev = FUNC_7(VAR_8,
   ((void*)0), "mlxreg_fan", VAR_9, &VAR_4);
  if (FUNC_0(VAR_9->cdev)) {
   FUNC_3(VAR_8, "Failed to register cooling device\n");
   return FUNC_2(VAR_9->cdev);
  }
 }

 return 0;
}
