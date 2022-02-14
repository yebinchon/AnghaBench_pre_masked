
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int als_thresh_high; int als_thresh_low; int prox_thres_high; int prox_thres_low; int als_persistence; int prox_persistence; int prox_time; int als_time; } ;
struct tsl2772_chip {size_t id; TYPE_1__ settings; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int** VAR_4 ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_5,
        const struct iio_chan_spec *VAR_6,
        enum iio_event_type VAR_7,
        enum iio_event_direction VAR_8,
        enum iio_event_info VAR_9,
        int *VAR_10, int *VAR_11)
{
 struct tsl2772_chip *VAR_12 = FUNC_0(VAR_5);
 int VAR_13, VAR_14;
 u8 VAR_15;

 switch (VAR_9) {
 case 128:
  if (VAR_6->type == VAR_1) {
   switch (VAR_8) {
   case 130:
    *VAR_10 = VAR_12->settings.als_thresh_high;
    return VAR_2;
   case 131:
    *VAR_10 = VAR_12->settings.als_thresh_low;
    return VAR_2;
   default:
    return -VAR_0;
   }
  } else {
   switch (VAR_8) {
   case 130:
    *VAR_10 = VAR_12->settings.prox_thres_high;
    return VAR_2;
   case 131:
    *VAR_10 = VAR_12->settings.prox_thres_low;
    return VAR_2;
   default:
    return -VAR_0;
   }
  }
  break;
 case 129:
  if (VAR_6->type == VAR_1) {
   VAR_15 = VAR_12->settings.als_time;
   VAR_14 = VAR_12->settings.als_persistence;


   if (VAR_14 > 3)
    VAR_14 = (VAR_14 - 3) * 5;
  } else {
   VAR_15 = VAR_12->settings.prox_time;
   VAR_14 = VAR_12->settings.prox_persistence;
  }

  VAR_13 = VAR_14 * (256 - VAR_15) *
   VAR_4[VAR_12->id][3];

  *VAR_10 = VAR_13 / 1000000;
  *VAR_11 = VAR_13 % 1000000;
  return VAR_3;
 default:
  return -VAR_0;
 }
}
