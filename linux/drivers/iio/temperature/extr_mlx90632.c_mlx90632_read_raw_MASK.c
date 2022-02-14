
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx90632_data {int emissivity; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct mlx90632_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct mlx90632_data*,int*) ;
 int FUNC_2 (struct mlx90632_data*,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4, int *VAR_5,
        int *VAR_6, long VAR_7)
{
 struct mlx90632_data *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 130:
  switch (VAR_4->channel2) {
  case 129:
   VAR_9 = FUNC_1(VAR_8, VAR_5);
   if (VAR_9 < 0)
    return VAR_9;
   return VAR_1;
  case 128:
   VAR_9 = FUNC_2(VAR_8, VAR_5);
   if (VAR_9 < 0)
    return VAR_9;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 131:
  if (VAR_8->emissivity == 1000) {
   *VAR_5 = 1;
   *VAR_6 = 0;
  } else {
   *VAR_5 = 0;
   *VAR_6 = VAR_8->emissivity * 1000;
  }
  return VAR_2;

 default:
  return -VAR_0;
 }
}
