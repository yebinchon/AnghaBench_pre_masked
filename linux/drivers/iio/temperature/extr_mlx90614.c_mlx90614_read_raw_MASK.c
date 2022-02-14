
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx90614_data {int lock; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; int channel2; } ;
typedef int s32 ;


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
 int VAR_15 ;
 int FUNC_0 (int ,int ) ;
 struct mlx90614_data* FUNC_1 (struct iio_dev*) ;
 int* VAR_16 ;
 int FUNC_2 (struct mlx90614_data*,int) ;
 int FUNC_3 (struct mlx90614_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_17,
       struct iio_chan_spec const *VAR_18, int *VAR_19,
       int *VAR_20, long VAR_21)
{
 struct mlx90614_data *VAR_22 = FUNC_1(VAR_17);
 u8 VAR_23;
 s32 VAR_24;

 switch (VAR_21) {
 case 131:
  switch (VAR_18->channel2) {
  case 129:
   VAR_23 = VAR_13;
   break;
  case 128:
   switch (VAR_18->channel) {
   case 0:
    VAR_23 = VAR_14;
    break;
   case 1:
    VAR_23 = VAR_15;
    break;
   default:
    return -VAR_0;
   }
   break;
  default:
   return -VAR_0;
  }

  VAR_24 = FUNC_2(VAR_22, 1);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_24 = FUNC_0(VAR_22->client, VAR_23);
  FUNC_3(VAR_22);

  if (VAR_24 < 0)
   return VAR_24;


  if (VAR_24 & 0x8000)
   return -VAR_1;

  *VAR_19 = VAR_24;
  return VAR_2;
 case 132:
  *VAR_19 = VAR_8;
  *VAR_20 = VAR_9;
  return VAR_3;
 case 130:
  *VAR_19 = VAR_11;
  return VAR_2;
 case 134:
  FUNC_2(VAR_22, 0);
  FUNC_4(&VAR_22->lock);
  VAR_24 = FUNC_0(VAR_22->client,
            VAR_12);
  FUNC_5(&VAR_22->lock);
  FUNC_3(VAR_22);

  if (VAR_24 < 0)
   return VAR_24;

  if (VAR_24 == VAR_10) {
   *VAR_19 = 1;
   *VAR_20 = 0;
  } else {
   *VAR_19 = 0;
   *VAR_20 = VAR_24 * VAR_7;
  }
  return VAR_4;
 case 133:

  FUNC_2(VAR_22, 0);
  FUNC_4(&VAR_22->lock);
  VAR_24 = FUNC_0(VAR_22->client, VAR_5);
  FUNC_5(&VAR_22->lock);
  FUNC_3(VAR_22);

  if (VAR_24 < 0)
   return VAR_24;

  *VAR_19 = VAR_16[VAR_24 & VAR_6] / 100;
  *VAR_20 = (VAR_16[VAR_24 & VAR_6] % 100) *
   10000;
  return VAR_3;
 default:
  return -VAR_0;
 }
}
