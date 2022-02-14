
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct exynos_adc {int tsirq; } ;


 int FUNC_0 (int ) ;
 struct exynos_adc* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0)
{
 struct exynos_adc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->tsirq);

 return 0;
}
