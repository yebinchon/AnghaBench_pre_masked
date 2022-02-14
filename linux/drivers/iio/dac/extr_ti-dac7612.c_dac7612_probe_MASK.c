
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; int name; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct dac7612 {int cache; struct spi_device* spi; int loaddacs; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct dac7612*,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*,int ) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct iio_dev*) ;
 struct dac7612* FUNC_7 (struct iio_dev*) ;
 TYPE_2__* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct dac7612 *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_6);
 VAR_7->loaddacs = FUNC_4(&VAR_5->dev, "ti,loaddacs",
       VAR_1);
 if (FUNC_1(VAR_7->loaddacs))
  return FUNC_2(VAR_7->loaddacs);
 VAR_7->spi = VAR_5;
 FUNC_9(VAR_5, VAR_6);
 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->info = &VAR_4;
 VAR_6->modes = VAR_2;
 VAR_6->channels = VAR_3;
 VAR_6->num_channels = FUNC_0(VAR_7->cache);
 VAR_6->name = FUNC_8(VAR_5)->name;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->cache); VAR_8++) {
  VAR_9 = FUNC_3(VAR_7, VAR_8, 0);
  if (VAR_9)
   return VAR_9;
 }

 return FUNC_6(&VAR_5->dev, VAR_6);
}
