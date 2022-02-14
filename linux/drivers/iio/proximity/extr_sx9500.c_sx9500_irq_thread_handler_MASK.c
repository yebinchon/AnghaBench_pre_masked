
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx9500_data {int mutex; int completion; TYPE_1__* client; int regmap; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct sx9500_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct iio_dev *VAR_7 = VAR_6;
 struct sx9500_data *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;
 unsigned int VAR_10;

 FUNC_3(&VAR_8->mutex);

 VAR_9 = FUNC_5(VAR_8->regmap, VAR_4, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_8->client->dev, "i2c transfer error in irq\n");
  goto out;
 }

 if (VAR_10 & (VAR_1 | VAR_3))
  FUNC_6(VAR_7);

 if (VAR_10 & VAR_2)
  FUNC_0(&VAR_8->completion);

out:
 FUNC_4(&VAR_8->mutex);

 return VAR_0;
}
