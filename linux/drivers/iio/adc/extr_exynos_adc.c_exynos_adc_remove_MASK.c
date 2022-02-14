
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct iio_dev {int dev; } ;
struct exynos_adc {int vdd; TYPE_1__* data; int irq; scalar_t__ input; int tsirq; } ;
struct TYPE_2__ {int (* exit_hw ) (struct exynos_adc*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct exynos_adc*) ;
 int VAR_1 ;
 int FUNC_3 (struct exynos_adc*) ;
 int FUNC_4 (int ,struct exynos_adc*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct exynos_adc* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (scalar_t__) ;
 struct iio_dev* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct exynos_adc*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_8(VAR_2);
 struct exynos_adc *VAR_4 = FUNC_6(VAR_3);

 if (FUNC_0(VAR_0) && VAR_4->input) {
  FUNC_4(VAR_4->tsirq, VAR_4);
  FUNC_7(VAR_4->input);
 }
 FUNC_1(&VAR_3->dev, ((void*)0),
    VAR_1);
 FUNC_5(VAR_3);
 FUNC_4(VAR_4->irq, VAR_4);
 if (VAR_4->data->exit_hw)
  VAR_4->data->exit_hw(VAR_4);
 FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 FUNC_9(VAR_4->vdd);

 return 0;
}
