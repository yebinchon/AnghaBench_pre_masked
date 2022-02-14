
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct apds9960_data {int regmap; scalar_t__ pxs_int; scalar_t__ als_int; TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (struct apds9960_data*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct apds9960_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ,int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct iio_dev *VAR_13 = VAR_12;
 struct apds9960_data *VAR_14 = FUNC_4(VAR_13);
 int VAR_15, VAR_16;

 VAR_15 = FUNC_6(VAR_14->regmap, VAR_2, &VAR_16);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->client->dev, "irq status reg read failed\n");
  return VAR_10;
 }

 if ((VAR_16 & VAR_3) && VAR_14->als_int) {
  FUNC_5(VAR_13,
          FUNC_0(VAR_8, 0,
          VAR_7,
          VAR_6),
          FUNC_3(VAR_13));
  FUNC_7(VAR_14->regmap, VAR_0, 1);
 }

 if ((VAR_16 & VAR_5) && VAR_14->pxs_int) {
  FUNC_5(VAR_13,
          FUNC_0(VAR_9, 0,
          VAR_7,
          VAR_6),
          FUNC_3(VAR_13));
  FUNC_7(VAR_14->regmap, VAR_1, 1);
 }

 if (VAR_16 & VAR_4)
  FUNC_1(VAR_14);

 return VAR_10;
}
