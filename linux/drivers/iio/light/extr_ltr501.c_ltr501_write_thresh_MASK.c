
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int lock_ps; int regmap; int lock_als; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ltr501_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_7,
          const struct iio_chan_spec *VAR_8,
          enum iio_event_type VAR_9,
          enum iio_event_direction VAR_10,
          enum iio_event_info VAR_11,
          int VAR_12, int VAR_13)
{
 struct ltr501_data *VAR_14 = FUNC_0(VAR_7);
 int VAR_15;

 if (VAR_12 < 0)
  return -VAR_0;

 switch (VAR_8->type) {
 case 129:
  if (VAR_12 > VAR_2)
   return -VAR_0;
  switch (VAR_10) {
  case 130:
   FUNC_1(&VAR_14->lock_als);
   VAR_15 = FUNC_3(VAR_14->regmap,
      VAR_3,
      &VAR_12, 2);
   FUNC_2(&VAR_14->lock_als);
   return VAR_15;
  case 131:
   FUNC_1(&VAR_14->lock_als);
   VAR_15 = FUNC_3(VAR_14->regmap,
      VAR_1,
      &VAR_12, 2);
   FUNC_2(&VAR_14->lock_als);
   return VAR_15;
  default:
   return -VAR_0;
  }
 case 128:
  if (VAR_12 > VAR_5)
   return -VAR_0;
  switch (VAR_10) {
  case 130:
   FUNC_1(&VAR_14->lock_ps);
   VAR_15 = FUNC_3(VAR_14->regmap,
      VAR_6,
      &VAR_12, 2);
   FUNC_2(&VAR_14->lock_ps);
   return VAR_15;
  case 131:
   FUNC_1(&VAR_14->lock_ps);
   VAR_15 = FUNC_3(VAR_14->regmap,
      VAR_4,
      &VAR_12, 2);
   FUNC_2(&VAR_14->lock_ps);
   return VAR_15;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
