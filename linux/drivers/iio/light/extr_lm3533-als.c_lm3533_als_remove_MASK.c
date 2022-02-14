
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct lm3533_als {scalar_t__ irq; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (scalar_t__,struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct lm3533_als* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct lm3533_als*) ;
 int FUNC_4 (struct iio_dev*,int) ;
 struct iio_dev* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_5(VAR_0);
 struct lm3533_als *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_1, 0);
 FUNC_1(VAR_1);
 FUNC_3(VAR_2);
 if (VAR_2->irq)
  FUNC_0(VAR_2->irq, VAR_1);

 return 0;
}
