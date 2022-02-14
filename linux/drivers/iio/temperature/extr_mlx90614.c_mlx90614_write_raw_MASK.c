
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx90614_data {int lock; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlx90614_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mlx90614_data*,int) ;
 int FUNC_3 (struct mlx90614_data*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5, int VAR_6,
        int VAR_7, long VAR_8)
{
 struct mlx90614_data *VAR_9 = FUNC_0(VAR_4);
 s32 VAR_10;

 switch (VAR_8) {
 case 129:
  if (VAR_6 < 0 || VAR_7 < 0 || VAR_6 > 1 || (VAR_6 == 1 && VAR_7 != 0))
   return -VAR_0;
  VAR_6 = VAR_6 * VAR_2 +
   VAR_7 / VAR_1;

  FUNC_2(VAR_9, 0);
  FUNC_5(&VAR_9->lock);
  VAR_10 = FUNC_4(VAR_9->client, VAR_3,
       VAR_6);
  FUNC_6(&VAR_9->lock);
  FUNC_3(VAR_9);

  return VAR_10;
 case 128:
  if (VAR_6 < 0 || VAR_7 < 0)
   return -VAR_0;

  FUNC_2(VAR_9, 0);
  FUNC_5(&VAR_9->lock);
  VAR_10 = FUNC_1(VAR_9->client,
       VAR_6 * 100 + VAR_7 / 10000);
  FUNC_6(&VAR_9->lock);
  FUNC_3(VAR_9);

  return VAR_10;
 default:
  return -VAR_0;
 }
}
