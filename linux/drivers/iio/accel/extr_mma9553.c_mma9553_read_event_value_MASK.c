
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int actthd; int speed_step; } ;
struct mma9553_data {TYPE_1__ conf; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct mma9553_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
        const struct iio_chan_spec *VAR_4,
        enum iio_event_type VAR_5,
        enum iio_event_direction VAR_6,
        enum iio_event_info VAR_7,
        int *VAR_8, int *VAR_9)
{
 struct mma9553_data *VAR_10 = FUNC_1(VAR_3);

 *VAR_9 = 0;
 switch (VAR_7) {
 case 129:
  switch (VAR_4->type) {
  case 128:
   *VAR_8 = FUNC_2(VAR_10->conf.speed_step,
      VAR_2);
   return VAR_1;
  case 131:




   *VAR_8 = 50;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 130:
  switch (VAR_4->type) {
  case 131:
   *VAR_8 = FUNC_0(VAR_10->conf.actthd);
   return VAR_1;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
