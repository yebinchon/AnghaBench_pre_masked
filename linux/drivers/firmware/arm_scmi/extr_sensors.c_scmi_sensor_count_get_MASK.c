
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensors_info {int num_sensors; } ;
struct scmi_handle {struct sensors_info* sensor_priv; } ;



__attribute__((used)) static int FUNC_0(const struct scmi_handle *VAR_0)
{
 struct sensors_info *VAR_1 = VAR_0->sensor_priv;

 return VAR_1->num_sensors;
}
