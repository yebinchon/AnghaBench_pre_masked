
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct palmas_gpadc {int irq_auto_1; scalar_t__ wakeup2_enable; int irq_auto_0; scalar_t__ wakeup1_enable; int irq; } ;
struct iio_dev {int dummy; } ;


 struct iio_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct palmas_gpadc*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct palmas_gpadc* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(&VAR_0->dev);
 struct palmas_gpadc *VAR_2 = FUNC_4(VAR_1);

 if (VAR_2->wakeup1_enable || VAR_2->wakeup2_enable)
  FUNC_1(&VAR_0->dev);
 FUNC_3(VAR_1);
 FUNC_2(VAR_2->irq, VAR_2);
 if (VAR_2->wakeup1_enable)
  FUNC_2(VAR_2->irq_auto_0, VAR_2);
 if (VAR_2->wakeup2_enable)
  FUNC_2(VAR_2->irq_auto_1, VAR_2);

 return 0;
}
