
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
 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int** VAR_2 ;
 int FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
         const struct iio_chan_spec *VAR_4,
         enum iio_event_type VAR_5,
         enum iio_event_direction VAR_6,
         enum iio_event_info VAR_7,
         int VAR_8, int VAR_9)
{
 struct tsl2772_chip *VAR_10 = FUNC_0(VAR_3);
 int VAR_11 = -VAR_0, VAR_12, VAR_13;
 u8 VAR_14;

 switch (VAR_7) {
 case 128:
  if (VAR_4->type == VAR_1) {
   switch (VAR_6) {
   case 130:
    VAR_10->settings.als_thresh_high = VAR_8;
    VAR_11 = 0;
    break;
   case 131:
    VAR_10->settings.als_thresh_low = VAR_8;
    VAR_11 = 0;
    break;
   default:
    break;
   }
  } else {
   switch (VAR_6) {
   case 130:
    VAR_10->settings.prox_thres_high = VAR_8;
    VAR_11 = 0;
    break;
   case 131:
    VAR_10->settings.prox_thres_low = VAR_8;
    VAR_11 = 0;
    break;
   default:
    break;
   }
  }
  break;
 case 129:
  if (VAR_4->type == VAR_1)
   VAR_14 = VAR_10->settings.als_time;
  else
   VAR_14 = VAR_10->settings.prox_time;

  VAR_12 = 256 - VAR_14;
  VAR_13 = ((VAR_8 * 1000000) + VAR_9) /
   (VAR_12 * VAR_2[VAR_10->id][3]);

  if (VAR_4->type == VAR_1) {

   if (VAR_13 > 3)
    VAR_13 = (VAR_13 / 5) + 3;

   VAR_10->settings.als_persistence = VAR_13;
  } else {
   VAR_10->settings.prox_persistence = VAR_13;
  }

  VAR_11 = 0;
  break;
 default:
  break;
 }

 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_1(VAR_3);
}
