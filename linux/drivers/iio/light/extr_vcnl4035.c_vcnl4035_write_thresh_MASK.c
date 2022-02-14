
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcnl4035_data {int als_thresh_low; int als_thresh_high; int als_persistence; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct vcnl4035_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6,
  const struct iio_chan_spec *VAR_7, enum iio_event_type VAR_8,
  enum iio_event_direction VAR_9, enum iio_event_info VAR_10, int VAR_11,
  int VAR_12)
{
 struct vcnl4035_data *VAR_13 = FUNC_1(VAR_6);
 int VAR_14;

 switch (VAR_10) {
 case 128:

  if (VAR_11 < 0 || VAR_11 > 65535)
   return -VAR_0;
  if (VAR_9 == VAR_1) {
   if (VAR_11 < VAR_13->als_thresh_low)
    return -VAR_0;
   VAR_14 = FUNC_3(VAR_13->regmap, VAR_4,
        VAR_11);
   if (VAR_14)
    return VAR_14;
   VAR_13->als_thresh_high = VAR_11;
  } else {
   if (VAR_11 > VAR_13->als_thresh_high)
    return -VAR_0;
   VAR_14 = FUNC_3(VAR_13->regmap, VAR_5,
        VAR_11);
   if (VAR_14)
    return VAR_14;
   VAR_13->als_thresh_low = VAR_11;
  }
  return VAR_14;
 case 129:

  if (VAR_11 < 0 || VAR_11 > 8 || FUNC_0(VAR_11) != 1)
   return -VAR_0;
  VAR_14 = FUNC_2(VAR_13->regmap, VAR_2,
      VAR_3, VAR_11);
  if (!VAR_14)
   VAR_13->als_persistence = VAR_11;
  return VAR_14;
 default:
  return -VAR_0;
 }
}
