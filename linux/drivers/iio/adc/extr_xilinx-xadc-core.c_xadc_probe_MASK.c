
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xadc {int irq; int* threshold; TYPE_2__* ops; void* convst_trigger; void* samplerate_trigger; void* clk; int zynq_unmask_work; void* base; int lock; int mutex; int completion; } ;
struct resource {int dummy; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct of_device_id {TYPE_2__* data; } ;
struct TYPE_9__ {int of_node; TYPE_5__* parent; } ;
struct iio_dev {char* name; int num_channels; TYPE_4__* channels; int * info; int modes; TYPE_1__ dev; } ;
struct TYPE_11__ {char sign; } ;
struct TYPE_12__ {int scan_index; TYPE_3__ scan_type; } ;
struct TYPE_10__ {int flags; int (* setup ) (struct platform_device*,struct iio_dev*,int) ;int interrupt_handler; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (TYPE_5__*) ;
 void* FUNC_10 (TYPE_5__*,int *) ;
 struct iio_dev* FUNC_11 (TYPE_5__*,int) ;
 void* FUNC_12 (TYPE_5__*,struct resource*) ;
 int FUNC_13 (int,struct iio_dev*) ;
 int FUNC_14 (struct iio_dev*) ;
 int VAR_10 ;
 struct xadc* FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (struct iio_dev*) ;
 int FUNC_18 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (int *) ;
 struct of_device_id* FUNC_22 (int ,int ) ;
 int FUNC_23 (struct platform_device*,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,int ) ;
 int FUNC_25 (struct platform_device*,struct iio_dev*) ;
 int FUNC_26 (int,int ,int ,int ,struct iio_dev*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct platform_device*,struct iio_dev*,int) ;
 void* FUNC_29 (struct iio_dev*,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_30 (struct iio_dev*,int ,unsigned int*) ;
 int FUNC_31 (struct iio_dev*) ;
 int FUNC_32 (struct xadc*,int ,int*) ;
 int VAR_14 ;
 int FUNC_33 (struct xadc*,int ,int ,int ) ;
 int FUNC_34 (struct xadc*,int ,unsigned int) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_16)
{
 const struct of_device_id *VAR_17;
 struct iio_dev *VAR_18;
 unsigned int VAR_19;
 struct resource *VAR_20;
 unsigned int VAR_21;
 struct xadc *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (!VAR_16->dev.of_node)
  return -VAR_1;

 VAR_17 = FUNC_22(VAR_13, VAR_16->dev.of_node);
 if (!VAR_17)
  return -VAR_0;

 VAR_24 = FUNC_23(VAR_16, 0);
 if (VAR_24 <= 0)
  return -VAR_3;

 VAR_18 = FUNC_11(&VAR_16->dev, sizeof(*VAR_22));
 if (!VAR_18)
  return -VAR_2;

 VAR_22 = FUNC_15(VAR_18);
 VAR_22->ops = VAR_17->data;
 VAR_22->irq = VAR_24;
 FUNC_19(&VAR_22->completion);
 FUNC_21(&VAR_22->mutex);
 FUNC_27(&VAR_22->lock);
 FUNC_1(&VAR_22->zynq_unmask_work, VAR_15);

 VAR_20 = FUNC_24(VAR_16, VAR_5, 0);
 VAR_22->base = FUNC_12(&VAR_16->dev, VAR_20);
 if (FUNC_2(VAR_22->base))
  return FUNC_3(VAR_22->base);

 VAR_18->dev.parent = &VAR_16->dev;
 VAR_18->dev.of_node = VAR_16->dev.of_node;
 VAR_18->name = "xadc";
 VAR_18->modes = VAR_4;
 VAR_18->info = &VAR_12;

 VAR_23 = FUNC_30(VAR_18, VAR_16->dev.of_node, &VAR_21);
 if (VAR_23)
  goto err_device_free;

 if (VAR_22->ops->flags & VAR_7) {
  VAR_23 = FUNC_18(VAR_18,
   &VAR_10, &VAR_14,
   &VAR_11);
  if (VAR_23)
   goto err_device_free;

  VAR_22->convst_trigger = FUNC_29(VAR_18, "convst");
  if (FUNC_2(VAR_22->convst_trigger)) {
   VAR_23 = FUNC_3(VAR_22->convst_trigger);
   goto err_triggered_buffer_cleanup;
  }
  VAR_22->samplerate_trigger = FUNC_29(VAR_18,
   "samplerate");
  if (FUNC_2(VAR_22->samplerate_trigger)) {
   VAR_23 = FUNC_3(VAR_22->samplerate_trigger);
   goto err_free_convst_trigger;
  }
 }

 VAR_22->clk = FUNC_10(&VAR_16->dev, ((void*)0));
 if (FUNC_2(VAR_22->clk)) {
  VAR_23 = FUNC_3(VAR_22->clk);
  goto err_free_samplerate_trigger;
 }

 VAR_23 = FUNC_8(VAR_22->clk);
 if (VAR_23)
  goto err_free_samplerate_trigger;

 VAR_23 = FUNC_26(VAR_22->irq, VAR_22->ops->interrupt_handler, 0,
   FUNC_9(&VAR_16->dev), VAR_18);
 if (VAR_23)
  goto err_clk_disable_unprepare;

 VAR_23 = VAR_22->ops->setup(VAR_16, VAR_18, VAR_22->irq);
 if (VAR_23)
  goto err_free_irq;

 for (VAR_25 = 0; VAR_25 < 16; VAR_25++)
  FUNC_32(VAR_22, FUNC_5(VAR_25),
   &VAR_22->threshold[VAR_25]);

 VAR_23 = FUNC_34(VAR_22, VAR_8, VAR_21);
 if (VAR_23)
  goto err_free_irq;

 VAR_19 = 0;
 for (VAR_25 = 0; VAR_25 < VAR_18->num_channels; VAR_25++) {
  if (VAR_18->channels[VAR_25].scan_type.sign == 's')
   VAR_19 |= FUNC_0(VAR_18->channels[VAR_25].scan_index);
 }

 VAR_23 = FUNC_34(VAR_22, FUNC_4(0), VAR_19);
 if (VAR_23)
  goto err_free_irq;
 VAR_23 = FUNC_34(VAR_22, FUNC_4(1),
  VAR_19 >> 16);
 if (VAR_23)
  goto err_free_irq;


 VAR_23 = FUNC_33(VAR_22, VAR_9, VAR_6,
      VAR_6);
 if (VAR_23)
  goto err_free_irq;


 for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {




  if (VAR_25 % 8 < 4 || VAR_25 == 7)
   VAR_22->threshold[VAR_25] = 0xffff;
  else
   VAR_22->threshold[VAR_25] = 0;
  VAR_23 = FUNC_34(VAR_22, FUNC_5(VAR_25),
   VAR_22->threshold[VAR_25]);
  if (VAR_23)
   goto err_free_irq;
 }


 FUNC_31(VAR_18);

 VAR_23 = FUNC_14(VAR_18);
 if (VAR_23)
  goto err_free_irq;

 FUNC_25(VAR_16, VAR_18);

 return 0;

err_free_irq:
 FUNC_13(VAR_22->irq, VAR_18);
 FUNC_6(&VAR_22->zynq_unmask_work);
err_clk_disable_unprepare:
 FUNC_7(VAR_22->clk);
err_free_samplerate_trigger:
 if (VAR_22->ops->flags & VAR_7)
  FUNC_16(VAR_22->samplerate_trigger);
err_free_convst_trigger:
 if (VAR_22->ops->flags & VAR_7)
  FUNC_16(VAR_22->convst_trigger);
err_triggered_buffer_cleanup:
 if (VAR_22->ops->flags & VAR_7)
  FUNC_17(VAR_18);
err_device_free:
 FUNC_20(VAR_18->channels);

 return VAR_23;
}
