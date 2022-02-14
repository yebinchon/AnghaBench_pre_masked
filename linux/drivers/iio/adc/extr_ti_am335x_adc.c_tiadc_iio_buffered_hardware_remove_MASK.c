
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tiadc_device {TYPE_1__* mfd_tscadc; } ;
struct iio_dev {int buffer; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,struct iio_dev*) ;
 int FUNC_1 (int ) ;
 struct tiadc_device* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static void FUNC_3(struct iio_dev *VAR_0)
{
 struct tiadc_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->mfd_tscadc->irq, VAR_0);
 FUNC_1(VAR_0->buffer);
}
