
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int als_gain_trim; size_t als_gain; int als_time; } ;
struct TYPE_4__ {int als_ch0; int als_ch1; } ;
struct tsl2583_chip {int als_mutex; TYPE_2__ als_settings; TYPE_1__ als_cur_info; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel2; } ;
struct TYPE_6__ {int mean; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 struct tsl2583_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct tsl2583_chip*,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7,
       int *VAR_8, int *VAR_9, long VAR_10)
{
 struct tsl2583_chip *VAR_11 = FUNC_0(VAR_6);
 int VAR_12, VAR_13;

 VAR_12 = FUNC_4(VAR_11, 1);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_1(&VAR_11->als_mutex);

 VAR_12 = -VAR_0;
 switch (VAR_10) {
 case 128:
  if (VAR_7->type == VAR_1) {
   VAR_12 = FUNC_3(VAR_6);
   if (VAR_12 < 0)
    goto read_done;
   if (VAR_7->channel2 == VAR_2)
    *VAR_8 = VAR_11->als_cur_info.als_ch0;
   else
    *VAR_8 = VAR_11->als_cur_info.als_ch1;

   VAR_12 = VAR_3;
  }
  break;
 case 129:
  if (VAR_7->type == VAR_1) {
   VAR_12 = FUNC_3(VAR_6);
   if (VAR_12 < 0)
    goto read_done;

   *VAR_8 = VAR_12;
   VAR_12 = VAR_3;
  }
  break;
 case 132:
  if (VAR_7->type == VAR_1) {
   *VAR_8 = VAR_11->als_settings.als_gain_trim;
   VAR_12 = VAR_3;
  }
  break;
 case 131:
  if (VAR_7->type == VAR_1) {
   *VAR_8 = VAR_5[VAR_11->als_settings.als_gain].mean;
   VAR_12 = VAR_3;
  }
  break;
 case 130:
  if (VAR_7->type == VAR_1) {
   *VAR_8 = 0;
   *VAR_9 = VAR_11->als_settings.als_time;
   VAR_12 = VAR_4;
  }
  break;
 default:
  break;
 }

read_done:
 FUNC_2(&VAR_11->als_mutex);

 if (VAR_12 < 0)
  return VAR_12;






 VAR_13 = FUNC_4(VAR_11, 0);
 if (VAR_13 < 0)
  return VAR_13;

 return VAR_12;
}
