
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {int id; struct device dev; } ;
struct i2c_gpio_platform_data {int udelay; int timeout; scalar_t__ scl_is_output_only; scalar_t__ scl_is_open_drain; scalar_t__ sda_is_open_drain; } ;
struct i2c_algo_bit_data {int can_do_atomic; int udelay; int timeout; struct i2c_gpio_private_data* data; int getsda; int getscl; int setscl; int setsda; } ;
struct TYPE_2__ {struct device_node* of_node; struct device* parent; } ;
struct i2c_adapter {int class; int nr; TYPE_1__ dev; struct i2c_algo_bit_data* algo_data; int name; int owner; } ;
struct i2c_gpio_private_data {void* scl; void* sda; struct i2c_gpio_platform_data pdata; struct i2c_algo_bit_data bit_data; struct i2c_adapter adap; } ;
struct device_node {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_7 ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int ,int ,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*) ;
 struct i2c_gpio_private_data* FUNC_7 (struct device*,int,int ) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (struct i2c_adapter*) ;
 int FUNC_10 (struct platform_device*) ;
 void* FUNC_11 (struct device*,char*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (struct i2c_gpio_platform_data*,scalar_t__,int) ;
 int FUNC_13 (struct device_node*,struct i2c_gpio_platform_data*) ;
 int FUNC_14 (struct platform_device*,struct i2c_gpio_private_data*) ;
 int FUNC_15 (int ,int,char*,int) ;
 int FUNC_16 (int ,int ,int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_12)
{
 struct i2c_gpio_private_data *VAR_13;
 struct i2c_gpio_platform_data *VAR_14;
 struct i2c_algo_bit_data *VAR_15;
 struct i2c_adapter *VAR_16;
 struct device *VAR_17 = &VAR_12->dev;
 struct device_node *VAR_18 = VAR_17->of_node;
 enum gpiod_flags VAR_19;
 int VAR_20;

 VAR_13 = FUNC_7(VAR_17, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_16 = &VAR_13->adap;
 VAR_15 = &VAR_13->bit_data;
 VAR_14 = &VAR_13->pdata;

 if (VAR_18) {
  FUNC_13(VAR_18, VAR_14);
 } else {




  if (FUNC_3(VAR_17))
   FUNC_12(VAR_14, FUNC_3(VAR_17), sizeof(*VAR_14));
 }
 if (VAR_14->sda_is_open_drain)
  VAR_19 = VAR_2;
 else
  VAR_19 = VAR_3;
 VAR_13->sda = FUNC_11(VAR_17, "sda", 0, VAR_19);
 if (FUNC_0(VAR_13->sda))
  return FUNC_1(VAR_13->sda);

 if (VAR_14->scl_is_open_drain)
  VAR_19 = VAR_2;
 else
  VAR_19 = VAR_3;
 VAR_13->scl = FUNC_11(VAR_17, "scl", 1, VAR_19);
 if (FUNC_0(VAR_13->scl))
  return FUNC_1(VAR_13->scl);

 if (FUNC_8(VAR_13->sda) || FUNC_8(VAR_13->scl))
  FUNC_6(VAR_17, "Slow GPIO pins might wreak havoc into I2C/SMBus bus timing");
 else
  VAR_15->can_do_atomic = 1;

 VAR_15->setsda = VAR_11;
 VAR_15->setscl = VAR_10;

 if (!VAR_14->scl_is_output_only)
  VAR_15->getscl = VAR_8;
 VAR_15->getsda = VAR_9;

 if (VAR_14->udelay)
  VAR_15->udelay = VAR_14->udelay;
 else if (VAR_14->scl_is_output_only)
  VAR_15->udelay = 50;
 else
  VAR_15->udelay = 5;

 if (VAR_14->timeout)
  VAR_15->timeout = VAR_14->timeout;
 else
  VAR_15->timeout = VAR_4 / 10;

 VAR_15->data = VAR_13;

 VAR_16->owner = VAR_7;
 if (VAR_18)
  FUNC_16(VAR_16->name, FUNC_5(VAR_17), sizeof(VAR_16->name));
 else
  FUNC_15(VAR_16->name, sizeof(VAR_16->name), "i2c-gpio%d", VAR_12->id);

 VAR_16->algo_data = VAR_15;
 VAR_16->class = VAR_5 | VAR_6;
 VAR_16->dev.parent = VAR_17;
 VAR_16->dev.of_node = VAR_18;

 VAR_16->nr = VAR_12->id;
 VAR_20 = FUNC_9(VAR_16);
 if (VAR_20)
  return VAR_20;

 FUNC_14(VAR_12, VAR_13);






 FUNC_4(VAR_17, "using lines %u (SDA) and %u (SCL%s)\n",
   FUNC_2(VAR_13->sda), FUNC_2(VAR_13->scl),
   VAR_14->scl_is_output_only
   ? ", no clock stretching" : "");

 FUNC_10(VAR_12);

 return 0;
}
