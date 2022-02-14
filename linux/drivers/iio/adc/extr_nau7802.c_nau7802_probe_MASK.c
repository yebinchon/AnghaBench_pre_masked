
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long long u64 ;
typedef int u32 ;
struct nau7802_state {int vref_mv; unsigned long long* scale_avail; int data_lock; int lock; int sample_rate; struct i2c_client* client; int value_ok; } ;
struct TYPE_7__ {struct device_node* of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; unsigned long long* channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {TYPE_2__* driver; struct device_node* of_node; } ;
struct i2c_client {scalar_t__ irq; TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (unsigned long long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 struct iio_dev* FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,struct iio_dev*) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;
 int FUNC_12 (struct iio_dev*) ;
 struct nau7802_state* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 unsigned long long* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_17 (struct device_node*,char*,int*) ;
 int FUNC_18 (scalar_t__,int *,int ,int,int ,struct iio_dev*) ;
 int FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_19,
   const struct i2c_device_id *VAR_20)
{
 struct iio_dev *VAR_21;
 struct nau7802_state *VAR_22;
 struct device_node *VAR_23 = VAR_19->dev.of_node;
 int VAR_24, VAR_25;
 u8 VAR_26;
 u32 VAR_27 = 0;

 if (!VAR_19->dev.of_node) {
  FUNC_3(&VAR_19->dev, "No device tree node available.\n");
  return -VAR_0;
 }

 VAR_21 = FUNC_6(&VAR_19->dev, sizeof(*VAR_22));
 if (VAR_21 == ((void*)0))
  return -VAR_1;

 VAR_22 = FUNC_13(VAR_21);

 FUNC_9(VAR_19, VAR_21);

 VAR_21->dev.parent = &VAR_19->dev;
 VAR_21->dev.of_node = VAR_19->dev.of_node;
 VAR_21->name = FUNC_5(&VAR_19->dev);
 VAR_21->modes = VAR_2;
 VAR_21->info = &VAR_18;

 VAR_22->client = VAR_19;


 VAR_25 = FUNC_11(VAR_22->client, VAR_14,
      VAR_10);
 if (VAR_25 < 0)
  return VAR_25;


 VAR_25 = FUNC_11(VAR_22->client, VAR_14,
      VAR_8);
 if (VAR_25 < 0)
  return VAR_25;





 FUNC_19(210);
 VAR_25 = FUNC_10(VAR_22->client, VAR_14);
 if (VAR_25 < 0)
  return VAR_25;
 if (!(VAR_25 & VAR_9))
  return VAR_25;

 FUNC_17(VAR_23, "nuvoton,vldo", &VAR_27);
 VAR_22->vref_mv = VAR_27;

 VAR_26 = VAR_8 | VAR_7 |
  VAR_6;
 if (VAR_27 >= 2400)
  VAR_26 |= VAR_5;

 VAR_25 = FUNC_11(VAR_22->client, VAR_14, VAR_26);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_25 = FUNC_11(VAR_22->client, VAR_11, 0x30);
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_27 >= 2400) {
  VAR_26 = FUNC_1((4500 - VAR_27) / 300);
  VAR_25 = FUNC_11(VAR_22->client, VAR_12,
      VAR_26);
  if (VAR_25 < 0)
   return VAR_25;
 }


 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_22->scale_avail); VAR_24++)
  VAR_22->scale_avail[VAR_24] = (((u64)VAR_22->vref_mv) * 1000000000ULL)
        >> (23 + VAR_24);

 FUNC_14(&VAR_22->value_ok);






 if (VAR_19->irq) {
  VAR_25 = FUNC_18(VAR_19->irq,
    ((void*)0),
    VAR_17,
    VAR_4 | VAR_3,
    VAR_19->dev.driver->name,
    VAR_21);
  if (VAR_25) {
   FUNC_4(&VAR_19->dev,
    "Failed to allocate IRQ, using polling mode\n");
   VAR_19->irq = 0;
  } else
   FUNC_7(VAR_19->irq);
 }

 if (!VAR_19->irq) {




  VAR_22->sample_rate = VAR_15;
  VAR_25 = FUNC_11(VAR_22->client, VAR_13,
       FUNC_2(VAR_22->sample_rate));
  if (VAR_25)
   goto error_free_irq;
 }


 VAR_21->num_channels = FUNC_0(VAR_16);
 VAR_21->channels = VAR_16;

 FUNC_16(&VAR_22->lock);
 FUNC_16(&VAR_22->data_lock);

 VAR_25 = FUNC_12(VAR_21);
 if (VAR_25 < 0) {
  FUNC_3(&VAR_19->dev, "Couldn't register the device.\n");
  goto error_device_register;
 }

 return 0;

error_device_register:
 FUNC_15(&VAR_22->lock);
 FUNC_15(&VAR_22->data_lock);
error_free_irq:
 if (VAR_19->irq)
  FUNC_8(VAR_19->irq, VAR_21);

 return VAR_25;
}
