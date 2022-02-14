
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ina2xx_chip_info {int state_lock; int regmap; TYPE_1__* config; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_2__ {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct iio_dev*) ;
 struct ina2xx_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct ina2xx_chip_info*,int,unsigned int*) ;
 int FUNC_3 (struct ina2xx_chip_info*,int,unsigned int*) ;
 int FUNC_4 (struct ina2xx_chip_info*,int,unsigned int*) ;
 int FUNC_5 (struct ina2xx_chip_info*,int,unsigned int*) ;
 int VAR_4 ;
 int FUNC_6 (struct ina2xx_chip_info*,int,unsigned int*) ;
 int FUNC_7 (struct ina2xx_chip_info*,int,unsigned int*) ;
 int FUNC_8 (struct ina2xx_chip_info*,int,unsigned int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,unsigned int*) ;
 int FUNC_12 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int VAR_7, int VAR_8, long VAR_9)
{
 struct ina2xx_chip_info *VAR_10 = FUNC_1(VAR_5);
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 FUNC_9(&VAR_10->state_lock);

 VAR_13 = FUNC_11(VAR_10->regmap, VAR_2, &VAR_11);
 if (VAR_13)
  goto err;

 VAR_12 = VAR_11;

 switch (VAR_9) {
 case 128:
  VAR_13 = FUNC_6(VAR_10, VAR_7, &VAR_12);
  break;

 case 129:
  if (VAR_10->config->chip_id == VAR_4) {
   if (VAR_6->address == VAR_3)
    VAR_13 = FUNC_8(VAR_10, VAR_8,
         &VAR_12);
   else
    VAR_13 = FUNC_7(VAR_10, VAR_8,
              &VAR_12);
  } else {
   if (VAR_6->address == VAR_3)
    VAR_13 = FUNC_3(VAR_10, VAR_8,
         &VAR_12);
   else
    VAR_13 = FUNC_2(VAR_10, VAR_8,
              &VAR_12);
  }
  break;

 case 130:
  if (VAR_6->address == VAR_3)
   VAR_13 = FUNC_5(VAR_10, VAR_7 * 1000 +
        VAR_8 / 1000, &VAR_12);
  else
   VAR_13 = FUNC_4(VAR_10, VAR_7, &VAR_12);
  break;

 default:
  VAR_13 = -VAR_1;
 }

 if (!VAR_13 && (VAR_12 != VAR_11))
  VAR_13 = FUNC_12(VAR_10->regmap, VAR_2, VAR_12);
err:
 FUNC_10(&VAR_10->state_lock);

 return VAR_13;
}
