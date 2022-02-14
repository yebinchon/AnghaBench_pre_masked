
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct st_sensor_data {int hw_irq_trigger; int drdy_int_pin; TYPE_6__* sensor_settings; } ;
struct iio_dev {int dummy; } ;
struct TYPE_10__ {scalar_t__ addr; scalar_t__ mask; } ;
struct TYPE_9__ {scalar_t__ addr; scalar_t__ mask; } ;
struct TYPE_8__ {scalar_t__ en_addr; scalar_t__ en_mask; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_11__ {TYPE_4__ int2; TYPE_3__ int1; TYPE_2__ ig1; TYPE_1__ stat_drdy; } ;
struct TYPE_12__ {TYPE_5__ drdy_irq; } ;


 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,scalar_t__,scalar_t__,int) ;

int FUNC_2(struct iio_dev *VAR_0, bool VAR_1)
{
 int VAR_2;
 u8 VAR_3, VAR_4;
 struct st_sensor_data *VAR_5 = FUNC_0(VAR_0);

 if (!VAR_5->sensor_settings->drdy_irq.int1.addr &&
     !VAR_5->sensor_settings->drdy_irq.int2.addr) {






  if (VAR_5->sensor_settings->drdy_irq.stat_drdy.addr)
   VAR_5->hw_irq_trigger = VAR_1;
  return 0;
 }


 if (VAR_5->sensor_settings->drdy_irq.ig1.en_addr > 0) {
  VAR_2 = FUNC_1(VAR_0,
    VAR_5->sensor_settings->drdy_irq.ig1.en_addr,
    VAR_5->sensor_settings->drdy_irq.ig1.en_mask,
    (int)VAR_1);
  if (VAR_2 < 0)
   goto st_accel_set_dataready_irq_error;
 }

 if (VAR_5->drdy_int_pin == 1) {
  VAR_3 = VAR_5->sensor_settings->drdy_irq.int1.addr;
  VAR_4 = VAR_5->sensor_settings->drdy_irq.int1.mask;
 } else {
  VAR_3 = VAR_5->sensor_settings->drdy_irq.int2.addr;
  VAR_4 = VAR_5->sensor_settings->drdy_irq.int2.mask;
 }


 VAR_5->hw_irq_trigger = VAR_1;


 VAR_2 = FUNC_1(VAR_0, VAR_3,
           VAR_4, (int)VAR_1);

st_accel_set_dataready_irq_error:
 return VAR_2;
}
