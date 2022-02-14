
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_sensor_data {void* vdd; void* vdd_io; } ;
struct TYPE_3__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 void* FUNC_4 (int ,char*) ;
 struct st_sensor_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

int FUNC_8(struct iio_dev *VAR_0)
{
 struct st_sensor_data *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;


 VAR_1->vdd = FUNC_4(VAR_0->dev.parent, "vdd");
 if (FUNC_0(VAR_1->vdd)) {
  FUNC_2(&VAR_0->dev, "unable to get Vdd supply\n");
  return FUNC_1(VAR_1->vdd);
 }
 VAR_2 = FUNC_7(VAR_1->vdd);
 if (VAR_2 != 0) {
  FUNC_3(&VAR_0->dev,
    "Failed to enable specified Vdd supply\n");
  return VAR_2;
 }

 VAR_1->vdd_io = FUNC_4(VAR_0->dev.parent, "vddio");
 if (FUNC_0(VAR_1->vdd_io)) {
  FUNC_2(&VAR_0->dev, "unable to get Vdd_IO supply\n");
  VAR_2 = FUNC_1(VAR_1->vdd_io);
  goto st_sensors_disable_vdd;
 }
 VAR_2 = FUNC_7(VAR_1->vdd_io);
 if (VAR_2 != 0) {
  FUNC_3(&VAR_0->dev,
    "Failed to enable specified Vdd_IO supply\n");
  goto st_sensors_disable_vdd;
 }

 return 0;

st_sensors_disable_vdd:
 FUNC_6(VAR_1->vdd);
 return VAR_2;
}
