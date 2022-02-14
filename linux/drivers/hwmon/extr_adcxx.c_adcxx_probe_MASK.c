
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct adcxx {int reference; int channels; int lock; int hwmon_dev; } ;
struct TYPE_4__ {int dev_attr; } ;
struct TYPE_3__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 struct adcxx* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct adcxx*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_3)
{
 int VAR_4 = FUNC_10(VAR_3)->driver_data;
 struct adcxx *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_5->reference = 3300;
 VAR_5->channels = VAR_4;
 FUNC_7(&VAR_5->lock);

 FUNC_8(&VAR_5->lock);

 FUNC_11(VAR_3, VAR_5);

 for (VAR_7 = 0; VAR_7 < 3 + VAR_5->channels; VAR_7++) {
  VAR_6 = FUNC_3(&VAR_3->dev, &VAR_2[VAR_7].dev_attr);
  if (VAR_6) {
   FUNC_2(&VAR_3->dev, "device_create_file failed.\n");
   goto out_err;
  }
 }

 VAR_5->hwmon_dev = FUNC_6(&VAR_3->dev);
 if (FUNC_0(VAR_5->hwmon_dev)) {
  FUNC_2(&VAR_3->dev, "hwmon_device_register failed.\n");
  VAR_6 = FUNC_1(VAR_5->hwmon_dev);
  goto out_err;
 }

 FUNC_9(&VAR_5->lock);
 return 0;

out_err:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_4(&VAR_3->dev, &VAR_2[VAR_7].dev_attr);

 FUNC_9(&VAR_5->lock);
 return VAR_6;
}
