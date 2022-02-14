
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc35240_data {int mutex; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mmc35240_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct mmc35240_data*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
         struct iio_chan_spec const *VAR_5, int VAR_6,
         int VAR_7, long VAR_8)
{
 struct mmc35240_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10, VAR_11;

 switch (VAR_8) {
 case 128:
  VAR_10 = FUNC_1(VAR_9, VAR_6, VAR_7);
  if (VAR_10 < 0)
   return -VAR_0;
  FUNC_2(&VAR_9->mutex);
  VAR_11 = FUNC_4(VAR_9->regmap, VAR_3,
      VAR_1,
      VAR_10 << VAR_2);
  FUNC_3(&VAR_9->mutex);
  return VAR_11;
 default:
  return -VAR_0;
 }
}
