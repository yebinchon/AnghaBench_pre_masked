
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct menf21bmc_hwmon {struct i2c_client* i2c_client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct device* FUNC_4 (TYPE_1__*,char*,struct menf21bmc_hwmon*,int ) ;
 struct menf21bmc_hwmon* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct menf21bmc_hwmon*) ;
 int VAR_2 ;
 struct i2c_client* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 int VAR_4;
 struct menf21bmc_hwmon *VAR_5;
 struct i2c_client *VAR_6 = FUNC_7(VAR_3->dev.parent);
 struct device *VAR_7;

 VAR_5 = FUNC_5(&VAR_3->dev, sizeof(struct menf21bmc_hwmon),
    VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->i2c_client = VAR_6;

 VAR_4 = FUNC_6(VAR_5);
 if (VAR_4) {
  FUNC_2(&VAR_3->dev, "failed to read sensor limits");
  return VAR_4;
 }

 VAR_7 = FUNC_4(&VAR_3->dev,
         "menf21bmc", VAR_5,
         VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_3(&VAR_3->dev, "MEN 14F021P00 BMC hwmon device enabled");

 return 0;
}
