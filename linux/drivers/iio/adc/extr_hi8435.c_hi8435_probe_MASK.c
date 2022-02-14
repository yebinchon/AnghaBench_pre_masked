
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_7__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct hi8435_priv {int* threshold_lo; int* threshold_hi; int event_scan_mask; int lock; struct spi_device* spi; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (TYPE_3__*,int ,struct iio_dev*) ;
 struct gpio_desc* FUNC_3 (TYPE_3__*,int *,int ) ;
 struct iio_dev* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_6 (struct gpio_desc*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct hi8435_priv*,int ,int ) ;
 int FUNC_8 (struct hi8435_priv*,int ,int) ;
 struct hi8435_priv* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,int *,int ) ;
 int FUNC_11 (int *) ;
 TYPE_2__* FUNC_12 (struct spi_device*) ;
 int FUNC_13 (struct spi_device*,struct iio_dev*) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_11)
{
 struct iio_dev *VAR_12;
 struct hi8435_priv *VAR_13;
 struct gpio_desc *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_4(&VAR_11->dev, sizeof(*VAR_13));
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_9(VAR_12);
 VAR_13->spi = VAR_11;

 VAR_14 = FUNC_3(&VAR_11->dev, ((void*)0), VAR_1);
 if (FUNC_1(VAR_14)) {

  FUNC_7(VAR_13, VAR_2, VAR_3);
  FUNC_7(VAR_13, VAR_2, 0);
 } else {
  FUNC_14(5);
  FUNC_6(VAR_14, 1);
 }

 FUNC_13(VAR_11, VAR_12);
 FUNC_11(&VAR_13->lock);

 VAR_12->dev.parent = &VAR_11->dev;
 VAR_12->dev.of_node = VAR_11->dev.of_node;
 VAR_12->name = FUNC_12(VAR_11)->name;
 VAR_12->modes = VAR_6;
 VAR_12->info = &VAR_8;
 VAR_12->channels = VAR_7;
 VAR_12->num_channels = FUNC_0(VAR_7);


 VAR_13->event_scan_mask = ~(0);
 VAR_13->threshold_lo[0] = VAR_13->threshold_lo[1] = 2;
 VAR_13->threshold_hi[0] = VAR_13->threshold_hi[1] = 4;
 FUNC_8(VAR_13, VAR_4, 0x206);
 FUNC_8(VAR_13, VAR_5, 0x206);

 VAR_15 = FUNC_10(VAR_12, ((void*)0), VAR_9);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_2(&VAR_11->dev,
           VAR_10,
           VAR_12);
 if (VAR_15)
  return VAR_15;

 return FUNC_5(&VAR_11->dev, VAR_12);
}
