
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssp_sensor_data {int buffer; int type; } ;
struct ssp_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct iio_dev {TYPE_2__ dev; } ;
struct TYPE_3__ {int parent; } ;


 struct ssp_data* FUNC_0 (int ) ;
 struct ssp_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ssp_data*,int ) ;

int FUNC_4(struct iio_dev *VAR_0)
{
 int VAR_1;
 struct ssp_sensor_data *VAR_2 = FUNC_1(VAR_0);
 struct ssp_data *VAR_3 = FUNC_0(VAR_0->dev.parent->parent);

 VAR_1 = FUNC_3(VAR_3, VAR_2->type);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_2(VAR_2->buffer);

 return VAR_1;
}
