
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct gpio_chip {int can_sleep; unsigned int base; int ngpio; int owner; int * parent; int label; int get; int set_multiple; int set; int direction_output; int direction_input; } ;
struct max732x_chip {unsigned int dir_output; unsigned int dir_input; unsigned int mask_group_a; TYPE_1__* client; struct gpio_chip gpio_chip; } ;
struct i2c_device_id {size_t driver_data; } ;
struct TYPE_2__ {int dev; int name; } ;





 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct max732x_chip *VAR_7,
     const struct i2c_device_id *VAR_8,
     unsigned VAR_9)
{
 struct gpio_chip *VAR_10 = &VAR_7->gpio_chip;
 uint32_t VAR_11 = (uint32_t)VAR_1[VAR_8->driver_data];
 int VAR_12, VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < 16; VAR_12++, VAR_11 >>= 2) {
  unsigned int VAR_14 = 1 << VAR_13;

  switch (VAR_11 & 0x3) {
  case 128:
   VAR_7->dir_output |= VAR_14;
   break;
  case 130:
   VAR_7->dir_input |= VAR_14;
   break;
  case 129:
   VAR_7->dir_output |= VAR_14;
   VAR_7->dir_input |= VAR_14;
   break;
  default:
   continue;
  }

  if (VAR_12 < 8)
   VAR_7->mask_group_a |= VAR_14;
  VAR_13++;
 }

 if (VAR_7->dir_input)
  VAR_10->direction_input = VAR_2;
 if (VAR_7->dir_output) {
  VAR_10->direction_output = VAR_3;
  VAR_10->set = VAR_6;
  VAR_10->set_multiple = VAR_5;
 }
 VAR_10->get = VAR_4;
 VAR_10->can_sleep = 1;

 VAR_10->base = VAR_9;
 VAR_10->ngpio = VAR_13;
 VAR_10->label = VAR_7->client->name;
 VAR_10->parent = &VAR_7->client->dev;
 VAR_10->owner = VAR_0;

 return VAR_13;
}
