
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed_step; int filter; int height_weight; } ;
struct mma9553_data {int stepcnt_enabled; int mutex; TYPE_1__ conf; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int type; } ;


 int VAR_0 ;






 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mma9553_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mma9553_data*,int ,int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_10,
        struct iio_chan_spec const *VAR_11,
        int VAR_12, int VAR_13, long VAR_14)
{
 struct mma9553_data *VAR_15 = FUNC_0(VAR_10);
 int VAR_16, VAR_17;

 switch (VAR_14) {
 case 131:
  if (VAR_15->stepcnt_enabled == !!VAR_12)
   return 0;
  FUNC_3(&VAR_15->mutex);
  VAR_16 = FUNC_1(VAR_15->client, VAR_12);
  if (VAR_16 < 0) {
   FUNC_4(&VAR_15->mutex);
   return VAR_16;
  }
  VAR_15->stepcnt_enabled = VAR_12;
  FUNC_4(&VAR_15->mutex);
  return 0;
 case 135:

  VAR_17 = VAR_12 * 100 + VAR_13 / 10000;
  if (VAR_17 < 0 || VAR_17 > 255)
   return -VAR_0;
  FUNC_3(&VAR_15->mutex);
  VAR_16 = FUNC_2(VAR_15,
      VAR_8,
      &VAR_15->conf.height_weight,
      VAR_17, VAR_4);
  FUNC_4(&VAR_15->mutex);
  return VAR_16;
 case 134:
  if (VAR_12 < 0 || VAR_12 > 255)
   return -VAR_0;
  FUNC_3(&VAR_15->mutex);
  VAR_16 = FUNC_2(VAR_15,
      VAR_8,
      &VAR_15->conf.height_weight,
      VAR_12, VAR_6);
  FUNC_4(&VAR_15->mutex);
  return VAR_16;
 case 133:
  switch (VAR_11->type) {
  case 129:




   if (VAR_12 < 0)
    return -VAR_0;
   if (VAR_12 > 6)
    VAR_12 = 6;
   FUNC_3(&VAR_15->mutex);
   VAR_16 = FUNC_2(VAR_15, VAR_7,
       &VAR_15->conf.filter, VAR_12,
       VAR_2);
   FUNC_4(&VAR_15->mutex);
   return VAR_16;
  default:
   return -VAR_0;
  }
 case 132:
  switch (VAR_11->type) {
  case 129:
   if (VAR_12 < 0 || VAR_12 > 127)
    return -VAR_0;
   FUNC_3(&VAR_15->mutex);
   VAR_16 = FUNC_2(VAR_15, VAR_7,
       &VAR_15->conf.filter, VAR_12,
       VAR_3);
   FUNC_4(&VAR_15->mutex);
   return VAR_16;
  default:
   return -VAR_0;
  }
 case 130:
  switch (VAR_11->type) {
  case 128:
   if (VAR_11->channel2 != VAR_1)
    return -VAR_0;





   if (VAR_12 < 2)
    return -VAR_0;
   if (VAR_12 > 5)
    VAR_12 = 5;
   FUNC_3(&VAR_15->mutex);
   VAR_16 = FUNC_2(VAR_15,
       VAR_9,
       &VAR_15->conf.speed_step, VAR_12,
       VAR_5);
   FUNC_4(&VAR_15->mutex);
   return VAR_16;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
