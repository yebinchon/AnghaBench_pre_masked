
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct iio_chan_spec const*,int,int *) ;
 int FUNC_1 (int) ;
 struct apds9960_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
    const struct iio_chan_spec *VAR_7,
    enum iio_event_type VAR_8,
    enum iio_event_direction VAR_9,
    enum iio_event_info VAR_10,
    int VAR_11, int VAR_12)
{
 u8 VAR_13;
 __le16 VAR_14;
 int VAR_15 = 0;
 struct apds9960_data *VAR_16 = FUNC_2(VAR_6);

 if (VAR_10 != VAR_3)
  return -VAR_2;

 VAR_15 = FUNC_0(VAR_7, VAR_9, &VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_7->type == VAR_5) {
  if (VAR_11 < 0 || VAR_11 > VAR_1)
   return -VAR_2;
  VAR_15 = FUNC_4(VAR_16->regmap, VAR_13, VAR_11);
  if (VAR_15 < 0)
   return VAR_15;
 } else if (VAR_7->type == VAR_4) {
  if (VAR_11 < 0 || VAR_11 > VAR_0)
   return -VAR_2;
  VAR_14 = FUNC_1(VAR_11);
  VAR_15 = FUNC_3(VAR_16->regmap, VAR_13, &VAR_14, 2);
  if (VAR_15 < 0)
   return VAR_15;
 } else
  return -VAR_2;

 return 0;
}
