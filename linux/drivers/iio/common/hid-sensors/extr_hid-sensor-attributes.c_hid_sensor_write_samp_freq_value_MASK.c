
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
struct TYPE_2__ {scalar_t__ units; int index; int report_id; } ;
struct hid_sensor_common {int poll_interval; TYPE_1__ poll; int hsdev; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int,int*) ;
 int FUNC_1 (int ,int ,int ,int,int*) ;

int FUNC_2(struct hid_sensor_common *VAR_6,
    int VAR_7, int VAR_8)
{
 s32 VAR_9;
 int VAR_10;

 if (VAR_7 < 0 || VAR_8 < 0)
  return -VAR_0;

 VAR_9 = VAR_7 * VAR_3 + VAR_8;
 if (VAR_9) {
  if (VAR_6->poll.units == VAR_1)
   VAR_9 = VAR_4 / VAR_9;
  else if (VAR_6->poll.units == VAR_2)
   VAR_9 = VAR_5 / VAR_9;
  else
   VAR_9 = 0;
 }
 VAR_10 = FUNC_1(VAR_6->hsdev, VAR_6->poll.report_id,
         VAR_6->poll.index, sizeof(VAR_9), &VAR_9);
 if (VAR_10 < 0 || VAR_9 < 0)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_6->hsdev,
         VAR_6->poll.report_id,
         VAR_6->poll.index, sizeof(VAR_9), &VAR_9);
 if (VAR_10 < 0 || VAR_9 < 0)
  return -VAR_0;

 VAR_6->poll_interval = VAR_9;

 return 0;
}
