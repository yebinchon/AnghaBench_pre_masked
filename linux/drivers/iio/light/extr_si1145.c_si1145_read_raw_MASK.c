
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si1145_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel2; int channel; } ;


 int VAR_0 ;






 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct si1145_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*,struct iio_chan_spec const*) ;
 int FUNC_7 (struct si1145_data*,int ) ;
 int FUNC_8 (struct si1145_data*,int*,int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_8,
    struct iio_chan_spec const *VAR_9,
    int *VAR_10, int *VAR_11, long VAR_12)
{
 struct si1145_data *VAR_13 = FUNC_5(VAR_8);
 int VAR_14;
 u8 VAR_15;

 switch (VAR_12) {
 case 136:
  switch (VAR_9->type) {
  case 132:
  case 131:
  case 128:
  case 130:
  case 129:
   VAR_14 = FUNC_3(VAR_8);
   if (VAR_14)
    return VAR_14;
   VAR_14 = FUNC_6(VAR_8, VAR_9);
   FUNC_4(VAR_8);

   if (VAR_14 < 0)
    return VAR_14;

   *VAR_10 = VAR_14;

   return VAR_2;
  case 133:
   VAR_14 = FUNC_2(VAR_13->client,
    FUNC_0(VAR_9->channel));
   if (VAR_14 < 0)
    return VAR_14;

   *VAR_10 = (VAR_14 >> FUNC_1(VAR_9->channel))
    & 0x0f;

   return VAR_2;
  default:
   return -VAR_0;
  }
 case 134:
  switch (VAR_9->type) {
  case 131:
   VAR_15 = VAR_7;
   break;
  case 132:
   if (VAR_9->channel2 == VAR_1)
    VAR_15 = VAR_5;
   else
    VAR_15 = VAR_6;
   break;
  case 130:
   *VAR_10 = 28;
   *VAR_11 = 571429;
   return VAR_3;
  case 129:
   *VAR_10 = 0;
   *VAR_11 = 10000;
   return VAR_3;
  default:
   return -VAR_0;
  }

  VAR_14 = FUNC_7(VAR_13, VAR_15);
  if (VAR_14 < 0)
   return VAR_14;

  *VAR_10 = FUNC_9(VAR_14 & 0x07);

  return VAR_2;
 case 137:
  switch (VAR_9->type) {
  case 130:




   *VAR_10 = -256 - 11136 + 25 * 35;
   return VAR_2;
  default:





   VAR_14 = FUNC_7(VAR_13, VAR_4);
   if (VAR_14 < 0)
    return VAR_14;
   *VAR_10 = -FUNC_10(VAR_14);
   return VAR_2;
  }
 case 135:
  return FUNC_8(VAR_13, VAR_10, VAR_11);
 default:
  return -VAR_0;
 }
}
