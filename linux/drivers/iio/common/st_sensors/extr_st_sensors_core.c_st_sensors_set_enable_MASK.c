
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct st_sensor_odr_avl {int hz; int value; int member_1; int member_0; } ;
struct st_sensor_data {int enabled; TYPE_3__* sensor_settings; int odr; } ;
struct iio_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ addr; scalar_t__ mask; int value_off; int value_on; } ;
struct TYPE_4__ {scalar_t__ addr; scalar_t__ mask; } ;
struct TYPE_6__ {TYPE_2__ pw; TYPE_1__ odr; } ;


 int VAR_0 ;
 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (TYPE_3__*,int ,struct st_sensor_odr_avl*) ;
 int FUNC_2 (struct iio_dev*,scalar_t__,scalar_t__,int ) ;

int FUNC_3(struct iio_dev *VAR_1, bool VAR_2)
{
 u8 VAR_3;
 int VAR_4 = -VAR_0;
 bool VAR_5 = 0;
 struct st_sensor_odr_avl VAR_6 = {0, 0};
 struct st_sensor_data *VAR_7 = FUNC_0(VAR_1);

 if (VAR_2) {
  VAR_3 = VAR_7->sensor_settings->pw.value_on;
  if ((VAR_7->sensor_settings->odr.addr ==
     VAR_7->sensor_settings->pw.addr) &&
    (VAR_7->sensor_settings->odr.mask ==
     VAR_7->sensor_settings->pw.mask)) {
   VAR_4 = FUNC_1(VAR_7->sensor_settings,
       VAR_7->odr, &VAR_6);
   if (VAR_4 < 0)
    goto set_enable_error;
   VAR_3 = VAR_6.value;
   VAR_5 = 1;
  }
  VAR_4 = FUNC_2(VAR_1,
    VAR_7->sensor_settings->pw.addr,
    VAR_7->sensor_settings->pw.mask, VAR_3);
  if (VAR_4 < 0)
   goto set_enable_error;

  VAR_7->enabled = 1;

  if (VAR_5)
   VAR_7->odr = VAR_6.hz;
 } else {
  VAR_4 = FUNC_2(VAR_1,
    VAR_7->sensor_settings->pw.addr,
    VAR_7->sensor_settings->pw.mask,
    VAR_7->sensor_settings->pw.value_off);
  if (VAR_4 < 0)
   goto set_enable_error;

  VAR_7->enabled = 0;
 }

set_enable_error:
 return VAR_4;
}
