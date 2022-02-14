
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_data {int num_hid_devices; TYPE_1__** hid_sensor_hubs; } ;
struct TYPE_2__ {int driver_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ishtp_cl_data *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_hid_devices; ++VAR_1) {
  if (VAR_0->hid_sensor_hubs[VAR_1]) {
   FUNC_1(VAR_0->hid_sensor_hubs[VAR_1]->driver_data);
   FUNC_0(VAR_0->hid_sensor_hubs[VAR_1]);
   VAR_0->hid_sensor_hubs[VAR_1] = ((void*)0);
  }
 }
}
