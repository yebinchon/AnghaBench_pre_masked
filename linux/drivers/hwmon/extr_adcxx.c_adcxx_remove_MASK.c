
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct adcxx {int channels; int lock; int hwmon_dev; } ;
struct TYPE_2__ {int dev_attr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct adcxx* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1)
{
 struct adcxx *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_2->hwmon_dev);
 for (VAR_3 = 0; VAR_3 < 3 + VAR_2->channels; VAR_3++)
  FUNC_0(&VAR_1->dev, &VAR_0[VAR_3].dev_attr);

 FUNC_3(&VAR_2->lock);

 return 0;
}
