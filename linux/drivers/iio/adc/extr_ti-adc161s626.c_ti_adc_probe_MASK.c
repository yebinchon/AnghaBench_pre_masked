
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ti_adc_data {int shift; int read_size; int ref; struct spi_device* spi; } ;
struct TYPE_7__ {int of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_5__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {void* num_channels; void* channels; int modes; int name; TYPE_1__ dev; int * info; } ;
struct TYPE_6__ {int driver_data; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;


 int VAR_2 ;
 struct iio_dev* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ti_adc_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_7)
{
 struct iio_dev *VAR_8;
 struct ti_adc_data *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(&VAR_7->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_8->info = &VAR_5;
 VAR_8->dev.parent = &VAR_7->dev;
 VAR_8->dev.of_node = VAR_7->dev.of_node;
 VAR_8->name = VAR_2;
 VAR_8->modes = VAR_1;
 FUNC_11(VAR_7, VAR_8);

 VAR_9 = FUNC_5(VAR_8);
 VAR_9->spi = VAR_7;

 switch (FUNC_10(VAR_7)->driver_data) {
 case 129:
  VAR_8->channels = VAR_3;
  VAR_8->num_channels = FUNC_0(VAR_3);
  VAR_9->shift = 0;
  VAR_9->read_size = 2;
  break;
 case 128:
  VAR_8->channels = VAR_4;
  VAR_8->num_channels = FUNC_0(VAR_4);
  VAR_9->shift = 6;
  VAR_9->read_size = 3;
  break;
 }

 VAR_9->ref = FUNC_3(&VAR_7->dev, "vdda");
 if (!FUNC_1(VAR_9->ref)) {
  VAR_10 = FUNC_9(VAR_9->ref);
  if (VAR_10 < 0)
   return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_8, ((void*)0),
      VAR_6, ((void*)0));
 if (VAR_10)
  goto error_regulator_disable;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10)
  goto error_unreg_buffer;

 return 0;

error_unreg_buffer:
 FUNC_6(VAR_8);

error_regulator_disable:
 FUNC_8(VAR_9->ref);

 return VAR_10;
}
