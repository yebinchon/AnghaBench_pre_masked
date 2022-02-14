
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct mcp4131_data {TYPE_3__* cfg; int lock; struct spi_device* spi; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct TYPE_7__ {int wipers; } ;
struct TYPE_6__ {unsigned long driver_data; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct mcp4131_data* FUNC_3 (struct iio_dev*) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (struct device*) ;
 TYPE_2__* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = &VAR_4->dev;
 unsigned long VAR_7;
 struct mcp4131_data *VAR_8;
 struct iio_dev *VAR_9;

 VAR_9 = FUNC_1(VAR_6, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_9);
 FUNC_7(VAR_4, VAR_9);
 VAR_8->spi = VAR_4;
 VAR_8->cfg = FUNC_5(&VAR_4->dev);
 if (!VAR_8->cfg) {
  VAR_7 = FUNC_6(VAR_4)->driver_data;
  VAR_8->cfg = &VAR_1[VAR_7];
 }

 FUNC_4(&VAR_8->lock);

 VAR_9->dev.parent = VAR_6;
 VAR_9->info = &VAR_3;
 VAR_9->channels = VAR_2;
 VAR_9->num_channels = VAR_8->cfg->wipers;
 VAR_9->name = FUNC_6(VAR_4)->name;

 VAR_5 = FUNC_2(VAR_6, VAR_9);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "Unable to register %s\n", VAR_9->name);
  return VAR_5;
 }

 return 0;
}
