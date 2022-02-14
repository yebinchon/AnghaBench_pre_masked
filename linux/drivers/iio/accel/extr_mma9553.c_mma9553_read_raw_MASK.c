
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_2__ {int height_weight; int filter; int speed_step; } ;
struct mma9553_data {int stepcnt_enabled; TYPE_1__ conf; int mutex; int client; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct mma9553_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,struct iio_chan_spec const*,int*,int*) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mma9553_data*,int ,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_15,
       struct iio_chan_spec const *VAR_16,
       int *VAR_17, int *VAR_18, long VAR_19)
{
 struct mma9553_data *VAR_20 = FUNC_0(VAR_15);
 int VAR_21;
 u16 VAR_22;
 u8 VAR_23;

 switch (VAR_19) {
 case 134:
  switch (VAR_16->type) {
  case 129:
   VAR_21 = FUNC_5(VAR_20,
             VAR_14,
             &VAR_22);
   if (VAR_21 < 0)
    return VAR_21;
   *VAR_17 = VAR_22;
   return VAR_2;
  case 131:
   VAR_21 = FUNC_5(VAR_20,
             VAR_11,
             &VAR_22);
   if (VAR_21 < 0)
    return VAR_21;
   *VAR_17 = VAR_22;
   return VAR_2;
  case 141:
   VAR_21 = FUNC_5(VAR_20,
             VAR_13,
             &VAR_22);
   if (VAR_21 < 0)
    return VAR_21;

   VAR_23 =
       FUNC_4(VAR_22, VAR_9);






   if (VAR_16->channel2 == FUNC_3(VAR_23))
    *VAR_17 = 100;
   else
    *VAR_17 = 0;
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 133:
  switch (VAR_16->type) {
  case 128:
   if (VAR_16->channel2 != VAR_1)
    return -VAR_0;
   VAR_21 = FUNC_5(VAR_20,
             VAR_12,
             &VAR_22);
   if (VAR_21 < 0)
    return VAR_21;
   *VAR_17 = VAR_22;
   return VAR_2;
  case 130:
   VAR_21 = FUNC_5(VAR_20,
             VAR_10,
             &VAR_22);
   if (VAR_21 < 0)
    return VAR_21;
   *VAR_17 = VAR_22;
   return VAR_2;
  case 142:
   FUNC_6(&VAR_20->mutex);
   VAR_21 = FUNC_1(VAR_20->client,
            VAR_16, VAR_17, VAR_18);
   FUNC_7(&VAR_20->mutex);
   return VAR_21;
  default:
   return -VAR_0;
  }
 case 132:
  switch (VAR_16->type) {
  case 128:
   if (VAR_16->channel2 != VAR_1)
    return -VAR_0;
   *VAR_17 = 0;
   *VAR_18 = 277;
   return VAR_3;
  case 130:
   *VAR_17 = 4184;
   return VAR_2;
  case 142:
   return FUNC_2(VAR_17, VAR_18);
  default:
   return -VAR_0;
  }
 case 136:
  *VAR_17 = VAR_20->stepcnt_enabled;
  return VAR_2;
 case 140:
  VAR_22 = FUNC_4(VAR_20->conf.height_weight,
           VAR_6);
  *VAR_17 = VAR_22 / 100;
  *VAR_18 = (VAR_22 % 100) * 10000;
  return VAR_3;
 case 139:
  *VAR_17 = FUNC_4(VAR_20->conf.height_weight,
     VAR_8);
  return VAR_2;
 case 138:
  switch (VAR_16->type) {
  case 129:
   *VAR_17 = FUNC_4(VAR_20->conf.filter,
      VAR_4);
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 137:
  switch (VAR_16->type) {
  case 129:
   *VAR_17 = FUNC_4(VAR_20->conf.filter,
      VAR_5);
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 135:
  switch (VAR_16->type) {
  case 128:
   if (VAR_16->channel2 != VAR_1)
    return -VAR_0;
   *VAR_17 = FUNC_4(VAR_20->conf.speed_step,
      VAR_7);
   return VAR_2;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
