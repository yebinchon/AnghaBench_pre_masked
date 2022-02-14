
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int lock_ps; int reg_ps_intr; int lock_als; int reg_als_intr; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 struct ltr501_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
         const struct iio_chan_spec *VAR_2,
         enum iio_event_type VAR_3,
         enum iio_event_direction VAR_4, int VAR_5)
{
 struct ltr501_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;


 if (VAR_5 != 1 && VAR_5 != 0)
  return -VAR_0;

 switch (VAR_2->type) {
 case 129:
  FUNC_1(&VAR_6->lock_als);
  VAR_7 = FUNC_3(VAR_6->reg_als_intr, VAR_5);
  FUNC_2(&VAR_6->lock_als);
  return VAR_7;
 case 128:
  FUNC_1(&VAR_6->lock_ps);
  VAR_7 = FUNC_3(VAR_6->reg_ps_intr, VAR_5);
  FUNC_2(&VAR_6->lock_ps);
  return VAR_7;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
