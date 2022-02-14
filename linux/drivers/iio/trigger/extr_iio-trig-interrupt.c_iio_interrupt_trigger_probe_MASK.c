
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long flags; int start; } ;
struct platform_device {int dev; } ;
struct iio_trigger {int name; int * ops; } ;
struct iio_interrupt_trigger_info {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,struct iio_trigger*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct iio_trigger* FUNC_2 (char*,int) ;
 int FUNC_3 (struct iio_trigger*) ;
 int FUNC_4 (struct iio_trigger*) ;
 int FUNC_5 (struct iio_trigger*,struct iio_interrupt_trigger_info*) ;
 int FUNC_6 (struct iio_interrupt_trigger_info*) ;
 struct iio_interrupt_trigger_info* FUNC_7 (int,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct iio_trigger*) ;
 int FUNC_10 (int,int ,unsigned long,int ,struct iio_trigger*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct iio_interrupt_trigger_info *VAR_9;
 struct iio_trigger *VAR_10;
 unsigned long VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_12 = FUNC_8(VAR_8, VAR_3, 0);

 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_11 = (VAR_12->flags & VAR_5) | VAR_4;

 VAR_13 = VAR_12->start;

 VAR_10 = FUNC_2("irqtrig%d", VAR_13);
 if (!VAR_10) {
  VAR_14 = -VAR_1;
  goto error_ret;
 }

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_14 = -VAR_1;
  goto error_free_trigger;
 }
 FUNC_5(VAR_10, VAR_9);
 VAR_9->irq = VAR_13;
 VAR_10->ops = &VAR_6;
 VAR_14 = FUNC_10(VAR_13, VAR_7,
     VAR_11, VAR_10->name, VAR_10);
 if (VAR_14) {
  FUNC_0(&VAR_8->dev,
   "request IRQ-%d failed", VAR_13);
  goto error_free_trig_info;
 }

 VAR_14 = FUNC_4(VAR_10);
 if (VAR_14)
  goto error_release_irq;
 FUNC_9(VAR_8, VAR_10);

 return 0;


error_release_irq:
 FUNC_1(VAR_13, VAR_10);
error_free_trig_info:
 FUNC_6(VAR_9);
error_free_trigger:
 FUNC_3(VAR_10);
error_ret:
 return VAR_14;
}
