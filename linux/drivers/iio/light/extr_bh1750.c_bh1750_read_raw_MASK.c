
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct bh1750_data {int mtreg; int lock; struct bh1750_chip_info* chip_info; } ;
struct bh1750_chip_info {int mtreg_to_scale; int mtreg_to_usec; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bh1750_data*,int*) ;
 struct bh1750_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 int VAR_8, VAR_9;
 struct bh1750_data *VAR_10 = FUNC_1(VAR_3);
 const struct bh1750_chip_info *VAR_11 = VAR_10->chip_info;

 switch (VAR_7) {
 case 130:
  switch (VAR_4->type) {
  case 128:
   FUNC_2(&VAR_10->lock);
   VAR_8 = FUNC_0(VAR_10, VAR_5);
   FUNC_3(&VAR_10->lock);
   if (VAR_8 < 0)
    return VAR_8;

   return VAR_1;
  default:
   return -VAR_0;
  }
 case 129:
  VAR_9 = VAR_11->mtreg_to_scale / VAR_10->mtreg;
  *VAR_5 = VAR_9 / 1000000;
  *VAR_6 = VAR_9 % 1000000;
  return VAR_2;
 case 131:
  *VAR_5 = 0;
  *VAR_6 = VAR_11->mtreg_to_usec * VAR_10->mtreg;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
