
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltr501_data {TYPE_1__* client; int regmap; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ltr501_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct iio_dev *VAR_10 = VAR_9;
 struct ltr501_data *VAR_11 = FUNC_3(VAR_10);
 int VAR_12, VAR_13;

 VAR_12 = FUNC_5(VAR_11->regmap, VAR_5, &VAR_13);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_11->client->dev,
   "irq read int reg failed\n");
  return VAR_4;
 }

 if (VAR_13 & VAR_6)
  FUNC_4(VAR_10,
          FUNC_0(VAR_2, 0,
          VAR_1,
          VAR_0),
          FUNC_2(VAR_10));

 if (VAR_13 & VAR_7)
  FUNC_4(VAR_10,
          FUNC_0(VAR_3, 0,
          VAR_1,
          VAR_0),
          FUNC_2(VAR_10));

 return VAR_4;
}
