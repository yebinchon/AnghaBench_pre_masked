
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hid_sensor_hub_device {int hdev; } ;
struct hid_report {int maxfield; struct hid_field** field; } ;
struct hid_field {int maxusage; TYPE_1__* usage; } ;
struct TYPE_2__ {scalar_t__ hid; int usage_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hid_report* FUNC_0 (scalar_t__,int ,int ) ;

int FUNC_1(struct hid_sensor_hub_device *VAR_2,
    u32 VAR_3, int VAR_4, u32 VAR_5)
{
 struct hid_report *VAR_6;
 struct hid_field *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_3, VAR_2->hdev, VAR_1);
 if (!VAR_6 || (VAR_4 >= VAR_6->maxfield))
  goto done_proc;

 VAR_7 = VAR_6->field[VAR_4];
 for (VAR_8 = 0; VAR_8 < VAR_7->maxusage; ++VAR_8) {
  if (VAR_7->usage[VAR_8].hid == VAR_5)
   return VAR_7->usage[VAR_8].usage_index;
 }

done_proc:
 return -VAR_0;
}
