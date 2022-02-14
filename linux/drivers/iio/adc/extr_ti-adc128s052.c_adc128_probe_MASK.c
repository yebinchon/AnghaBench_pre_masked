
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_8__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct adc128 {int lock; int reg; struct spi_device* spi; } ;
struct TYPE_11__ {int num_channels; int channels; } ;
struct TYPE_9__ {unsigned int driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 struct iio_dev* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct adc128* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_4)
{
 struct iio_dev *VAR_5;
 unsigned int VAR_6;
 struct adc128 *VAR_7;
 int VAR_8;

 if (FUNC_2(&VAR_4->dev))
  VAR_6 = (unsigned long) FUNC_3(&VAR_4->dev);
 else
  VAR_6 = FUNC_10(VAR_4)->driver_data;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_7));
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_5);
 VAR_7->spi = VAR_4;

 FUNC_11(VAR_4, VAR_5);

 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.of_node = VAR_4->dev.of_node;
 VAR_5->name = FUNC_10(VAR_4)->name;
 VAR_5->modes = VAR_1;
 VAR_5->info = &VAR_3;

 VAR_5->channels = VAR_2[VAR_6].channels;
 VAR_5->num_channels = VAR_2[VAR_6].num_channels;

 VAR_7->reg = FUNC_5(&VAR_4->dev, "vref");
 if (FUNC_0(VAR_7->reg))
  return FUNC_1(VAR_7->reg);

 VAR_8 = FUNC_9(VAR_7->reg);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_8(&VAR_7->lock);

 VAR_8 = FUNC_6(VAR_5);

 return VAR_8;
}
