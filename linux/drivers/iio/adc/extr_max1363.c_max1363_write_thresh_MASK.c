
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1363_state {int* thresh_low; int* thresh_high; TYPE_1__* chip_info; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_2__ {int bits; } ;


 int VAR_0 ;


 struct max1363_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2, enum iio_event_type VAR_3,
 enum iio_event_direction VAR_4, enum iio_event_info VAR_5, int VAR_6,
 int VAR_7)
{
 struct max1363_state *VAR_8 = FUNC_0(VAR_1);

 switch (VAR_8->chip_info->bits) {
 case 10:
  if (VAR_6 > 0x3FF)
   return -VAR_0;
  break;
 case 12:
  if (VAR_6 > 0xFFF)
   return -VAR_0;
  break;
 }

 switch (VAR_4) {
 case 129:
  VAR_8->thresh_low[VAR_2->channel] = VAR_6;
  break;
 case 128:
  VAR_8->thresh_high[VAR_2->channel] = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
