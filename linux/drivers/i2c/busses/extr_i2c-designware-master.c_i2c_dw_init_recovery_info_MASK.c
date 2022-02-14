
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_bus_recovery_info {struct gpio_desc* sda_gpiod; int unprepare_recovery; int prepare_recovery; int recover_bus; struct gpio_desc* scl_gpiod; } ;
struct i2c_adapter {struct i2c_bus_recovery_info* bus_recovery_info; } ;
struct gpio_desc {int dummy; } ;
struct dw_i2c_dev {int dev; struct i2c_adapter adapter; struct i2c_bus_recovery_info rinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (int ,char*,char*) ;
 struct gpio_desc* FUNC_5 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct dw_i2c_dev *VAR_5)
{
 struct i2c_bus_recovery_info *VAR_6 = &VAR_5->rinfo;
 struct i2c_adapter *VAR_7 = &VAR_5->adapter;
 struct gpio_desc *VAR_8;

 VAR_8 = FUNC_5(VAR_5->dev, "scl", VAR_1);
 if (FUNC_1(VAR_8))
  return FUNC_3(VAR_8);

 VAR_6->scl_gpiod = VAR_8;

 VAR_8 = FUNC_5(VAR_5->dev, "sda", VAR_0);
 if (FUNC_0(VAR_8))
  return FUNC_2(VAR_8);
 VAR_6->sda_gpiod = VAR_8;

 VAR_6->recover_bus = VAR_4;
 VAR_6->prepare_recovery = VAR_2;
 VAR_6->unprepare_recovery = VAR_3;
 VAR_7->bus_recovery_info = VAR_6;

 FUNC_4(VAR_5->dev, "running with gpio recovery mode! scl%s",
   VAR_6->sda_gpiod ? ",sda" : "");

 return 0;
}
