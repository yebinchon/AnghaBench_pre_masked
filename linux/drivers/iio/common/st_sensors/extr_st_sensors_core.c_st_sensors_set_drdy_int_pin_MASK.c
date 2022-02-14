
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_sensors_platform_data {int drdy_int_pin; scalar_t__ open_drain; } ;
struct st_sensor_data {int drdy_int_pin; int int_pin_open_drain; TYPE_4__* sensor_settings; } ;
struct iio_dev {int dev; } ;
struct TYPE_6__ {int addr_od; int mask; int addr; } ;
struct TYPE_5__ {int addr_od; int mask; int addr; } ;
struct TYPE_7__ {TYPE_2__ int2; TYPE_1__ int1; } ;
struct TYPE_8__ {TYPE_3__ drdy_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 struct st_sensor_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
     struct st_sensors_platform_data *VAR_2)
{
 struct st_sensor_data *VAR_3 = FUNC_2(VAR_1);


 if (!VAR_3->sensor_settings->drdy_irq.int1.addr &&
     !VAR_3->sensor_settings->drdy_irq.int2.addr) {
  if (VAR_2->drdy_int_pin)
   FUNC_1(&VAR_1->dev,
     "DRDY on pin INT%d specified, but sensor "
     "does not support interrupts\n",
     VAR_2->drdy_int_pin);
  return 0;
 }

 switch (VAR_2->drdy_int_pin) {
 case 1:
  if (!VAR_3->sensor_settings->drdy_irq.int1.mask) {
   FUNC_0(&VAR_1->dev,
     "DRDY on INT1 not available.\n");
   return -VAR_0;
  }
  VAR_3->drdy_int_pin = 1;
  break;
 case 2:
  if (!VAR_3->sensor_settings->drdy_irq.int2.mask) {
   FUNC_0(&VAR_1->dev,
     "DRDY on INT2 not available.\n");
   return -VAR_0;
  }
  VAR_3->drdy_int_pin = 2;
  break;
 default:
  FUNC_0(&VAR_1->dev, "DRDY on pdata not valid.\n");
  return -VAR_0;
 }

 if (VAR_2->open_drain) {
  if (!VAR_3->sensor_settings->drdy_irq.int1.addr_od &&
      !VAR_3->sensor_settings->drdy_irq.int2.addr_od)
   FUNC_0(&VAR_1->dev,
    "open drain requested but unsupported.\n");
  else
   VAR_3->int_pin_open_drain = 1;
 }

 return 0;
}
