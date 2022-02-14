
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct max732x_platform_data {int (* setup ) (struct i2c_client*,int ,int ,int ) ;int context; int gpio_base; } ;
struct TYPE_11__ {int ngpio; int base; TYPE_1__* parent; } ;
struct max732x_chip {TYPE_5__ gpio_chip; int * reg_out; int lock; struct i2c_client* client_dummy; struct i2c_client* client_group_a; struct i2c_client* client_group_b; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct i2c_client {int addr; TYPE_1__ dev; int adapter; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct max732x_platform_data* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_5__*,struct max732x_chip*) ;
 struct i2c_client* FUNC_7 (TYPE_1__*,int ,int) ;
 struct max732x_chip* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (struct i2c_client*,struct max732x_chip*) ;
 int FUNC_10 (struct max732x_chip*,int) ;
 int FUNC_11 (struct max732x_chip*,struct i2c_device_id const*) ;
 int FUNC_12 (struct max732x_chip*,int ,int *) ;
 int FUNC_13 (struct max732x_chip*,struct i2c_device_id const*,int ) ;
 int FUNC_14 (int *) ;
 struct max732x_platform_data* FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_4,
       const struct i2c_device_id *VAR_5)
{
 struct max732x_platform_data *VAR_6;
 struct device_node *VAR_7;
 struct max732x_chip *VAR_8;
 struct i2c_client *VAR_9;
 uint16_t VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_6 = FUNC_4(&VAR_4->dev);
 VAR_7 = VAR_4->dev.of_node;

 if (!VAR_6 && VAR_7)
  VAR_6 = FUNC_15(&VAR_4->dev);

 if (!VAR_6) {
  FUNC_2(&VAR_4->dev, "no platform data\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_8(&VAR_4->dev, sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_2;
 VAR_8->client = VAR_4;

 VAR_13 = FUNC_13(VAR_8, VAR_5, VAR_6->gpio_base);
 VAR_8->gpio_chip.parent = &VAR_4->dev;

 VAR_10 = (VAR_4->addr & 0x0f) | 0x60;
 VAR_11 = (VAR_4->addr & 0x0f) | 0x50;

 switch (VAR_4->addr & 0x70) {
 case 0x60:
  VAR_8->client_group_a = VAR_4;
  if (VAR_13 > 8) {
   VAR_9 = FUNC_7(&VAR_4->dev,
            VAR_4->adapter, VAR_11);
   if (FUNC_0(VAR_9)) {
    FUNC_3(&VAR_4->dev,
     "Failed to allocate I2C device\n");
    return FUNC_1(VAR_9);
   }
   VAR_8->client_group_b = VAR_8->client_dummy = VAR_9;
  }
  break;
 case 0x50:
  VAR_8->client_group_b = VAR_4;
  if (VAR_13 > 8) {
   VAR_9 = FUNC_7(&VAR_4->dev,
            VAR_4->adapter, VAR_10);
   if (FUNC_0(VAR_9)) {
    FUNC_3(&VAR_4->dev,
     "Failed to allocate I2C device\n");
    return FUNC_1(VAR_9);
   }
   VAR_8->client_group_a = VAR_8->client_dummy = VAR_9;
  }
  break;
 default:
  FUNC_3(&VAR_4->dev, "invalid I2C address specified %02x\n",
    VAR_4->addr);
  return -VAR_0;
 }

 if (VAR_13 > 8 && !VAR_8->client_dummy) {
  FUNC_3(&VAR_4->dev,
   "Failed to allocate second group I2C device\n");
  return -VAR_1;
 }

 FUNC_14(&VAR_8->lock);

 VAR_12 = FUNC_12(VAR_8, FUNC_10(VAR_8, 0), &VAR_8->reg_out[0]);
 if (VAR_12)
  return VAR_12;
 if (VAR_13 > 8) {
  VAR_12 = FUNC_12(VAR_8, FUNC_10(VAR_8, 8), &VAR_8->reg_out[1]);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_6(&VAR_4->dev, &VAR_8->gpio_chip, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_11(VAR_8, VAR_5);
 if (VAR_12)
  return VAR_12;

 if (VAR_6 && VAR_6->setup) {
  VAR_12 = VAR_6->setup(VAR_4, VAR_8->gpio_chip.base,
    VAR_8->gpio_chip.ngpio, VAR_6->context);
  if (VAR_12 < 0)
   FUNC_5(&VAR_4->dev, "setup failed, %d\n", VAR_12);
 }

 FUNC_9(VAR_4, VAR_8);
 return 0;
}
