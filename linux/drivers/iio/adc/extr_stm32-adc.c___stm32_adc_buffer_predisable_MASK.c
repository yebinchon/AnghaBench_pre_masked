
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_adc {scalar_t__ dma_chan; TYPE_1__* cfg; } ;
struct TYPE_4__ {struct device* parent; } ;
struct iio_dev {TYPE_2__ dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* stop_conv ) (struct stm32_adc*) ;} ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (scalar_t__) ;
 struct stm32_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct stm32_adc*) ;
 scalar_t__ FUNC_6 (struct iio_dev*,int *) ;
 int FUNC_7 (struct stm32_adc*) ;

__attribute__((used)) static void FUNC_8(struct iio_dev *VAR_0)
{
 struct stm32_adc *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2 = VAR_0->dev.parent;

 VAR_1->cfg->stop_conv(VAR_1);
 if (!VAR_1->dma_chan)
  FUNC_5(VAR_1);

 if (VAR_1->dma_chan)
  FUNC_1(VAR_1->dma_chan);

 if (FUNC_6(VAR_0, ((void*)0)))
  FUNC_0(&VAR_0->dev, "Can't clear trigger\n");

 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
}
