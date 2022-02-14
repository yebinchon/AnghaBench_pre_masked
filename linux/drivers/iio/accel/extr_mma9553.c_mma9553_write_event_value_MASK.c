
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int actthd; int speed_step; } ;
struct mma9553_data {int mutex; TYPE_1__ conf; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mma9553_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct mma9553_data*,int ,int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_6,
         const struct iio_chan_spec *VAR_7,
         enum iio_event_type VAR_8,
         enum iio_event_direction VAR_9,
         enum iio_event_info VAR_10,
         int VAR_11, int VAR_12)
{
 struct mma9553_data *VAR_13 = FUNC_2(VAR_6);
 int VAR_14;

 switch (VAR_10) {
 case 129:
  switch (VAR_7->type) {
  case 128:
   if (VAR_11 < 0 || VAR_11 > 255)
    return -VAR_0;
   FUNC_4(&VAR_13->mutex);
   VAR_14 = FUNC_3(VAR_13,
      VAR_5,
      &VAR_13->conf.speed_step, VAR_11,
      VAR_1);
   FUNC_5(&VAR_13->mutex);
   return VAR_14;
  default:
   return -VAR_0;
  }
 case 130:
  switch (VAR_7->type) {
  case 131:
   if (VAR_11 < 0 || VAR_11 > FUNC_1(
       VAR_3))
    return -VAR_0;
   FUNC_4(&VAR_13->mutex);
   VAR_14 = FUNC_3(VAR_13, VAR_4,
       &VAR_13->conf.actthd,
       FUNC_0
       (VAR_11), VAR_2);
   FUNC_5(&VAR_13->mutex);
   return VAR_14;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
