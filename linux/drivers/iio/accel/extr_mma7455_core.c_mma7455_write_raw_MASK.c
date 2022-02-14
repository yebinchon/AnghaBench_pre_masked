
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma7455_data {int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mma7455_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_6,
        struct iio_chan_spec const *VAR_7,
        int VAR_8, int VAR_9, long VAR_10)
{
 struct mma7455_data *VAR_11 = FUNC_0(VAR_6);
 int VAR_12;

 switch (VAR_10) {
 case 129:
  if (VAR_8 == 250 && VAR_9 == 0)
   VAR_12 = VAR_2;
  else if (VAR_8 == 125 && VAR_9 == 0)
   VAR_12 = VAR_3;
  else
   return -VAR_0;

  return FUNC_1(VAR_11->regmap, VAR_5,
       VAR_4, VAR_12);

 case 128:

  if (VAR_8 == 0 && VAR_9 == VAR_1)
   return 0;
  break;
 }

 return -VAR_0;
}
