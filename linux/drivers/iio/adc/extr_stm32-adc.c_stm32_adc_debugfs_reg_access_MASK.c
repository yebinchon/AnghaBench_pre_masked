
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adc {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 struct stm32_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 unsigned int FUNC_5 (struct stm32_adc*,unsigned int) ;
 int FUNC_6 (struct stm32_adc*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_0,
     unsigned VAR_1, unsigned VAR_2,
     unsigned *VAR_3)
{
 struct stm32_adc *VAR_4 = FUNC_0(VAR_0);
 struct device *VAR_5 = VAR_0->dev.parent;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0) {
  FUNC_4(VAR_5);
  return VAR_6;
 }

 if (!VAR_3)
  FUNC_6(VAR_4, VAR_1, VAR_2);
 else
  *VAR_3 = FUNC_5(VAR_4, VAR_1);

 FUNC_2(VAR_5);
 FUNC_3(VAR_5);

 return 0;
}
