
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct st_sensors_platform_data {int dummy; } ;
struct st_sensor_data {int drdy_int_pin; TYPE_7__* sensor_settings; scalar_t__ int_pin_open_drain; int odr; TYPE_1__* current_fullscale; } ;
struct TYPE_16__ {int parent; } ;
struct iio_dev {TYPE_8__ dev; } ;
struct TYPE_13__ {scalar_t__ mask_od; scalar_t__ addr_od; } ;
struct TYPE_12__ {scalar_t__ mask_od; scalar_t__ addr_od; } ;
struct TYPE_14__ {TYPE_5__ int2; TYPE_4__ int1; } ;
struct TYPE_11__ {scalar_t__ mask; scalar_t__ addr; } ;
struct TYPE_10__ {scalar_t__ mask; scalar_t__ addr; } ;
struct TYPE_15__ {TYPE_6__ drdy_irq; TYPE_3__ das; TYPE_2__ bdu; } ;
struct TYPE_9__ {int num; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,char*,...) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 struct st_sensors_platform_data* FUNC_2 (int ,struct st_sensors_platform_data*) ;
 int FUNC_3 (struct iio_dev*,int ) ;
 int FUNC_4 (struct iio_dev*,int) ;
 int FUNC_5 (struct iio_dev*,struct st_sensors_platform_data*) ;
 int FUNC_6 (struct iio_dev*,int) ;
 int FUNC_7 (struct iio_dev*,int ) ;
 int FUNC_8 (struct iio_dev*,int ) ;
 int FUNC_9 (struct iio_dev*,scalar_t__,scalar_t__,int) ;

int FUNC_10(struct iio_dev *VAR_1,
     struct st_sensors_platform_data *VAR_2)
{
 struct st_sensor_data *VAR_3 = FUNC_1(VAR_1);
 struct st_sensors_platform_data *VAR_4;
 int VAR_5 = 0;


 VAR_4 = FUNC_2(VAR_1->dev.parent, VAR_2);
 if (VAR_4)
  VAR_2 = VAR_4;

 if (VAR_2) {
  VAR_5 = FUNC_5(VAR_1, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_5 = FUNC_6(VAR_1, 0);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_4(VAR_1, 0);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_3->current_fullscale) {
  VAR_5 = FUNC_7(VAR_1,
      VAR_3->current_fullscale->num);
  if (VAR_5 < 0)
   return VAR_5;
 } else
  FUNC_0(&VAR_1->dev, "Full-scale not possible\n");

 VAR_5 = FUNC_8(VAR_1, VAR_3->odr);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_3->sensor_settings->bdu.addr) {
  VAR_5 = FUNC_9(VAR_1,
     VAR_3->sensor_settings->bdu.addr,
     VAR_3->sensor_settings->bdu.mask, 1);
  if (VAR_5 < 0)
   return VAR_5;
 }


 if (VAR_3->sensor_settings->das.addr) {
  VAR_5 = FUNC_9(VAR_1,
     VAR_3->sensor_settings->das.addr,
     VAR_3->sensor_settings->das.mask, 1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_3->int_pin_open_drain) {
  u8 VAR_6, VAR_7;

  if (VAR_3->drdy_int_pin == 1) {
   VAR_6 = VAR_3->sensor_settings->drdy_irq.int1.addr_od;
   VAR_7 = VAR_3->sensor_settings->drdy_irq.int1.mask_od;
  } else {
   VAR_6 = VAR_3->sensor_settings->drdy_irq.int2.addr_od;
   VAR_7 = VAR_3->sensor_settings->drdy_irq.int2.mask_od;
  }

  FUNC_0(&VAR_1->dev,
    "set interrupt line to open drain mode on pin %d\n",
    VAR_3->drdy_int_pin);
  VAR_5 = FUNC_9(VAR_1, VAR_6,
            VAR_7, 1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_0);

 return VAR_5;
}
