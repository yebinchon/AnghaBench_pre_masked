
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs3472_data {int control; int atime; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 struct tcs3472_data* FUNC_2 (struct iio_dev*) ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5,
          struct iio_chan_spec const *VAR_6,
          int VAR_7, int VAR_8, long VAR_9)
{
 struct tcs3472_data *VAR_10 = FUNC_2(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 129:
  if (VAR_8 != 0)
   return -VAR_0;
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
   if (VAR_7 == VAR_4[VAR_11]) {
    VAR_10->control &= ~VAR_3;
    VAR_10->control |= VAR_11;
    return FUNC_1(
     VAR_10->client, VAR_2,
     VAR_10->control);
   }
  }
  return -VAR_0;
 case 128:
  if (VAR_7 != 0)
   return -VAR_0;
  for (VAR_11 = 0; VAR_11 < 256; VAR_11++) {
   if (VAR_8 == (256 - VAR_11) * 2400) {
    VAR_10->atime = VAR_11;
    return FUNC_1(
     VAR_10->client, VAR_1,
     VAR_10->atime);
   }

  }
  return -VAR_0;
 }
 return -VAR_0;
}
