
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct drbd_resource {int dummy; } ;
struct drbd_helper_info {int helper_status; int helper_name_len; int helper_name; } ;
struct drbd_genlmsghdr {int minor; int ret_code; } ;
struct drbd_device {int minor; struct drbd_resource* resource; } ;
struct drbd_connection {struct drbd_resource* resource; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_resource*,char*,int,unsigned int) ;
 int VAR_8 ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct drbd_helper_info*,int) ;
 int FUNC_4 (struct sk_buff*,struct drbd_genlmsghdr*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 struct drbd_genlmsghdr* FUNC_6 (struct sk_buff*,int ,unsigned int,int *,int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct drbd_resource*,struct drbd_connection*,struct drbd_device*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ,char const*,int) ;
 int FUNC_14 (char const*) ;

void FUNC_15(enum drbd_notification_type VAR_11,
     struct drbd_device *VAR_12, struct drbd_connection *VAR_13,
     const char *VAR_14, int VAR_15)
{
 struct drbd_resource *VAR_16 = VAR_12 ? VAR_12->resource : VAR_13->resource;
 struct drbd_helper_info VAR_17;
 unsigned int VAR_18 = FUNC_0(&VAR_10);
 struct sk_buff *VAR_19 = ((void*)0);
 struct drbd_genlmsghdr *VAR_20;
 int VAR_21;

 FUNC_13(VAR_17.helper_name, VAR_14, sizeof(VAR_17.helper_name));
 VAR_17.helper_name_len = FUNC_7(FUNC_14(VAR_14), sizeof(VAR_17.helper_name));
 VAR_17.helper_status = VAR_15;

 VAR_19 = FUNC_5(VAR_6, VAR_4);
 VAR_21 = -VAR_2;
 if (!VAR_19)
  goto fail;

 VAR_21 = -VAR_1;
 VAR_20 = FUNC_6(VAR_19, 0, VAR_18, &VAR_8, 0, VAR_0);
 if (!VAR_20)
  goto fail;
 VAR_20->minor = VAR_12 ? VAR_12->minor : -1;
 VAR_20->ret_code = VAR_7;
 FUNC_8(&VAR_9);
 if (FUNC_10(VAR_19, VAR_16, VAR_13, VAR_12) ||
     FUNC_11(VAR_19, VAR_11) ||
     FUNC_3(VAR_19, &VAR_17, 1))
  goto unlock_fail;
 FUNC_4(VAR_19, VAR_20);
 VAR_21 = FUNC_2(VAR_19, VAR_5);
 VAR_19 = ((void*)0);

 if (VAR_21 && VAR_21 != -VAR_3)
  goto unlock_fail;
 FUNC_9(&VAR_9);
 return;

unlock_fail:
 FUNC_9(&VAR_9);
fail:
 FUNC_12(VAR_19);
 FUNC_1(VAR_16, "Error %d while broadcasting event. Event seq:%u\n",
   VAR_21, VAR_18);
}
