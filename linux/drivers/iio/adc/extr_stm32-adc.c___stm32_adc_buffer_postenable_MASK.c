
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_adc {int dma_chan; TYPE_1__* cfg; scalar_t__ bufi; } ;
struct TYPE_4__ {struct device* parent; } ;
struct iio_dev {TYPE_2__ dev; int * trig; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* start_conv ) (struct stm32_adc*,int) ;} ;


 int FUNC_0 (TYPE_2__*,char*) ;
 struct stm32_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct stm32_adc*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int *) ;
 int FUNC_9 (struct stm32_adc*,int) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_0)
{
 struct stm32_adc *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = VAR_0->dev.parent;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0) {
  FUNC_5(VAR_2);
  return VAR_3;
 }

 VAR_3 = FUNC_8(VAR_0, VAR_0->trig);
 if (VAR_3) {
  FUNC_0(&VAR_0->dev, "Can't set trigger\n");
  goto err_pm_put;
 }

 VAR_3 = FUNC_7(VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_0->dev, "Can't start dma\n");
  goto err_clr_trig;
 }


 VAR_1->bufi = 0;

 if (!VAR_1->dma_chan)
  FUNC_6(VAR_1);

 VAR_1->cfg->start_conv(VAR_1, !!VAR_1->dma_chan);

 return 0;

err_clr_trig:
 FUNC_8(VAR_0, ((void*)0));
err_pm_put:
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);

 return VAR_3;
}
