
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hid_sensor_hub_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ units; } ;
struct hid_sensor_common {int poll_interval; TYPE_1__ poll; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hid_sensor_hub_device*,int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static
int FUNC_1(struct hid_sensor_hub_device *VAR_3,
     u32 VAR_4,
     struct hid_sensor_common *VAR_5)
{
 FUNC_0(VAR_3,
     VAR_0, VAR_4,
     VAR_1,
     &VAR_5->poll);

 if (VAR_5->poll.units == 0)
  VAR_5->poll.units = VAR_2;

 VAR_5->poll_interval = -1;

 return 0;

}
