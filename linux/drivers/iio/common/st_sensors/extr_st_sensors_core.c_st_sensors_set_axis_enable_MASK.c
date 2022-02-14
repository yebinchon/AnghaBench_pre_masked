
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct st_sensor_data {TYPE_2__* sensor_settings; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int mask; scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ enable_axis; } ;


 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,scalar_t__,int ,int ) ;

int FUNC_2(struct iio_dev *VAR_0, u8 VAR_1)
{
 struct st_sensor_data *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 if (VAR_2->sensor_settings->enable_axis.addr)
  VAR_3 = FUNC_1(VAR_0,
    VAR_2->sensor_settings->enable_axis.addr,
    VAR_2->sensor_settings->enable_axis.mask,
    VAR_1);
 return VAR_3;
}
