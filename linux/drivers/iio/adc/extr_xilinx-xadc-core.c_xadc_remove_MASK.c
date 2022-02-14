
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xadc {int data; int clk; int zynq_unmask_work; int irq; int convst_trigger; int samplerate_trigger; TYPE_1__* ops; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int channels; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct xadc* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int ) ;
 struct iio_dev* FUNC_8 (struct platform_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_8(VAR_1);
 struct xadc *VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_2);
 if (VAR_3->ops->flags & VAR_0) {
  FUNC_5(VAR_3->samplerate_trigger);
  FUNC_5(VAR_3->convst_trigger);
  FUNC_6(VAR_2);
 }
 FUNC_2(VAR_3->irq, VAR_2);
 FUNC_0(&VAR_3->zynq_unmask_work);
 FUNC_1(VAR_3->clk);
 FUNC_7(VAR_3->data);
 FUNC_7(VAR_2->channels);

 return 0;
}
