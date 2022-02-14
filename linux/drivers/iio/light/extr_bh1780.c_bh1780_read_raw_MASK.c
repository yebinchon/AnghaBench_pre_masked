
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct bh1780_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bh1780_data*,int ) ;
 struct bh1780_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7, int *VAR_8, long VAR_9)
{
 struct bh1780_data *VAR_10 = FUNC_1(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 129:
  switch (VAR_6->type) {
  case 128:
   FUNC_2(&VAR_10->client->dev);
   VAR_11 = FUNC_0(VAR_10, VAR_1);
   if (VAR_11 < 0)
    return VAR_11;
   FUNC_3(&VAR_10->client->dev);
   FUNC_4(&VAR_10->client->dev);
   *VAR_7 = VAR_11;

   return VAR_3;
  default:
   return -VAR_2;
  }
 case 130:
  *VAR_7 = 0;
  *VAR_8 = VAR_0 * 1000;
  return VAR_4;
 default:
  return -VAR_2;
 }
}
