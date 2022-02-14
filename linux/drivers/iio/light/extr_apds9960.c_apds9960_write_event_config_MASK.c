
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct apds9960_data {int pxs_int; int als_int; int reg_int_als; int reg_int_pxs; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int FUNC_0 (struct apds9960_data*,int) ;
 struct apds9960_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
           const struct iio_chan_spec *VAR_2,
           enum iio_event_type VAR_3,
           enum iio_event_direction VAR_4,
           int VAR_5)
{
 struct apds9960_data *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 VAR_5 = !!VAR_5;

 switch (VAR_2->type) {
 case 128:
  if (VAR_6->pxs_int == VAR_5)
   return -VAR_0;

  VAR_7 = FUNC_2(VAR_6->reg_int_pxs, VAR_5);
  if (VAR_7)
   return VAR_7;
  VAR_6->pxs_int = VAR_5;
  FUNC_0(VAR_6, VAR_5);
  break;
 case 129:
  if (VAR_6->als_int == VAR_5)
   return -VAR_0;

  VAR_7 = FUNC_2(VAR_6->reg_int_als, VAR_5);
  if (VAR_7)
   return VAR_7;
  VAR_6->als_int = VAR_5;
  FUNC_0(VAR_6, VAR_5);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
