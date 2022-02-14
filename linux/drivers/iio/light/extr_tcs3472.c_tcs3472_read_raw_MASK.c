
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs3472_data {size_t control; int atime; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct tcs3472_data* FUNC_3 (struct iio_dev*) ;
 int* VAR_4 ;
 int FUNC_4 (struct tcs3472_data*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7, int *VAR_8, long VAR_9)
{
 struct tcs3472_data *VAR_10 = FUNC_3(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 128:
  VAR_11 = FUNC_1(VAR_5);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_4(VAR_10);
  if (VAR_11 < 0) {
   FUNC_2(VAR_5);
   return VAR_11;
  }
  VAR_11 = FUNC_0(VAR_10->client, VAR_6->address);
  FUNC_2(VAR_5);
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_7 = VAR_11;
  return VAR_1;
 case 130:
  *VAR_7 = VAR_4[VAR_10->control &
   VAR_3];
  return VAR_1;
 case 129:
  *VAR_7 = 0;
  *VAR_8 = (256 - VAR_10->atime) * 2400;
  return VAR_2;
 }
 return -VAR_0;
}
