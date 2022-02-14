
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct apds9960_data {int pxs_int; int als_int; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 struct apds9960_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
          const struct iio_chan_spec *VAR_2,
          enum iio_event_type VAR_3,
          enum iio_event_direction VAR_4)
{
 struct apds9960_data *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_2->type) {
 case 128:
  return VAR_5->pxs_int;
 case 129:
  return VAR_5->als_int;
 default:
  return -VAR_0;
 }

 return 0;
}
