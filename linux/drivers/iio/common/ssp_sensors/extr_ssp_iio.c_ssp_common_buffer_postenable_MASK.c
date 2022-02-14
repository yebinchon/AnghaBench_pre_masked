
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssp_sensor_data {int type; int buffer; } ;
struct ssp_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct iio_dev {int scan_bytes; TYPE_2__ dev; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ssp_data* FUNC_0 (int ) ;
 struct ssp_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct ssp_data*,int ,int ) ;
 int FUNC_4 (struct ssp_data*,int ) ;

int FUNC_5(struct iio_dev *VAR_3)
{
 struct ssp_sensor_data *VAR_4 = FUNC_1(VAR_3);
 struct ssp_data *VAR_5 = FUNC_0(VAR_3->dev.parent->parent);




 VAR_4->buffer = FUNC_2(VAR_3->scan_bytes, VAR_2 | VAR_1);
 if (!VAR_4->buffer)
  return -VAR_0;

 return FUNC_3(VAR_5, VAR_4->type,
     FUNC_4(VAR_5, VAR_4->type));
}
