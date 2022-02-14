
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct sensor_hub_data {int mutex; } ;
struct hid_sensor_hub_device {int hdev; } ;
struct hid_report {size_t maxfield; TYPE_1__** field; } ;
typedef int __s32 ;
struct TYPE_2__ {int report_count; int report_size; scalar_t__ value; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sensor_hub_data* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct hid_report*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct hid_report* FUNC_9 (size_t,int ,int ) ;

int FUNC_10(struct hid_sensor_hub_device *VAR_3, u32 VAR_4,
      u32 VAR_5, int VAR_6, void *VAR_7)
{
 struct hid_report *VAR_8;
 struct sensor_hub_data *VAR_9 = FUNC_1(VAR_3->hdev);
 int VAR_10;
 int VAR_11 = 0;
 u8 *VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 FUNC_5(VAR_7, 0, VAR_6);

 FUNC_7(&VAR_9->mutex);
 VAR_8 = FUNC_9(VAR_4, VAR_3->hdev, VAR_1);
 if (!VAR_8 || (VAR_5 >= VAR_8->maxfield) ||
     VAR_8->field[VAR_5]->report_count < 1) {
  VAR_11 = -VAR_0;
  goto done_proc;
 }
 FUNC_2(VAR_3->hdev, VAR_8, VAR_2);
 FUNC_3(VAR_3->hdev);


 VAR_10 = FUNC_0(VAR_8->field[VAR_5]->report_size,
       8) *
       VAR_8->field[VAR_5]->report_count;
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto done_proc;
 }
 VAR_11 = FUNC_6(VAR_10, VAR_6);

 VAR_12 = (u8 *)VAR_8->field[VAR_5]->value;
 for (VAR_14 = 0; VAR_14 < VAR_8->field[VAR_5]->report_count; ++VAR_14) {
  if (VAR_13 >= VAR_11)
   break;

  FUNC_4(&((u8 *)VAR_7)[VAR_13], VAR_12,
         VAR_8->field[VAR_5]->report_size / 8);
  VAR_12 += sizeof(__s32);
  VAR_13 += (VAR_8->field[VAR_5]->report_size / 8);
 }

done_proc:
 FUNC_8(&VAR_9->mutex);

 return VAR_11;
}
