
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct spi_device_id {int name; } ;
struct TYPE_5__ {int of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct max31856_data {int thermocouple_type; struct spi_device* spi; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct iio_dev* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,struct iio_dev*) ;
 struct max31856_data* FUNC_5 (struct iio_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct max31856_data*) ;
 int FUNC_7 (int ,char*,int*) ;
 struct spi_device_id* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 const struct spi_device_id *VAR_6 = FUNC_8(VAR_5);
 struct iio_dev *VAR_7;
 struct max31856_data *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_7);
 VAR_8->spi = VAR_5;

 FUNC_9(VAR_5, VAR_7);

 VAR_7->info = &VAR_4;
 VAR_7->name = VAR_6->name;
 VAR_7->modes = VAR_2;
 VAR_7->channels = VAR_3;
 VAR_7->num_channels = FUNC_0(VAR_3);

 VAR_9 = FUNC_7(VAR_5->dev.of_node, "thermocouple-type",
       &VAR_8->thermocouple_type);

 if (VAR_9) {
  FUNC_2(&VAR_5->dev,
    "Could not read thermocouple type DT property, configuring as a K-Type\n");
  VAR_8->thermocouple_type = 132;
 }





 switch (VAR_8->thermocouple_type) {
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_1(&VAR_5->dev,
   "error: thermocouple-type %u not supported by max31856\n"
   , VAR_8->thermocouple_type);
  return -VAR_0;
 }

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9) {
  FUNC_1(&VAR_5->dev, "error: Failed to configure max31856\n");
  return VAR_9;
 }

 return FUNC_4(&VAR_5->dev, VAR_7);
}
