
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7d_adc {int vref; int dev; int clk; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct imx7d_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct imx7d_adc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_2(VAR_0);
 struct imx7d_adc *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_6(VAR_2->vref);
 if (VAR_3) {
  FUNC_1(VAR_2->dev,
   "Can't enable adc reference top voltage, err = %d\n",
   VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_2->clk);
 if (VAR_3) {
  FUNC_1(VAR_2->dev,
   "Could not prepare or enable clock.\n");
  FUNC_5(VAR_2->vref);
  return VAR_3;
 }

 FUNC_4(VAR_2);

 return 0;
}
