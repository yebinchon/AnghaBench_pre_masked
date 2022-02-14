
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct drbd_genlmsghdr {int ret_code; int minor; } ;
struct drbd_device {int resource; int minor; } ;
struct device_statistics {int dummy; } ;
struct device_info {int dummy; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;


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
 scalar_t__ FUNC_2 (struct sk_buff*,struct device_info*,int) ;
 int FUNC_3 (struct sk_buff*,struct device_statistics*,int) ;
 int FUNC_4 (struct device_statistics*,struct drbd_device*) ;
 int FUNC_5 (struct drbd_device*,char*,int,unsigned int) ;
 int VAR_11 ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,struct drbd_genlmsghdr*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 struct drbd_genlmsghdr* FUNC_9 (struct sk_buff*,int ,unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int *,struct drbd_device*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int VAR_12 ;

void FUNC_13(struct sk_buff *VAR_13,
    unsigned int VAR_14,
    struct drbd_device *VAR_15,
    struct device_info *VAR_16,
    enum drbd_notification_type VAR_17)
{
 struct device_statistics VAR_18;
 struct drbd_genlmsghdr *VAR_19;
 bool VAR_20 = 0;
 int VAR_21;

 if (!VAR_13) {
  VAR_14 = FUNC_0(&VAR_12);
  VAR_13 = FUNC_8(VAR_7, VAR_5);
  VAR_21 = -VAR_3;
  if (!VAR_13)
   goto failed;
  VAR_20 = 1;
 }

 VAR_21 = -VAR_2;
 VAR_19 = FUNC_9(VAR_13, 0, VAR_14, &VAR_11, 0, VAR_1);
 if (!VAR_19)
  goto nla_put_failure;
 VAR_19->minor = VAR_15->minor;
 VAR_19->ret_code = VAR_10;
 if (FUNC_10(VAR_13, VAR_15->resource, ((void*)0), VAR_15) ||
     FUNC_11(VAR_13, VAR_17) ||
     ((VAR_17 & ~VAR_9) != VAR_8 &&
      FUNC_2(VAR_13, VAR_16, 1)))
  goto nla_put_failure;
 FUNC_4(&VAR_18, VAR_15);
 FUNC_3(VAR_13, &VAR_18, !FUNC_1(VAR_0));
 FUNC_7(VAR_13, VAR_19);
 if (VAR_20) {
  VAR_21 = FUNC_6(VAR_13, VAR_6);

  if (VAR_21 && VAR_21 != -VAR_4)
   goto failed;
 }
 return;

nla_put_failure:
 FUNC_12(VAR_13);
failed:
 FUNC_5(VAR_15, "Error %d while broadcasting event. Event seq:%u\n",
   VAR_21, VAR_14);
}
