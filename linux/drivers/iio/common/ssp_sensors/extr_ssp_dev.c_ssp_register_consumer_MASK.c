
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssp_data {struct iio_dev** sensor_devs; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct iio_dev {TYPE_2__ dev; } ;
typedef enum ssp_sensor_type { ____Placeholder_ssp_sensor_type } ssp_sensor_type ;
struct TYPE_3__ {int parent; } ;


 struct ssp_data* FUNC_0 (int ) ;

void FUNC_1(struct iio_dev *VAR_0, enum ssp_sensor_type VAR_1)
{
 struct ssp_data *VAR_2 = FUNC_0(VAR_0->dev.parent->parent);

 VAR_2->sensor_devs[VAR_1] = VAR_0;
}
