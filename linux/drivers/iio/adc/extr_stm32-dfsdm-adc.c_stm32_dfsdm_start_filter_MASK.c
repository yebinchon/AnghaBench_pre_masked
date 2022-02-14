
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {int nconv; struct stm32_dfsdm* dfsdm; } ;
struct stm32_dfsdm {int regmap; } ;
struct iio_trigger {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct stm32_dfsdm_adc *VAR_2,
        unsigned int VAR_3,
        struct iio_trigger *VAR_4)
{
 struct stm32_dfsdm *VAR_5 = VAR_2->dfsdm;
 int VAR_6;


 VAR_6 = FUNC_3(VAR_5->regmap, FUNC_0(VAR_3),
     VAR_0, FUNC_1(1));
 if (VAR_6 < 0)
  return VAR_6;


 if (VAR_2->nconv > 1 || VAR_4)
  return 0;


 return FUNC_3(VAR_5->regmap, FUNC_0(VAR_3),
      VAR_1,
      FUNC_2(1));
}
