
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {scalar_t__ irq; int dev; } ;
struct sca3000_state {TYPE_3__* info; int lock; struct spi_device* us; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int * setup_ops; int modes; void* num_channels; void* channels; int * info; int name; TYPE_1__ dev; } ;
struct TYPE_6__ {scalar_t__ temp_output; } ;
struct TYPE_5__ {size_t driver_data; int name; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__,struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct sca3000_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int *,int *,int,char*,struct iio_dev*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_7 (struct sca3000_state*) ;
 int FUNC_8 (struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct iio_dev*) ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_2__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_10)
{
 int VAR_11;
 struct sca3000_state *VAR_12;
 struct iio_dev *VAR_13;

 VAR_13 = FUNC_1(&VAR_10->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_13);
 FUNC_11(VAR_10, VAR_13);
 VAR_12->us = VAR_10;
 FUNC_5(&VAR_12->lock);
 VAR_12->info = &VAR_9[FUNC_10(VAR_10)
           ->driver_data];

 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->name = FUNC_10(VAR_10)->name;
 VAR_13->info = &VAR_7;
 if (VAR_12->info->temp_output) {
  VAR_13->channels = VAR_5;
  VAR_13->num_channels =
   FUNC_0(VAR_5);
 } else {
  VAR_13->channels = VAR_4;
  VAR_13->num_channels = FUNC_0(VAR_4);
 }
 VAR_13->modes = VAR_1;

 VAR_11 = FUNC_8(VAR_13);
 if (VAR_11)
  return VAR_11;

 if (VAR_10->irq) {
  VAR_11 = FUNC_6(VAR_10->irq,
        ((void*)0),
        &VAR_6,
        VAR_3 | VAR_2,
        "sca3000",
        VAR_13);
  if (VAR_11)
   return VAR_11;
 }
 VAR_13->setup_ops = &VAR_8;
 VAR_11 = FUNC_7(VAR_12);
 if (VAR_11)
  goto error_free_irq;

 VAR_11 = FUNC_9(VAR_13);
 if (VAR_11)
  goto error_free_irq;

 return FUNC_3(VAR_13);

error_free_irq:
 if (VAR_10->irq)
  FUNC_2(VAR_10->irq, VAR_13);

 return VAR_11;
}
