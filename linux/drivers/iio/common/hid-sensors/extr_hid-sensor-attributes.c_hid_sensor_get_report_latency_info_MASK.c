
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hid_sensor_hub_device {int hdev; } ;
struct TYPE_2__ {int report_id; int index; } ;
struct hid_sensor_common {TYPE_1__ report_latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct hid_sensor_hub_device*,int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct hid_sensor_hub_device *VAR_2,
            u32 VAR_3,
            struct hid_sensor_common *VAR_4)
{
 FUNC_1(VAR_2, VAR_0,
         VAR_3,
         VAR_1,
         &VAR_4->report_latency);

 FUNC_0(VAR_2->hdev, "Report latency attributes: %x:%x\n",
  VAR_4->report_latency.index, VAR_4->report_latency.report_id);
}
