
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct spi_device {TYPE_1__ dev; } ;
struct max1111_data {int drvdata_lock; int hwmon_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct max1111_data* FUNC_2 (struct spi_device*) ;
 int FUNC_3 (int *,int *) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_3)
{
 struct max1111_data *VAR_4 = FUNC_2(VAR_3);




 FUNC_0(VAR_4->hwmon_dev);
 FUNC_3(&VAR_3->dev.kobj, &VAR_0);
 FUNC_3(&VAR_3->dev.kobj, &VAR_1);
 FUNC_1(&VAR_4->drvdata_lock);
 return 0;
}
