
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_sensor_odr_avl {int hz; int value; int member_1; int member_0; } ;
struct st_sensor_data {int enabled; int odr; TYPE_3__* sensor_settings; } ;
struct iio_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ addr; scalar_t__ mask; } ;
struct TYPE_4__ {scalar_t__ addr; scalar_t__ mask; } ;
struct TYPE_6__ {TYPE_2__ odr; TYPE_1__ pw; } ;


 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (TYPE_3__*,unsigned int,struct st_sensor_odr_avl*) ;
 int FUNC_2 (struct iio_dev*,scalar_t__,scalar_t__,int ) ;

int FUNC_3(struct iio_dev *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 struct st_sensor_odr_avl VAR_3 = {0, 0};
 struct st_sensor_data *VAR_4 = FUNC_0(VAR_0);

 if (!VAR_4->sensor_settings->odr.addr)
  return 0;

 VAR_2 = FUNC_1(VAR_4->sensor_settings, VAR_1, &VAR_3);
 if (VAR_2 < 0)
  goto st_sensors_match_odr_error;

 if ((VAR_4->sensor_settings->odr.addr ==
     VAR_4->sensor_settings->pw.addr) &&
    (VAR_4->sensor_settings->odr.mask ==
     VAR_4->sensor_settings->pw.mask)) {
  if (VAR_4->enabled == 1) {
   VAR_2 = FUNC_2(VAR_0,
    VAR_4->sensor_settings->odr.addr,
    VAR_4->sensor_settings->odr.mask,
    VAR_3.value);
  } else {
   VAR_2 = 0;
  }
 } else {
  VAR_2 = FUNC_2(VAR_0,
   VAR_4->sensor_settings->odr.addr,
   VAR_4->sensor_settings->odr.mask,
   VAR_3.value);
 }
 if (VAR_2 >= 0)
  VAR_4->odr = VAR_3.hz;

st_sensors_match_odr_error:
 return VAR_2;
}
