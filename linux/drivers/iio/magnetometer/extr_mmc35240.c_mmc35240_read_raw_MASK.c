
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mmc35240_data {int mutex; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
typedef int __le16 ;
struct TYPE_3__ {int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 struct mmc35240_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct mmc35240_data*,int ,int *,int*) ;
 int FUNC_3 (struct mmc35240_data*,int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_7,
        struct iio_chan_spec const *VAR_8, int *VAR_9,
        int *VAR_10, long VAR_11)
{
 struct mmc35240_data *VAR_12 = FUNC_1(VAR_7);
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 __le16 VAR_16[3];

 switch (VAR_11) {
 case 130:
  FUNC_4(&VAR_12->mutex);
  VAR_13 = FUNC_3(VAR_12, VAR_16);
  FUNC_5(&VAR_12->mutex);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_13 = FUNC_2(VAR_12, VAR_8->address, VAR_16, VAR_9);
  if (VAR_13 < 0)
   return VAR_13;
  return VAR_1;
 case 128:
  *VAR_9 = 0;
  *VAR_10 = 1000;
  return VAR_2;
 case 129:
  FUNC_4(&VAR_12->mutex);
  VAR_13 = FUNC_6(VAR_12->regmap, VAR_5, &VAR_15);
  FUNC_5(&VAR_12->mutex);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_14 = (VAR_15 & VAR_3) >> VAR_4;
  if (VAR_14 < 0 || VAR_14 >= FUNC_0(VAR_6))
   return -VAR_0;

  *VAR_9 = VAR_6[VAR_14].val;
  *VAR_10 = VAR_6[VAR_14].val2;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
