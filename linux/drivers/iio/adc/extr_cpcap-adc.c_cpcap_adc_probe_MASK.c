
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int parent; int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_10__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {int modes; int * info; int name; int num_channels; int channels; TYPE_1__ dev; } ;
struct cpcap_adc {scalar_t__ irq; int vendor; int reg; TYPE_2__* dev; int wq_data_avail; int lock; scalar_t__ ato; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cpcap_adc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 struct iio_dev* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int *,int ,int ,char*,struct iio_dev*) ;
 struct cpcap_adc* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct of_device_id* FUNC_13 (int ,TYPE_2__*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct platform_device*,char*) ;
 int FUNC_16 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_10)
{
 const struct of_device_id *VAR_11;
 struct cpcap_adc *VAR_12;
 struct iio_dev *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_13(FUNC_14(VAR_7),
    &VAR_10->dev);
 if (!VAR_11)
  return -VAR_0;

 if (!VAR_11->data) {
  FUNC_3(&VAR_10->dev, "no configuration data found\n");

  return -VAR_1;
 }

 VAR_13 = FUNC_7(&VAR_10->dev, sizeof(*VAR_12));
 if (!VAR_13) {
  FUNC_3(&VAR_10->dev, "failed to allocate iio device\n");

  return -VAR_2;
 }
 VAR_12 = FUNC_10(VAR_13);
 VAR_12->ato = VAR_11->data;
 VAR_12->dev = &VAR_10->dev;

 FUNC_12(&VAR_12->lock);
 FUNC_11(&VAR_12->wq_data_avail);

 VAR_13->modes = VAR_4 | VAR_3;
 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->dev.of_node = VAR_10->dev.of_node;
 VAR_13->channels = VAR_6;
 VAR_13->num_channels = FUNC_0(VAR_6);
 VAR_13->name = FUNC_6(&VAR_10->dev);
 VAR_13->info = &VAR_8;

 VAR_12->reg = FUNC_4(VAR_10->dev.parent, ((void*)0));
 if (!VAR_12->reg)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_12->dev, VAR_12->reg, &VAR_12->vendor);
 if (VAR_14)
  return VAR_14;

 FUNC_16(VAR_10, VAR_13);

 VAR_12->irq = FUNC_15(VAR_10, "adcdone");
 if (VAR_12->irq < 0)
  return -VAR_1;

 VAR_14 = FUNC_9(&VAR_10->dev, VAR_12->irq, ((void*)0),
       VAR_9,
       VAR_5,
       "cpcap-adc", VAR_13);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "could not get irq: %i\n",
   VAR_14);

  return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14)
  return VAR_14;

 FUNC_5(&VAR_10->dev, "CPCAP ADC device probed\n");

 return FUNC_8(&VAR_10->dev, VAR_13);
}
