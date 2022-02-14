
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_adc {int dma_chan; int fl_id; TYPE_1__* dfsdm; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct stm32_dfsdm_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct iio_dev *VAR_2)
{
 struct stm32_dfsdm_adc *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3->dma_chan)
  return;

 FUNC_3(VAR_3->dfsdm->regmap, FUNC_0(VAR_3->fl_id),
      VAR_1 | VAR_0, 0);
 FUNC_1(VAR_3->dma_chan);
}
