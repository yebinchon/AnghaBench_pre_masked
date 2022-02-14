
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int als_gain; int prox_gain; int als_gain_trim; int als_time; } ;
struct tsl2772_chip {size_t id; TYPE_1__ settings; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int** VAR_4 ;
 int FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int VAR_7,
        int VAR_8,
        long VAR_9)
{
 struct tsl2772_chip *VAR_10 = FUNC_0(VAR_5);

 switch (VAR_9) {
 case 129:
  if (VAR_6->type == VAR_1) {
   switch (VAR_7) {
   case 1:
    VAR_10->settings.als_gain = 0;
    break;
   case 8:
    VAR_10->settings.als_gain = 1;
    break;
   case 16:
    VAR_10->settings.als_gain = 2;
    break;
   case 120:
    VAR_10->settings.als_gain = 3;
    break;
   default:
    return -VAR_0;
   }
  } else {
   switch (VAR_7) {
   case 1:
    VAR_10->settings.prox_gain = 0;
    break;
   case 2:
    VAR_10->settings.prox_gain = 1;
    break;
   case 4:
    VAR_10->settings.prox_gain = 2;
    break;
   case 8:
    VAR_10->settings.prox_gain = 3;
    break;
   default:
    return -VAR_0;
   }
  }
  break;
 case 130:
  if (VAR_7 < VAR_3 ||
      VAR_7 > VAR_2)
   return -VAR_0;

  VAR_10->settings.als_gain_trim = VAR_7;
  break;
 case 128:
  if (VAR_7 != 0 || VAR_8 < VAR_4[VAR_10->id][1] ||
      VAR_8 > VAR_4[VAR_10->id][5])
   return -VAR_0;

  VAR_10->settings.als_time = 256 -
   (VAR_8 / VAR_4[VAR_10->id][3]);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_5);
}
