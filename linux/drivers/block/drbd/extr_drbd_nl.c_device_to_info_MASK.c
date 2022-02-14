
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disk; } ;
struct drbd_device {TYPE_1__ state; } ;
struct device_info {int dev_disk_state; } ;



__attribute__((used)) static void FUNC_0(struct device_info *VAR_0,
      struct drbd_device *VAR_1)
{
 VAR_0->dev_disk_state = VAR_1->state.disk;
}
