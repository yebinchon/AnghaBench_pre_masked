
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tiadc_device {TYPE_2__* mfd_tscadc; int channels; int fifo1_lock; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_6__ {TYPE_3__* parent; } ;
struct iio_dev {int * info; int modes; int name; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 struct iio_dev* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct tiadc_device* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct iio_dev*) ;
 TYPE_2__* FUNC_8 (struct platform_device*) ;
 int VAR_7 ;
 int FUNC_9 (struct iio_dev*,int ) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*,int *,int *,int ,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct platform_device*,struct tiadc_device*) ;
 int FUNC_14 (struct platform_device*,struct tiadc_device*) ;
 int FUNC_15 (struct iio_dev*) ;
 int VAR_10 ;
 int FUNC_16 (struct tiadc_device*,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_11)
{
 struct iio_dev *VAR_12;
 struct tiadc_device *VAR_13;
 struct device_node *VAR_14 = VAR_11->dev.of_node;
 int VAR_15;

 if (!VAR_14) {
  FUNC_0(&VAR_11->dev, "Could not find valid DT data.\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_2(&VAR_11->dev, sizeof(*VAR_13));
 if (VAR_12 == ((void*)0)) {
  FUNC_0(&VAR_11->dev, "failed to allocate iio device\n");
  return -VAR_1;
 }
 VAR_13 = FUNC_5(VAR_12);

 VAR_13->mfd_tscadc = FUNC_8(VAR_11);
 FUNC_13(VAR_11, VAR_13);

 VAR_12->dev.parent = &VAR_11->dev;
 VAR_12->name = FUNC_1(&VAR_11->dev);
 VAR_12->modes = VAR_4;
 VAR_12->info = &VAR_8;

 FUNC_15(VAR_12);
 FUNC_16(VAR_13, VAR_6, VAR_3);
 FUNC_6(&VAR_13->fifo1_lock);

 VAR_15 = FUNC_9(VAR_12, VAR_13->channels);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_12(VAR_12,
  &VAR_10,
  &VAR_9,
  VAR_13->mfd_tscadc->irq,
  VAR_5,
  &VAR_7);

 if (VAR_15)
  goto err_free_channels;

 VAR_15 = FUNC_3(VAR_12);
 if (VAR_15)
  goto err_buffer_unregister;

 FUNC_7(VAR_11, VAR_12);

 VAR_15 = FUNC_14(VAR_11, VAR_13);
 if (VAR_15 && VAR_15 == -VAR_2)
  goto err_dma;

 return 0;

err_dma:
 FUNC_4(VAR_12);
err_buffer_unregister:
 FUNC_11(VAR_12);
err_free_channels:
 FUNC_10(VAR_12);
 return VAR_15;
}
