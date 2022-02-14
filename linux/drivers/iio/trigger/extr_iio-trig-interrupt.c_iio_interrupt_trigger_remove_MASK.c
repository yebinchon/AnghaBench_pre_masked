
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_trigger {int dummy; } ;
struct iio_interrupt_trigger_info {int irq; } ;


 int FUNC_0 (int ,struct iio_trigger*) ;
 int FUNC_1 (struct iio_trigger*) ;
 struct iio_interrupt_trigger_info* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct iio_trigger*) ;
 int FUNC_4 (struct iio_interrupt_trigger_info*) ;
 struct iio_trigger* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct iio_trigger *VAR_1;
 struct iio_interrupt_trigger_info *VAR_2;

 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2->irq, VAR_1);
 FUNC_4(VAR_2);
 FUNC_1(VAR_1);

 return 0;
}
