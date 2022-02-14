
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int als_gain_trim; unsigned int als_gain; int als_time; } ;
struct tsl2583_chip {int als_mutex; TYPE_1__ als_settings; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct TYPE_5__ {int mean; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;



 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct tsl2583_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tsl2583_chip*) ;
 int FUNC_5 (struct tsl2583_chip*) ;
 int FUNC_6 (struct tsl2583_chip*,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct tsl2583_chip *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 VAR_9 = FUNC_6(VAR_8, 1);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(&VAR_8->als_mutex);

 VAR_9 = -VAR_0;
 switch (VAR_7) {
 case 130:
  if (VAR_4->type == VAR_1) {
   VAR_8->als_settings.als_gain_trim = VAR_5;
   VAR_9 = 0;
  }
  break;
 case 129:
  if (VAR_4->type == VAR_1) {
   unsigned int VAR_10;

   for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
    if (VAR_2[VAR_10].mean == VAR_5) {
     VAR_8->als_settings.als_gain = VAR_10;
     VAR_9 = FUNC_4(VAR_8);
     break;
    }
   }
  }
  break;
 case 128:
  if (VAR_4->type == VAR_1 && !VAR_5 && VAR_6 >= 50 &&
      VAR_6 <= 650 && !(VAR_6 % 50)) {
   VAR_8->als_settings.als_time = VAR_6;
   VAR_9 = FUNC_5(VAR_8);
  }
  break;
 default:
  break;
 }

 FUNC_3(&VAR_8->als_mutex);

 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_6(VAR_8, 0);
 if (VAR_9 < 0)
  return VAR_9;

 return VAR_9;
}
