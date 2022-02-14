
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct bmc150_accel_data {TYPE_1__* triggers; } ;
struct TYPE_2__ {struct iio_trigger* indio_trig; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bmc150_accel_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
      struct iio_trigger *VAR_3)
{
 struct bmc150_accel_data *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->triggers[VAR_5].indio_trig == VAR_3)
   return 0;
 }

 return -VAR_1;
}
