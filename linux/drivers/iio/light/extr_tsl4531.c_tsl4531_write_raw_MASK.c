
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl4531_data {int int_time; int lock; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct tsl4531_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5, long VAR_6)
{
 struct tsl4531_data *VAR_7 = FUNC_1(VAR_2);
 int VAR_8, VAR_9;

 switch (VAR_6) {
 case 128:
  if (VAR_4 != 0)
   return -VAR_0;
  if (VAR_5 == 400000)
   VAR_8 = 0;
  else if (VAR_5 == 200000)
   VAR_8 = 1;
  else if (VAR_5 == 100000)
   VAR_8 = 2;
  else
   return -VAR_0;
  FUNC_2(&VAR_7->lock);
  VAR_9 = FUNC_0(VAR_7->client,
   VAR_1, VAR_8);
  if (VAR_9 >= 0)
   VAR_7->int_time = VAR_8;
  FUNC_3(&VAR_7->lock);
  return VAR_9;
 default:
  return -VAR_0;
 }
}
