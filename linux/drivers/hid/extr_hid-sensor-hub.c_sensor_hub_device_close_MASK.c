
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_hub_data {int mutex; int ref_cnt; } ;
struct hid_sensor_hub_device {int hdev; } ;


 struct sensor_hub_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hid_sensor_hub_device *VAR_0)
{
 struct sensor_hub_data *VAR_1 = FUNC_0(VAR_0->hdev);

 FUNC_2(&VAR_1->mutex);
 VAR_1->ref_cnt--;
 if (!VAR_1->ref_cnt)
  FUNC_1(VAR_0->hdev);
 FUNC_3(&VAR_1->mutex);
}
