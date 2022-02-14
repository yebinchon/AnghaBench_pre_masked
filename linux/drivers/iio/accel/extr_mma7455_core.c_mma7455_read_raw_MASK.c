
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma7455_data {int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
typedef int data ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iio_dev*) ;
 struct mma7455_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mma7455_data*) ;
 int FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_7,
       struct iio_chan_spec const *VAR_8,
       int *VAR_9, int *VAR_10, long VAR_11)
{
 struct mma7455_data *VAR_12 = FUNC_1(VAR_7);
 unsigned int VAR_13;
 __le16 VAR_14;
 int VAR_15;

 switch (VAR_11) {
 case 130:
  if (FUNC_0(VAR_7))
   return -VAR_0;

  VAR_15 = FUNC_3(VAR_12);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_4(VAR_12->regmap, VAR_8->address, &VAR_14,
           sizeof(VAR_14));
  if (VAR_15)
   return VAR_15;

  *VAR_9 = FUNC_6(FUNC_2(VAR_14), 9);

  return VAR_2;

 case 128:
  *VAR_9 = 0;
  *VAR_10 = VAR_4;

  return VAR_3;

 case 129:
  VAR_15 = FUNC_5(VAR_12->regmap, VAR_6, &VAR_13);
  if (VAR_15)
   return VAR_15;

  if (VAR_13 & VAR_5)
   *VAR_9 = 250;
  else
   *VAR_9 = 125;

  return VAR_2;
 }

 return -VAR_1;
}
