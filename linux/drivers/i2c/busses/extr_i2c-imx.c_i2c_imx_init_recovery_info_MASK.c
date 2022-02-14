
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {struct i2c_bus_recovery_info* bus_recovery_info; } ;
struct i2c_bus_recovery_info {int recover_bus; int unprepare_recovery; int prepare_recovery; void* sda_gpiod; void* scl_gpiod; } ;
struct imx_i2c_struct {TYPE_1__ adapter; void* pinctrl_pins_gpio; void* pinctrl_pins_default; void* pinctrl; struct i2c_bus_recovery_info rinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 char* VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*,int ) ;
 void* FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_6 (void*,char*) ;

__attribute__((used)) static int FUNC_7(struct imx_i2c_struct *VAR_7,
  struct platform_device *VAR_8)
{
 struct i2c_bus_recovery_info *VAR_9 = &VAR_7->rinfo;

 VAR_7->pinctrl = FUNC_5(&VAR_8->dev);
 if (!VAR_7->pinctrl || FUNC_0(VAR_7->pinctrl)) {
  FUNC_3(&VAR_8->dev, "can't get pinctrl, bus recovery not supported\n");
  return FUNC_1(VAR_7->pinctrl);
 }

 VAR_7->pinctrl_pins_default = FUNC_6(VAR_7->pinctrl,
   VAR_3);
 VAR_7->pinctrl_pins_gpio = FUNC_6(VAR_7->pinctrl,
   "gpio");
 VAR_9->sda_gpiod = FUNC_4(&VAR_8->dev, "sda", VAR_1);
 VAR_9->scl_gpiod = FUNC_4(&VAR_8->dev, "scl", VAR_2);

 if (FUNC_1(VAR_9->sda_gpiod) == -VAR_0 ||
     FUNC_1(VAR_9->scl_gpiod) == -VAR_0) {
  return -VAR_0;
 } else if (FUNC_0(VAR_9->sda_gpiod) ||
     FUNC_0(VAR_9->scl_gpiod) ||
     FUNC_0(VAR_7->pinctrl_pins_default) ||
     FUNC_0(VAR_7->pinctrl_pins_gpio)) {
  FUNC_2(&VAR_8->dev, "recovery information incomplete\n");
  return 0;
 }

 FUNC_2(&VAR_8->dev, "using scl%s for recovery\n",
  VAR_9->sda_gpiod ? ",sda" : "");

 VAR_9->prepare_recovery = VAR_5;
 VAR_9->unprepare_recovery = VAR_6;
 VAR_9->recover_bus = VAR_4;
 VAR_7->adapter.bus_recovery_info = VAR_9;

 return 0;
}
