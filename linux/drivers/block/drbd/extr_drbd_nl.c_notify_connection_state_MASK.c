
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct drbd_genlmsghdr {unsigned int minor; int ret_code; } ;
struct drbd_connection {int flags; int resource; } ;
struct connection_statistics {int conn_congested; } ;
struct connection_info {int dummy; } ;
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
 int VAR_11 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct connection_info*,int) ;
 int FUNC_3 (struct sk_buff*,struct connection_statistics*,int) ;
 int FUNC_4 (struct drbd_connection*,char*,int,unsigned int) ;
 int VAR_12 ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,struct drbd_genlmsghdr*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 struct drbd_genlmsghdr* FUNC_8 (struct sk_buff*,int ,unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,struct drbd_connection*,int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int VAR_13 ;
 int FUNC_12 (int ,int *) ;

void FUNC_13(struct sk_buff *VAR_14,
        unsigned int VAR_15,
        struct drbd_connection *VAR_16,
        struct connection_info *VAR_17,
        enum drbd_notification_type VAR_18)
{
 struct connection_statistics VAR_19;
 struct drbd_genlmsghdr *VAR_20;
 bool VAR_21 = 0;
 int VAR_22;

 if (!VAR_14) {
  VAR_15 = FUNC_0(&VAR_13);
  VAR_14 = FUNC_7(VAR_8, VAR_5);
  VAR_22 = -VAR_3;
  if (!VAR_14)
   goto failed;
  VAR_21 = 1;
 }

 VAR_22 = -VAR_2;
 VAR_20 = FUNC_8(VAR_14, 0, VAR_15, &VAR_12, 0, VAR_1);
 if (!VAR_20)
  goto nla_put_failure;
 VAR_20->minor = -1U;
 VAR_20->ret_code = VAR_11;
 if (FUNC_9(VAR_14, VAR_16->resource, VAR_16, ((void*)0)) ||
     FUNC_10(VAR_14, VAR_18) ||
     ((VAR_18 & ~VAR_10) != VAR_9 &&
      FUNC_2(VAR_14, VAR_17, 1)))
  goto nla_put_failure;
 VAR_19.conn_congested = FUNC_12(VAR_7, &VAR_16->flags);
 FUNC_3(VAR_14, &VAR_19, !FUNC_1(VAR_0));
 FUNC_6(VAR_14, VAR_20);
 if (VAR_21) {
  VAR_22 = FUNC_5(VAR_14, VAR_6);

  if (VAR_22 && VAR_22 != -VAR_4)
   goto failed;
 }
 return;

nla_put_failure:
 FUNC_11(VAR_14);
failed:
 FUNC_4(VAR_16, "Error %d while broadcasting event. Event seq:%u\n",
   VAR_22, VAR_15);
}
