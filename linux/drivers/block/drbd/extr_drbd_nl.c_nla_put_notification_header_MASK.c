
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct drbd_notification_header {int nh_type; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;


 int FUNC_0 (struct sk_buff*,struct drbd_notification_header*,int) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0,
           enum drbd_notification_type VAR_1)
{
 struct drbd_notification_header VAR_2 = {
  .nh_type = VAR_1,
 };

 return FUNC_0(VAR_0, &VAR_2, 1);
}
