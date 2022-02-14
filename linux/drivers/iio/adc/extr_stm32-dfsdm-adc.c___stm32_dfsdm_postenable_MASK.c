
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {scalar_t__ hwc; int dfsdm; scalar_t__ bufi; } ;
struct iio_dev {int dev; int trig; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct stm32_dfsdm_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct stm32_dfsdm_adc*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_0)
{
 struct stm32_dfsdm_adc *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;


 VAR_1->bufi = 0;

 if (VAR_1->hwc) {
  VAR_2 = FUNC_2(VAR_1->hwc);
  if (VAR_2 < 0)
   return VAR_2;
 }

 VAR_2 = FUNC_7(VAR_1->dfsdm);
 if (VAR_2 < 0)
  goto err_stop_hwc;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev, "Can't start DMA\n");
  goto stop_dfsdm;
 }

 VAR_2 = FUNC_6(VAR_1, VAR_0->trig);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev, "Can't start conversion\n");
  goto err_stop_dma;
 }

 return 0;

err_stop_dma:
 FUNC_5(VAR_0);
stop_dfsdm:
 FUNC_8(VAR_1->dfsdm);
err_stop_hwc:
 if (VAR_1->hwc)
  FUNC_1(VAR_1->hwc);

 return VAR_2;
}
