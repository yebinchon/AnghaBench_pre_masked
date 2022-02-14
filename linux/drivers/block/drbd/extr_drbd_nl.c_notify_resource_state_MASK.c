
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct resource_statistics {int res_stat_write_ordering; } ;
struct resource_info {int dummy; } ;
struct drbd_resource {int write_ordering; } ;
struct drbd_genlmsghdr {unsigned int minor; int ret_code; } ;
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
 int FUNC_2 (struct drbd_resource*,char*,int,unsigned int) ;
 int VAR_11 ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,struct drbd_genlmsghdr*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 struct drbd_genlmsghdr* FUNC_6 (struct sk_buff*,int ,unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct drbd_resource*,int *,int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct resource_info*,int) ;
 int FUNC_11 (struct sk_buff*,struct resource_statistics*,int) ;

void FUNC_12(struct sk_buff *VAR_13,
      unsigned int VAR_14,
      struct drbd_resource *VAR_15,
      struct resource_info *VAR_16,
      enum drbd_notification_type VAR_17)
{
 struct resource_statistics VAR_18;
 struct drbd_genlmsghdr *VAR_19;
 bool VAR_20 = 0;
 int VAR_21;

 if (!VAR_13) {
  VAR_14 = FUNC_0(&VAR_12);
  VAR_13 = FUNC_5(VAR_7, VAR_5);
  VAR_21 = -VAR_3;
  if (!VAR_13)
   goto failed;
  VAR_20 = 1;
 }

 VAR_21 = -VAR_2;
 VAR_19 = FUNC_6(VAR_13, 0, VAR_14, &VAR_11, 0, VAR_1);
 if (!VAR_19)
  goto nla_put_failure;
 VAR_19->minor = -1U;
 VAR_19->ret_code = VAR_10;
 if (FUNC_7(VAR_13, VAR_15, ((void*)0), ((void*)0)) ||
     FUNC_8(VAR_13, VAR_17) ||
     ((VAR_17 & ~VAR_9) != VAR_8 &&
      FUNC_10(VAR_13, VAR_16, 1)))
  goto nla_put_failure;
 VAR_18.res_stat_write_ordering = VAR_15->write_ordering;
 VAR_21 = FUNC_11(VAR_13, &VAR_18, !FUNC_1(VAR_0));
 if (VAR_21)
  goto nla_put_failure;
 FUNC_4(VAR_13, VAR_19);
 if (VAR_20) {
  VAR_21 = FUNC_3(VAR_13, VAR_6);

  if (VAR_21 && VAR_21 != -VAR_4)
   goto failed;
 }
 return;

nla_put_failure:
 FUNC_9(VAR_13);
failed:
 FUNC_2(VAR_15, "Error %d while broadcasting event. Event seq:%u\n",
   VAR_21, VAR_14);
}
