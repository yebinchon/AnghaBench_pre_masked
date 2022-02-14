
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; scalar_t__ report_id; } ;
struct hid_sensor_common {TYPE_1__ report_latency; } ;



bool FUNC_0(struct hid_sensor_common *VAR_0)
{
 return VAR_0->report_latency.index > 0 && VAR_0->report_latency.report_id > 0;
}
