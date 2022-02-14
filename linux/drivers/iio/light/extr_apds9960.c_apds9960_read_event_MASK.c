
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct apds9960_data {int regmap; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iio_chan_spec const*,int,int *) ;
 struct apds9960_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
          const struct iio_chan_spec *VAR_6,
          enum iio_event_type VAR_7,
          enum iio_event_direction VAR_8,
          enum iio_event_info VAR_9,
          int *VAR_10, int *VAR_11)
{
 u8 VAR_12;
 __le16 VAR_13;
 int VAR_14 = 0;
 struct apds9960_data *VAR_15 = FUNC_1(VAR_5);

 if (VAR_9 != VAR_1)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_6, VAR_8, &VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_6->type == VAR_3) {
  VAR_14 = FUNC_4(VAR_15->regmap, VAR_12, VAR_10);
  if (VAR_14 < 0)
   return VAR_14;
 } else if (VAR_6->type == VAR_2) {
  VAR_14 = FUNC_3(VAR_15->regmap, VAR_12, &VAR_13, 2);
  if (VAR_14 < 0)
   return VAR_14;
  *VAR_10 = FUNC_2(VAR_13);
 } else
  return -VAR_0;

 *VAR_11 = 0;

 return VAR_4;
}
