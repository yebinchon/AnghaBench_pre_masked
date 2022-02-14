
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int report_id; } ;
struct hid_sensor_common {TYPE_1__ report_latency; int hsdev; } ;
typedef int latency_ms ;


 int FUNC_0 (int ,int ,int ,int,int*) ;

int FUNC_1(struct hid_sensor_common *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->hsdev, VAR_0->report_latency.report_id,
          VAR_0->report_latency.index,
          sizeof(VAR_1), &VAR_1);
}
