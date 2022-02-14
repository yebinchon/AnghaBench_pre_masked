
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp007_data {int config; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; } ;
typedef int s32 ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 struct tmp007_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int,int) ;
 int** VAR_8 ;
 int FUNC_3 (struct tmp007_data*,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_9,
  struct iio_chan_spec const *VAR_10, int *VAR_11,
  int *VAR_12, long VAR_13)
{
 struct tmp007_data *VAR_14 = FUNC_1(VAR_9);
 s32 VAR_15;
 int VAR_16;

 switch (VAR_13) {
 case 132:
  switch (VAR_10->channel2) {
  case 129:
   VAR_15 = FUNC_0(VAR_14->client, VAR_5);
   if (VAR_15 < 0)
    return VAR_15;
   break;
  case 128:
   VAR_15 = FUNC_3(VAR_14, VAR_7);
   if (VAR_15 < 0)
    return VAR_15;
   break;
  default:
   return -VAR_0;
  }

  *VAR_11 = FUNC_2(VAR_15, 15) >> VAR_6;

  return VAR_1;
 case 130:
  *VAR_11 = 31;
  *VAR_12 = 250000;

  return VAR_2;
 case 131:
  VAR_16 = (VAR_14->config & VAR_3)
    >> VAR_4;
  *VAR_11 = VAR_8[VAR_16][0];
  *VAR_12 = VAR_8[VAR_16][1];

  return VAR_2;
 default:
  return -VAR_0;
 }
}
