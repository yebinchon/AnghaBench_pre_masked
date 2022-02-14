
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
struct TYPE_2__ {int index; int report_id; } ;
struct hid_sensor_common {TYPE_1__ report_latency; int hsdev; } ;


 int FUNC_0 (int ,int ,int ,int,int*) ;

int FUNC_1(struct hid_sensor_common *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->hsdev, VAR_0->report_latency.report_id,
         VAR_0->report_latency.index, sizeof(VAR_2),
         &VAR_2);
 if (VAR_1 < 0)
  return VAR_1;

 return VAR_2;
}
