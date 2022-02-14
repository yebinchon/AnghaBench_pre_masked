
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
struct TYPE_2__ {int index; int report_id; int unit_expo; int size; } ;
struct hid_sensor_common {scalar_t__ raw_hystersis; TYPE_1__ sensitivity; int hsdev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int ,int,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ,int,scalar_t__*) ;

int FUNC_3(struct hid_sensor_common *VAR_1,
     int VAR_2, int VAR_3)
{
 s32 VAR_4;
 int VAR_5;

 if (VAR_2 < 0 || VAR_3 < 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1->sensitivity.size,
    VAR_1->sensitivity.unit_expo,
    VAR_2, VAR_3);
 VAR_5 = FUNC_2(VAR_1->hsdev, VAR_1->sensitivity.report_id,
         VAR_1->sensitivity.index, sizeof(VAR_4),
         &VAR_4);
 if (VAR_5 < 0 || VAR_4 < 0)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1->hsdev,
         VAR_1->sensitivity.report_id,
         VAR_1->sensitivity.index, sizeof(VAR_4),
         &VAR_4);
 if (VAR_5 < 0 || VAR_4 < 0)
  return -VAR_0;

 VAR_1->raw_hystersis = VAR_4;

 return 0;
}
