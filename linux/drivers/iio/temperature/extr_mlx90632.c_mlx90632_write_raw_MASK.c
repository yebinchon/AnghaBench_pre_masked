
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx90632_data {int emissivity; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 struct mlx90632_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
         struct iio_chan_spec const *VAR_2, int VAR_3,
         int VAR_4, long VAR_5)
{
 struct mlx90632_data *VAR_6 = FUNC_0(VAR_1);

 switch (VAR_5) {
 case 128:

  if (VAR_3 < 0 || VAR_4 < 0 || VAR_3 > 1 ||
      (VAR_3 == 1 && VAR_4 != 0))
   return -VAR_0;
  VAR_6->emissivity = VAR_3 * 1000 + VAR_4 / 1000;
  return 0;
 default:
  return -VAR_0;
 }
}
