
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sensor_id; } ;
struct sensor_data {TYPE_1__ info; } ;
struct scpi_thermal_zone {size_t sensor_id; struct scpi_sensors* scpi_sensors; } ;
struct scpi_sensors {struct sensor_data* data; struct scpi_ops* scpi_ops; } ;
struct scpi_ops {int (* sensor_get_value ) (int ,int*) ;} ;


 int FUNC_0 (int*,struct sensor_data*) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int *VAR_1)
{
 struct scpi_thermal_zone *VAR_2 = VAR_0;
 struct scpi_sensors *VAR_3 = VAR_2->scpi_sensors;
 struct scpi_ops *VAR_4 = VAR_3->scpi_ops;
 struct sensor_data *VAR_5 = &VAR_3->data[VAR_2->sensor_id];
 u64 VAR_6;
 int VAR_7;

 VAR_7 = VAR_4->sensor_get_value(VAR_5->info.sensor_id, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_0(&VAR_6, VAR_5);

 *VAR_1 = VAR_6;
 return 0;
}
