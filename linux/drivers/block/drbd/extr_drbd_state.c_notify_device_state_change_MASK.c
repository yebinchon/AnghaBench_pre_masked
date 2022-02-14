
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct drbd_device_state_change {int * disk_state; struct drbd_device* device; } ;
struct drbd_device {int dummy; } ;
struct device_info {int dev_disk_state; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,struct drbd_device*,struct device_info*,int) ;

void FUNC_1(struct sk_buff *VAR_1,
    unsigned int VAR_2,
    struct drbd_device_state_change *VAR_3,
    enum drbd_notification_type VAR_4)
{
 struct drbd_device *VAR_5 = VAR_3->device;
 struct device_info VAR_6 = {
  .dev_disk_state = VAR_3->disk_state[VAR_0],
 };

 FUNC_0(VAR_1, VAR_2, VAR_5, &VAR_6, VAR_4);
}
