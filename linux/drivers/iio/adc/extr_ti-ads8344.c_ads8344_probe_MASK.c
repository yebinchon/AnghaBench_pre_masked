
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct TYPE_5__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct ads8344 {int reg; int lock; struct spi_device* spi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 struct iio_dev* FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ads8344* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_4)
{
 struct iio_dev *VAR_5;
 struct ads8344 *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6));
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_5);
 VAR_6->spi = VAR_4;
 FUNC_8(&VAR_6->lock);

 VAR_5->name = FUNC_3(&VAR_4->dev);
 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.of_node = VAR_4->dev.of_node;
 VAR_5->info = &VAR_3;
 VAR_5->modes = VAR_1;
 VAR_5->channels = VAR_2;
 VAR_5->num_channels = FUNC_0(VAR_2);

 VAR_6->reg = FUNC_5(&VAR_4->dev, "vref");
 if (FUNC_1(VAR_6->reg))
  return FUNC_2(VAR_6->reg);

 VAR_7 = FUNC_10(VAR_6->reg);
 if (VAR_7)
  return VAR_7;

 FUNC_11(VAR_4, VAR_5);

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7) {
  FUNC_9(VAR_6->reg);
  return VAR_7;
 }

 return 0;
}
