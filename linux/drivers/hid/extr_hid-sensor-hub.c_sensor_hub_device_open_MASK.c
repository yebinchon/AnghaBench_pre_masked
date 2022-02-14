
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_hub_data {int mutex; int ref_cnt; } ;
struct hid_sensor_hub_device {int hdev; } ;


 int FUNC_0 (int ,char*) ;
 struct sensor_hub_data* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hid_sensor_hub_device *VAR_0)
{
 int VAR_1 = 0;
 struct sensor_hub_data *VAR_2 = FUNC_1(VAR_0->hdev);

 FUNC_3(&VAR_2->mutex);
 if (!VAR_2->ref_cnt) {
  VAR_1 = FUNC_2(VAR_0->hdev);
  if (VAR_1) {
   FUNC_0(VAR_0->hdev, "failed to open hid device\n");
   FUNC_4(&VAR_2->mutex);
   return VAR_1;
  }
 }
 VAR_2->ref_cnt++;
 FUNC_4(&VAR_2->mutex);

 return VAR_1;
}
