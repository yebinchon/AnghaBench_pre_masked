
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs3414_data {int gain; size_t timing; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct tcs3414_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct tcs3414_data*) ;
 int** VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_8,
      struct iio_chan_spec const *VAR_9,
      int *VAR_10, int *VAR_11, long VAR_12)
{
 struct tcs3414_data *VAR_13 = FUNC_3(VAR_8);
 int VAR_14, VAR_15;

 switch (VAR_12) {
 case 129:
  VAR_15 = FUNC_1(VAR_8);
  if (VAR_15)
   return VAR_15;
  VAR_15 = FUNC_4(VAR_13);
  if (VAR_15 < 0) {
   FUNC_2(VAR_8);
   return VAR_15;
  }
  VAR_15 = FUNC_0(VAR_13->client, VAR_9->address);
  FUNC_2(VAR_8);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_10 = VAR_15;
  return VAR_1;
 case 128:
  VAR_14 = (VAR_13->gain & VAR_3) >> VAR_4;
  *VAR_10 = VAR_6[VAR_14][0];
  *VAR_11 = VAR_6[VAR_14][1];
  return VAR_2;
 case 130:
  *VAR_10 = 0;
  *VAR_11 = VAR_7[VAR_13->timing & VAR_5] * 1000;
  return VAR_2;
 }
 return -VAR_0;
}
