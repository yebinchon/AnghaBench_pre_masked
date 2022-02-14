
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2471_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int differential; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ltc2471_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 struct ltc2471_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_1(VAR_9->client);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_6 = VAR_10;
  return VAR_2;

 case 128:
  if (VAR_5->differential)

   *VAR_6 = 2 * VAR_3;
  else

   *VAR_6 = VAR_3;
  *VAR_7 = 16;
  return VAR_1;

 case 130:

  *VAR_6 = -VAR_3;
  return VAR_2;

 default:
  return -VAR_0;
 }
}
