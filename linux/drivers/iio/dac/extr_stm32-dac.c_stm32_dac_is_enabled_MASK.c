
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_dac {TYPE_1__* common; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 struct stm32_dac* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3, int VAR_4)
{
 struct stm32_dac *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->common->regmap, VAR_0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 if (FUNC_1(VAR_4))
  VAR_6 = FUNC_0(VAR_1, VAR_7);
 else
  VAR_6 = FUNC_0(VAR_2, VAR_7);

 return !!VAR_6;
}
