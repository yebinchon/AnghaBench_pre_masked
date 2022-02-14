
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_settings {int dummy; } ;
struct st_sensor_data {struct st_sensor_settings* sensor_settings; } ;
struct spi_device {int dev; int modalias; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 struct st_sensor_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct st_sensor_settings* FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (struct iio_dev*,struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_3)
{
 const struct st_sensor_settings *VAR_4;
 struct st_sensor_data *VAR_5;
 struct iio_dev *VAR_6;
 int VAR_7;

 FUNC_5(&VAR_3->dev, VAR_2,
     VAR_3->modalias, sizeof(VAR_3->modalias));

 VAR_4 = FUNC_4(VAR_3->modalias);
 if (!VAR_4) {
  FUNC_0(&VAR_3->dev, "device name %s not recognized.\n",
   VAR_3->modalias);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(&VAR_3->dev, sizeof(*VAR_5));
 if (!VAR_6)
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_6);
 VAR_5->sensor_settings = (struct st_sensor_settings *)VAR_4;

 VAR_7 = FUNC_6(VAR_6, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
