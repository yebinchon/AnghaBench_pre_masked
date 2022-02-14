
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int modes; int * info; int name; TYPE_1__ dev; void* num_channels; void* channels; } ;
struct ad8366_state {int type; int reg; int * info; int reset_gpio; struct spi_device* spi; int lock; } ;
struct TYPE_4__ {int driver_data; int name; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 void* VAR_7 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct ad8366_state* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (struct spi_device*) ;
 int FUNC_13 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_8)
{
 struct iio_dev *VAR_9;
 struct ad8366_state *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(&VAR_8->dev, sizeof(*VAR_10));
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_8(VAR_9);

 VAR_10->reg = FUNC_6(&VAR_8->dev, "vcc");
 if (!FUNC_1(VAR_10->reg)) {
  VAR_11 = FUNC_11(VAR_10->reg);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_13(VAR_8, VAR_9);
 FUNC_9(&VAR_10->lock);
 VAR_10->spi = VAR_8;
 VAR_10->type = FUNC_12(VAR_8)->driver_data;

 switch (VAR_10->type) {
 case 130:
  VAR_9->channels = VAR_4;
  VAR_9->num_channels = FUNC_0(VAR_4);
  break;
 case 129:
 case 128:
  VAR_10->reset_gpio = FUNC_4(&VAR_8->dev, "reset",
   VAR_2);
  VAR_9->channels = VAR_7;
  VAR_9->num_channels = FUNC_0(VAR_7);
  break;
 default:
  FUNC_3(&VAR_8->dev, "Invalid device ID\n");
  VAR_11 = -VAR_0;
  goto error_disable_reg;
 }

 VAR_10->info = &VAR_6[VAR_10->type];
 VAR_9->dev.parent = &VAR_8->dev;
 VAR_9->name = FUNC_12(VAR_8)->name;
 VAR_9->info = &VAR_5;
 VAR_9->modes = VAR_3;

 VAR_11 = FUNC_2(VAR_9, 0 , 0);
 if (VAR_11 < 0)
  goto error_disable_reg;

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 if (!FUNC_1(VAR_10->reg))
  FUNC_10(VAR_10->reg);

 return VAR_11;
}
