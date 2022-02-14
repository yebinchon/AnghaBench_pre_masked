
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
struct TYPE_2__ {scalar_t__ units; int index; int report_id; } ;
struct hid_sensor_common {TYPE_1__ poll; int hsdev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,scalar_t__*) ;
 int FUNC_1 (int,scalar_t__,int*,int*) ;

int FUNC_2(struct hid_sensor_common *VAR_4,
    int *VAR_5, int *VAR_6)
{
 s32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4->hsdev,
         VAR_4->poll.report_id,
         VAR_4->poll.index, sizeof(VAR_7), &VAR_7);
 if (VAR_8 < 0 || VAR_7 < 0) {
  *VAR_5 = *VAR_6 = 0;
  return -VAR_0;
 } else {
  if (VAR_4->poll.units == VAR_1)
   FUNC_1(1000, VAR_7, VAR_5, VAR_6);
  else if (VAR_4->poll.units == VAR_2)
   FUNC_1(1, VAR_7, VAR_5, VAR_6);
  else {
   *VAR_5 = *VAR_6 = 0;
   return -VAR_0;
  }
 }

 return VAR_3;
}
