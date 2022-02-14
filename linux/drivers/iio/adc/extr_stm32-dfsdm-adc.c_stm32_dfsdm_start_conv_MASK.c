
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_adc {int fl_id; TYPE_1__* dfsdm; } ;
struct regmap {int dummy; } ;
struct iio_trigger {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct regmap*,int ,int ,int ) ;
 int FUNC_2 (struct stm32_dfsdm_adc*,int ,struct iio_trigger*) ;
 int FUNC_3 (struct stm32_dfsdm_adc*,int ,struct iio_trigger*) ;
 int FUNC_4 (struct stm32_dfsdm_adc*) ;
 int FUNC_5 (struct stm32_dfsdm_adc*,int ,struct iio_trigger*) ;
 int FUNC_6 (struct stm32_dfsdm_adc*) ;

__attribute__((used)) static int FUNC_7(struct stm32_dfsdm_adc *VAR_1,
      struct iio_trigger *VAR_2)
{
 struct regmap *VAR_3 = VAR_1->dfsdm->regmap;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_1->fl_id, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_1->fl_id, VAR_2);
 if (VAR_4 < 0)
  goto stop_channels;

 VAR_4 = FUNC_5(VAR_1, VAR_1->fl_id, VAR_2);
 if (VAR_4 < 0)
  goto filter_unconfigure;

 return 0;

filter_unconfigure:
 FUNC_1(VAR_3, FUNC_0(VAR_1->fl_id),
      VAR_0, 0);
stop_channels:
 FUNC_6(VAR_1);

 return VAR_4;
}
