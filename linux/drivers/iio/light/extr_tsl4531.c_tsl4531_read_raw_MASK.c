
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl4531_data {int int_time; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct tsl4531_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5,
    int *VAR_6, int *VAR_7, long VAR_8)
{
 struct tsl4531_data *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_0(VAR_9->client,
   VAR_3);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_6 = VAR_10;
  return VAR_1;
 case 128:

  *VAR_6 = 1 << VAR_9->int_time;
  return VAR_1;
 case 130:
  if (VAR_9->int_time == 0)
   *VAR_7 = 400000;
  else if (VAR_9->int_time == 1)
   *VAR_7 = 200000;
  else if (VAR_9->int_time == 2)
   *VAR_7 = 100000;
  else
   return -VAR_0;
  *VAR_6 = 0;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
