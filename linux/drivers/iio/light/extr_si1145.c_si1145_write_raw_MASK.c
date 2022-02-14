
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si1145_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; int type; int channel2; } ;


 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct si1145_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct si1145_data*,int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct si1145_data*,int) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_9,
          struct iio_chan_spec const *VAR_10,
          int VAR_11, int VAR_12, long VAR_13)
{
 struct si1145_data *VAR_14 = FUNC_6(VAR_9);
 u8 VAR_15, VAR_16, VAR_17;
 int VAR_18;

 switch (VAR_13) {
 case 130:
  switch (VAR_10->type) {
  case 128:
   VAR_11 = FUNC_9(VAR_11, VAR_12);
   if (VAR_11 < 0)
    return VAR_11;
   VAR_15 = VAR_8;
   VAR_16 = VAR_7;
   break;
  case 129:
   VAR_11 = FUNC_7(VAR_11, VAR_12);
   if (VAR_11 < 0)
    return VAR_11;
   if (VAR_10->channel2 == VAR_2) {
    VAR_15 = VAR_4;
    VAR_16 = VAR_3;
   } else {
    VAR_15 = VAR_6;
    VAR_16 = VAR_5;
   }
   break;
  default:
   return -VAR_0;
  }

  VAR_18 = FUNC_4(VAR_9);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_8(VAR_14, VAR_15, VAR_11);
  if (VAR_18 < 0) {
   FUNC_5(VAR_9);
   return VAR_18;
  }

  VAR_18 = FUNC_8(VAR_14, VAR_16, (~VAR_11 & 0x07) << 4);
  FUNC_5(VAR_9);
  return VAR_18;
 case 132:
  if (VAR_10->type != VAR_1)
   return -VAR_0;

  if (VAR_11 < 0 || VAR_11 > 15 || VAR_12 != 0)
   return -VAR_0;

  VAR_15 = FUNC_0(VAR_10->channel);
  VAR_17 = FUNC_1(VAR_10->channel);

  VAR_18 = FUNC_4(VAR_9);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_2(VAR_14->client, VAR_15);
  if (VAR_18 < 0) {
   FUNC_5(VAR_9);
   return VAR_18;
  }
  VAR_18 = FUNC_3(VAR_14->client, VAR_15,
   (VAR_18 & ~(0x0f << VAR_17)) |
   ((VAR_11 & 0x0f) << VAR_17));
  FUNC_5(VAR_9);
  return VAR_18;
 case 131:
  return FUNC_10(VAR_14, VAR_11);
 default:
  return -VAR_0;
 }
}
