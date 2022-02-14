
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t als_gain; size_t prox_gain; int als_gain_trim; int als_time; } ;
struct TYPE_3__ {int lux; int als_ch0; int als_ch1; } ;
struct tsl2772_chip {int prox_data; size_t id; TYPE_2__ settings; TYPE_1__ als_cur_info; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int const type; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int* VAR_3 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int** VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7,
       int *VAR_8,
       int *VAR_9,
       long VAR_10)
{
 struct tsl2772_chip *VAR_11 = FUNC_0(VAR_6);

 switch (VAR_10) {
 case 132:
  switch (VAR_7->type) {
  case 129:
   FUNC_1(VAR_6);
   *VAR_8 = VAR_11->als_cur_info.lux;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 131:
  switch (VAR_7->type) {
  case 130:
   FUNC_1(VAR_6);
   if (VAR_7->channel == 0)
    *VAR_8 = VAR_11->als_cur_info.als_ch0;
   else
    *VAR_8 = VAR_11->als_cur_info.als_ch1;
   return VAR_1;
  case 128:
   FUNC_2(VAR_6);
   *VAR_8 = VAR_11->prox_data;
   return VAR_1;
  default:
   return -VAR_0;
  }
  break;
 case 134:
  if (VAR_7->type == 129)
   *VAR_8 = VAR_3[VAR_11->settings.als_gain];
  else
   *VAR_8 = VAR_5[VAR_11->settings.prox_gain];
  return VAR_1;
 case 135:
  *VAR_8 = VAR_11->settings.als_gain_trim;
  return VAR_1;
 case 133:
  *VAR_8 = 0;
  *VAR_9 = (256 - VAR_11->settings.als_time) *
   VAR_4[VAR_11->id][3];
  return VAR_2;
 default:
  return -VAR_0;
 }
}
