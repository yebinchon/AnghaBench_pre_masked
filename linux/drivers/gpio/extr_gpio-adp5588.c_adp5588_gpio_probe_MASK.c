
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; scalar_t__ irq; int name; int adapter; } ;
struct gpio_chip {int can_sleep; int base; int ngpio; int owner; int label; int names; int * parent; int set; int get; int direction_output; int direction_input; } ;
struct adp5588_gpio_platform_data {int gpio_start; unsigned int pullup_dis_mask; int (* setup ) (struct i2c_client*,int,int ,int ) ;int context; int names; } ;
struct adp5588_gpio {struct gpio_chip gpio_chip; void** dir; void** dat_out; struct i2c_client* client; int lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_2 (struct i2c_client*,scalar_t__) ;
 int VAR_16 ;
 int FUNC_3 (struct i2c_client*,scalar_t__,unsigned int) ;
 int FUNC_4 (struct adp5588_gpio*) ;
 int FUNC_5 (int *,char*) ;
 struct adp5588_gpio_platform_data* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,struct gpio_chip*,struct adp5588_gpio*) ;
 struct adp5588_gpio* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct i2c_client*,struct adp5588_gpio*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct i2c_client*,int,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_17)
{
 struct adp5588_gpio_platform_data *VAR_18 =
   FUNC_6(&VAR_17->dev);
 struct adp5588_gpio *VAR_19;
 struct gpio_chip *VAR_20;
 int VAR_21, VAR_22, VAR_23;
 unsigned int VAR_24 = 0;

 if (!FUNC_10(VAR_17->adapter,
     VAR_10)) {
  FUNC_5(&VAR_17->dev, "SMBUS Byte Data not Supported\n");
  return -VAR_3;
 }

 VAR_19 = FUNC_9(&VAR_17->dev, sizeof(*VAR_19), VAR_5);
 if (!VAR_19)
  return -VAR_4;

 VAR_19->client = VAR_17;

 VAR_20 = &VAR_19->gpio_chip;
 VAR_20->direction_input = VAR_13;
 VAR_20->direction_output = VAR_14;
 VAR_20->get = VAR_15;
 VAR_20->set = VAR_16;
 VAR_20->can_sleep = 1;
 VAR_20->base = -1;
 VAR_20->parent = &VAR_17->dev;

 if (VAR_18) {
  VAR_20->base = VAR_18->gpio_start;
  VAR_20->names = VAR_18->names;
  VAR_24 = VAR_18->pullup_dis_mask;
 }

 VAR_20->ngpio = VAR_1;
 VAR_20->label = VAR_17->name;
 VAR_20->owner = VAR_12;

 FUNC_12(&VAR_19->lock);

 VAR_21 = FUNC_2(VAR_19->client, VAR_2);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_23 = VAR_21 & VAR_0;

 for (VAR_22 = 0, VAR_21 = 0; VAR_22 <= FUNC_0(VAR_1); VAR_22++) {
  VAR_19->dat_out[VAR_22] = FUNC_2(VAR_17, VAR_6 + VAR_22);
  VAR_19->dir[VAR_22] = FUNC_2(VAR_17, VAR_7 + VAR_22);
  VAR_21 |= FUNC_3(VAR_17, VAR_11 + VAR_22, 0);
  VAR_21 |= FUNC_3(VAR_17, VAR_9 + VAR_22,
    (VAR_24 >> (8 * VAR_22)) & 0xFF);
  VAR_21 |= FUNC_3(VAR_17, VAR_8 + VAR_22, 0);
  if (VAR_21)
   return VAR_21;
 }

 if (VAR_17->irq) {
  if (FUNC_1(VAR_23)) {
   FUNC_7(&VAR_17->dev, "GPIO int not supported\n");
  } else {
   VAR_21 = FUNC_4(VAR_19);
   if (VAR_21)
    return VAR_21;
  }
 }

 VAR_21 = FUNC_8(&VAR_17->dev, &VAR_19->gpio_chip, VAR_19);
 if (VAR_21)
  return VAR_21;

 if (VAR_18 && VAR_18->setup) {
  VAR_21 = VAR_18->setup(VAR_17, VAR_20->base, VAR_20->ngpio, VAR_18->context);
  if (VAR_21 < 0)
   FUNC_7(&VAR_17->dev, "setup failed, %d\n", VAR_21);
 }

 FUNC_11(VAR_17, VAR_19);

 return 0;
}
