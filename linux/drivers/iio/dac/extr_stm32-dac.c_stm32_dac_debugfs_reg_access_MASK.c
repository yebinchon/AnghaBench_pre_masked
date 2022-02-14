
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dac {TYPE_1__* common; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 struct stm32_dac* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0,
     unsigned VAR_1, unsigned VAR_2,
     unsigned *VAR_3)
{
 struct stm32_dac *VAR_4 = FUNC_0(VAR_0);

 if (!VAR_3)
  return FUNC_2(VAR_4->common->regmap, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_4->common->regmap, VAR_1, VAR_3);
}
