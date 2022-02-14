
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_sensor_data {TYPE_1__* sensor_settings; int dev; int regmap; } ;
struct iio_dev {int active_scan_mask; } ;
struct TYPE_6__ {int mask; int addr; } ;
struct TYPE_5__ {TYPE_3__ stat_drdy; } ;
struct TYPE_4__ {TYPE_2__ drdy_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
         struct st_sensor_data *VAR_2)
{
 int VAR_3, VAR_4;


 if (!VAR_2->sensor_settings->drdy_irq.stat_drdy.addr)
  return -VAR_0;


 if (!VAR_1->active_scan_mask)
  return 0;

 VAR_3 = FUNC_1(VAR_2->regmap,
     VAR_2->sensor_settings->drdy_irq.stat_drdy.addr,
     &VAR_4);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->dev,
   "error checking samples available\n");
  return VAR_3;
 }

 if (VAR_4 & VAR_2->sensor_settings->drdy_irq.stat_drdy.mask)
  return 1;

 return 0;
}
