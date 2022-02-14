
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
struct TYPE_2__ {scalar_t__ units; int index; int report_id; } ;
struct hid_sensor_common {TYPE_1__ poll; int hsdev; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int*) ;

s32 FUNC_1(struct hid_sensor_common *VAR_2)
{
 s32 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->hsdev,
         VAR_2->poll.report_id,
         VAR_2->poll.index, sizeof(VAR_3), &VAR_3);

 if (VAR_4 < 0 || VAR_3 < 0) {
  return -VAR_0;
 } else {
  if (VAR_2->poll.units == VAR_1)
   VAR_3 = VAR_3 * 1000;
 }

 return VAR_3;
}
