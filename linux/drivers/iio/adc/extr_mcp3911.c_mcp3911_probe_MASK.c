
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct mcp3911 {int * vref; int * clki; int lock; struct spi_device* spi; } ;
struct TYPE_7__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int * FUNC_6 (TYPE_3__*,int *) ;
 struct iio_dev* FUNC_7 (TYPE_3__*,int) ;
 int * FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct mcp3911* FUNC_10 (struct iio_dev*) ;
 int VAR_4 ;
 int FUNC_11 (struct mcp3911*,int ) ;
 int VAR_5 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_2__* FUNC_15 (struct spi_device*) ;
 int FUNC_16 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_6)
{
 struct iio_dev *VAR_7;
 struct mcp3911 *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_10(VAR_7);
 VAR_8->spi = VAR_6;

 VAR_8->vref = FUNC_8(&VAR_8->spi->dev, "vref");
 if (FUNC_1(VAR_8->vref)) {
  if (FUNC_2(VAR_8->vref) == -VAR_0) {
   VAR_8->vref = ((void*)0);
  } else {
   FUNC_5(&VAR_8->spi->dev,
    "failed to get regulator (%ld)\n",
    FUNC_2(VAR_8->vref));
   return FUNC_2(VAR_8->vref);
  }

 } else {
  VAR_9 = FUNC_14(VAR_8->vref);
  if (VAR_9)
   return VAR_9;
 }

 VAR_8->clki = FUNC_6(&VAR_8->spi->dev, ((void*)0));
 if (FUNC_1(VAR_8->clki)) {
  if (FUNC_2(VAR_8->clki) == -VAR_1) {
   VAR_8->clki = ((void*)0);
  } else {
   FUNC_5(&VAR_8->spi->dev,
    "failed to get adc clk (%ld)\n",
    FUNC_2(VAR_8->clki));
   VAR_9 = FUNC_2(VAR_8->clki);
   goto reg_disable;
  }
 } else {
  VAR_9 = FUNC_4(VAR_8->clki);
  if (VAR_9 < 0) {
   FUNC_5(&VAR_8->spi->dev,
    "Failed to enable clki: %d\n", VAR_9);
   goto reg_disable;
  }
 }

 VAR_9 = FUNC_11(VAR_8, VAR_6->dev.of_node);
 if (VAR_9)
  goto clk_disable;

 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->dev.of_node = VAR_6->dev.of_node;
 VAR_7->name = FUNC_15(VAR_6)->name;
 VAR_7->modes = VAR_3;
 VAR_7->info = &VAR_5;
 FUNC_16(VAR_6, VAR_7);

 VAR_7->channels = VAR_4;
 VAR_7->num_channels = FUNC_0(VAR_4);

 FUNC_12(&VAR_8->lock);

 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9)
  goto clk_disable;

 return VAR_9;

clk_disable:
 FUNC_3(VAR_8->clki);
reg_disable:
 if (VAR_8->vref)
  FUNC_13(VAR_8->vref);

 return VAR_9;
}
