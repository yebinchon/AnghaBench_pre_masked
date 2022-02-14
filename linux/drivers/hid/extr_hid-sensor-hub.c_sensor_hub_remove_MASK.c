
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sensor_hub_data {int hid_sensor_client_cnt; int mutex; int lock; TYPE_1__* hid_sensor_hub_client_devs; } ;
struct TYPE_4__ {int ready; scalar_t__ status; } ;
struct hid_sensor_hub_device {TYPE_2__ pending; } ;
struct hid_device {int dev; } ;
struct TYPE_3__ {struct hid_sensor_hub_device* platform_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct sensor_hub_data* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct hid_device *VAR_0)
{
 struct sensor_hub_data *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(VAR_0, " hardware removed\n");
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
 FUNC_7(&VAR_1->lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->hid_sensor_client_cnt; ++VAR_3) {
  struct hid_sensor_hub_device *VAR_4 =
   VAR_1->hid_sensor_hub_client_devs[VAR_3].platform_data;
  if (VAR_4->pending.status)
   FUNC_0(&VAR_4->pending.ready);
 }
 FUNC_8(&VAR_1->lock, VAR_2);
 FUNC_5(&VAR_0->dev);
 FUNC_6(&VAR_1->mutex);
}
