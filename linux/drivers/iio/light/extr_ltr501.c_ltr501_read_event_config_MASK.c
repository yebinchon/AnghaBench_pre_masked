
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int reg_ps_intr; int reg_als_intr; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 struct ltr501_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
        const struct iio_chan_spec *VAR_2,
        enum iio_event_type VAR_3,
        enum iio_event_direction VAR_4)
{
 struct ltr501_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6, VAR_7;

 switch (VAR_2->type) {
 case 129:
  VAR_6 = FUNC_1(VAR_5->reg_als_intr, &VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  return VAR_7;
 case 128:
  VAR_6 = FUNC_1(VAR_5->reg_ps_intr, &VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  return VAR_7;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
