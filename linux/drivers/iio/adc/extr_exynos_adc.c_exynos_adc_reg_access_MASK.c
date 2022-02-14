
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct exynos_adc {unsigned int regs; } ;


 int VAR_0 ;
 struct exynos_adc* FUNC_0 (struct iio_dev*) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
         unsigned VAR_2, unsigned VAR_3,
         unsigned *VAR_4)
{
 struct exynos_adc *VAR_5 = FUNC_0(VAR_1);

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 *VAR_4 = FUNC_1(VAR_5->regs + VAR_2);

 return 0;
}
