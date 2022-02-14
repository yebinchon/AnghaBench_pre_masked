
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_dfsdm_adc {TYPE_1__* dfsdm; } ;
struct regmap {int dummy; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iio_dev* FUNC_3 (struct stm32_dfsdm_adc*) ;
 int FUNC_4 (struct regmap*,int ,int,int) ;
 int FUNC_5 (struct iio_dev*,struct iio_trigger*) ;

__attribute__((used)) static int FUNC_6(struct stm32_dfsdm_adc *VAR_4,
           unsigned int VAR_5,
           struct iio_trigger *VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_3(VAR_4);
 struct regmap *VAR_8 = VAR_4->dfsdm->regmap;
 u32 VAR_9 = 0, VAR_10 = VAR_2;
 int VAR_11;

 if (VAR_6) {
  VAR_11 = FUNC_5(VAR_7, VAR_6);
  if (VAR_11 < 0)
   return VAR_11;


  VAR_9 = VAR_11;
  VAR_10 = VAR_3;
 }

 VAR_11 = FUNC_4(VAR_8, FUNC_0(VAR_5),
     VAR_1 | VAR_0,
     FUNC_2(VAR_9) |
     FUNC_1(VAR_10));
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
