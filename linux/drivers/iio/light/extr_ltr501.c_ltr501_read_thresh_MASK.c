
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int regmap; } ;
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
 int VAR_7 ;
 struct ltr501_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_8,
         const struct iio_chan_spec *VAR_9,
         enum iio_event_type VAR_10,
         enum iio_event_direction VAR_11,
         enum iio_event_info VAR_12,
         int *VAR_13, int *VAR_14)
{
 struct ltr501_data *VAR_15 = FUNC_0(VAR_8);
 int VAR_16, VAR_17;

 switch (VAR_9->type) {
 case 129:
  switch (VAR_11) {
  case 130:
   VAR_16 = FUNC_1(VAR_15->regmap,
            VAR_4,
            &VAR_17, 2);
   if (VAR_16 < 0)
    return VAR_16;
   *VAR_13 = VAR_17 & VAR_3;
   return VAR_1;
  case 131:
   VAR_16 = FUNC_1(VAR_15->regmap,
            VAR_2,
            &VAR_17, 2);
   if (VAR_16 < 0)
    return VAR_16;
   *VAR_13 = VAR_17 & VAR_3;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 128:
  switch (VAR_11) {
  case 130:
   VAR_16 = FUNC_1(VAR_15->regmap,
            VAR_7,
            &VAR_17, 2);
   if (VAR_16 < 0)
    return VAR_16;
   *VAR_13 = VAR_17 & VAR_6;
   return VAR_1;
  case 131:
   VAR_16 = FUNC_1(VAR_15->regmap,
            VAR_5,
            &VAR_17, 2);
   if (VAR_16 < 0)
    return VAR_16;
   *VAR_13 = VAR_17 & VAR_6;
   return VAR_1;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
