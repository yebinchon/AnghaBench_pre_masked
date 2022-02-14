
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct peer_device_statistics {int dummy; } ;
struct peer_device_info {int dummy; } ;
struct drbd_resource {int dummy; } ;
struct drbd_peer_device {TYPE_1__* device; int connection; } ;
struct drbd_genlmsghdr {unsigned int minor; int ret_code; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;
struct TYPE_2__ {struct drbd_resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drbd_peer_device*,char*,int,unsigned int) ;
 int VAR_11 ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,struct drbd_genlmsghdr*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 struct drbd_genlmsghdr* FUNC_6 (struct sk_buff*,int ,unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct drbd_resource*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct peer_device_info*,int) ;
 int FUNC_11 (struct sk_buff*,struct peer_device_statistics*,int) ;
 int FUNC_12 (struct peer_device_statistics*,struct drbd_peer_device*) ;

void FUNC_13(struct sk_buff *VAR_13,
         unsigned int VAR_14,
         struct drbd_peer_device *VAR_15,
         struct peer_device_info *VAR_16,
         enum drbd_notification_type VAR_17)
{
 struct peer_device_statistics VAR_18;
 struct drbd_resource *VAR_19 = VAR_15->device->resource;
 struct drbd_genlmsghdr *VAR_20;
 bool VAR_21 = 0;
 int VAR_22;

 if (!VAR_13) {
  VAR_14 = FUNC_0(&VAR_12);
  VAR_13 = FUNC_5(VAR_7, VAR_5);
  VAR_22 = -VAR_3;
  if (!VAR_13)
   goto failed;
  VAR_21 = 1;
 }

 VAR_22 = -VAR_2;
 VAR_20 = FUNC_6(VAR_13, 0, VAR_14, &VAR_11, 0, VAR_1);
 if (!VAR_20)
  goto nla_put_failure;
 VAR_20->minor = -1U;
 VAR_20->ret_code = VAR_10;
 if (FUNC_7(VAR_13, VAR_19, VAR_15->connection, VAR_15->device) ||
     FUNC_8(VAR_13, VAR_17) ||
     ((VAR_17 & ~VAR_9) != VAR_8 &&
      FUNC_10(VAR_13, VAR_16, 1)))
  goto nla_put_failure;
 FUNC_12(&VAR_18, VAR_15);
 FUNC_11(VAR_13, &VAR_18, !FUNC_1(VAR_0));
 FUNC_4(VAR_13, VAR_20);
 if (VAR_21) {
  VAR_22 = FUNC_3(VAR_13, VAR_6);

  if (VAR_22 && VAR_22 != -VAR_4)
   goto failed;
 }
 return;

nla_put_failure:
 FUNC_9(VAR_13);
failed:
 FUNC_2(VAR_15, "Error %d while broadcasting event. Event seq:%u\n",
   VAR_22, VAR_14);
}
