
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adc {int num_conv; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int masklength; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned long const*,int ) ;
 struct stm32_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct iio_dev*,unsigned long const*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_0,
          const unsigned long *VAR_1)
{
 struct stm32_adc *VAR_2 = FUNC_1(VAR_0);
 struct device *VAR_3 = VAR_0->dev.parent;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 < 0) {
  FUNC_5(VAR_3);
  return VAR_4;
 }

 VAR_2->num_conv = FUNC_0(VAR_1, VAR_0->masklength);

 VAR_4 = FUNC_6(VAR_0, VAR_1);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);

 return VAR_4;
}
