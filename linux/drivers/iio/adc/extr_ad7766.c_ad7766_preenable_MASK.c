
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad7766 {int pd_gpio; int reg; TYPE_1__* spi; int mclk; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ) ;
 struct ad7766* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_0)
{
 struct ad7766 *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_6(FUNC_0(VAR_1->reg), VAR_1->reg);
 if (VAR_2 < 0) {
  FUNC_2(&VAR_1->spi->dev, "Failed to enable supplies: %d\n",
   VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->mclk);
 if (VAR_2 < 0) {
  FUNC_2(&VAR_1->spi->dev, "Failed to enable MCLK: %d\n", VAR_2);
  FUNC_5(FUNC_0(VAR_1->reg), VAR_1->reg);
  return VAR_2;
 }

 FUNC_3(VAR_1->pd_gpio, 0);

 return 0;
}
