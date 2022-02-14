
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct ltc2632_state {int vref_mv; int * vref_reg; struct spi_device* spi_dev; } ;
struct ltc2632_chip_info {int vref_mv; int channels; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_3__* FUNC_3 (int *) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ltc2632_state* FUNC_7 (struct iio_dev*) ;
 int VAR_6 ;
 int FUNC_8 (struct spi_device*,int ,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_7)
{
 struct ltc2632_state *VAR_8;
 struct iio_dev *VAR_9;
 struct ltc2632_chip_info *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_9);

 FUNC_12(VAR_7, VAR_9);
 VAR_8->spi_dev = VAR_7;

 VAR_10 = (struct ltc2632_chip_info *)
   FUNC_11(VAR_7)->driver_data;

 VAR_8->vref_reg = FUNC_5(&VAR_7->dev, "vref");
 if (FUNC_1(VAR_8->vref_reg) == -VAR_0) {

  VAR_8->vref_reg = ((void*)0);
  VAR_8->vref_mv = VAR_10->vref_mv;

  VAR_11 = FUNC_8(VAR_7, VAR_4,
    0, 0, 0);
  if (VAR_11) {
   FUNC_2(&VAR_7->dev,
    "Set internal reference command failed, %d\n",
    VAR_11);
   return VAR_11;
  }
 } else if (FUNC_0(VAR_8->vref_reg)) {
  FUNC_2(&VAR_7->dev,
    "Error getting voltage reference regulator\n");
  return FUNC_1(VAR_8->vref_reg);
 } else {

  VAR_11 = FUNC_9(VAR_8->vref_reg);
  if (VAR_11) {
   FUNC_2(&VAR_7->dev,
    "enable reference regulator failed, %d\n",
    VAR_11);
   return VAR_11;
  }
  VAR_8->vref_mv = FUNC_10(VAR_8->vref_reg) / 1000;

  VAR_11 = FUNC_8(VAR_7, VAR_3,
    0, 0, 0);
  if (VAR_11) {
   FUNC_2(&VAR_7->dev,
    "Set external reference command failed, %d\n",
    VAR_11);
   return VAR_11;
  }
 }

 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->name = FUNC_3(&VAR_7->dev) ? FUNC_3(&VAR_7->dev)->name
       : FUNC_11(VAR_7)->name;
 VAR_9->info = &VAR_6;
 VAR_9->modes = VAR_2;
 VAR_9->channels = VAR_10->channels;
 VAR_9->num_channels = VAR_5;

 return FUNC_6(VAR_9);
}
