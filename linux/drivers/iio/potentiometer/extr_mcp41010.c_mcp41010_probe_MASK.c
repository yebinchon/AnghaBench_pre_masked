
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct mcp41010_data {TYPE_3__* cfg; int lock; struct spi_device* spi; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct TYPE_7__ {int name; int wipers; } ;
struct TYPE_6__ {size_t driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct mcp41010_data* FUNC_3 (struct iio_dev*) ;
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
 struct mcp41010_data *VAR_7;
 struct iio_dev *VAR_8;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_8);
 FUNC_7(VAR_4, VAR_8);
 VAR_7->spi = VAR_4;
 VAR_7->cfg = FUNC_5(&VAR_4->dev);
 if (!VAR_7->cfg)
  VAR_7->cfg = &VAR_1[FUNC_6(VAR_4)->driver_data];

 FUNC_4(&VAR_7->lock);

 VAR_8->dev.parent = VAR_6;
 VAR_8->info = &VAR_3;
 VAR_8->channels = VAR_2;
 VAR_8->num_channels = VAR_7->cfg->wipers;
 VAR_8->name = VAR_7->cfg->name;

 VAR_5 = FUNC_2(VAR_6, VAR_8);
 if (VAR_5)
  FUNC_0(&VAR_4->dev, "Unable to register %s\n", VAR_8->name);

 return VAR_5;
}
