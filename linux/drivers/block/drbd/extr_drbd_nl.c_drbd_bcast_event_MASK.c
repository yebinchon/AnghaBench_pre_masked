
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sib_info {int sib_reason; } ;
struct drbd_genlmsghdr {int ret_code; int minor; } ;
struct drbd_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (struct drbd_device*,char*,int,unsigned int,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct sk_buff*,struct drbd_genlmsghdr*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 struct drbd_genlmsghdr* FUNC_6 (struct sk_buff*,int ,unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct drbd_device*,struct sib_info const*) ;
 int FUNC_8 (struct sk_buff*) ;

void FUNC_9(struct drbd_device *VAR_10, const struct sib_info *VAR_11)
{
 struct sk_buff *VAR_12;
 struct drbd_genlmsghdr *VAR_13;
 unsigned VAR_14;
 int VAR_15 = -VAR_2;

 VAR_14 = FUNC_0(&VAR_9);
 VAR_12 = FUNC_5(VAR_6, VAR_4);
 if (!VAR_12)
  goto failed;

 VAR_15 = -VAR_1;
 VAR_13 = FUNC_6(VAR_12, 0, VAR_14, &VAR_8, 0, VAR_0);
 if (!VAR_13)
  goto nla_put_failure;
 VAR_13->minor = FUNC_1(VAR_10);
 VAR_13->ret_code = VAR_7;

 if (FUNC_7(VAR_12, VAR_10, VAR_11))
  goto nla_put_failure;
 FUNC_4(VAR_12, VAR_13);
 VAR_15 = FUNC_3(VAR_12, VAR_5);

 if (VAR_15 && VAR_15 != -VAR_3)
  goto failed;

 return;

nla_put_failure:
 FUNC_8(VAR_12);
failed:
 FUNC_2(VAR_10, "Error %d while broadcasting event. "
   "Event seq:%u sib_reason:%u\n",
   VAR_15, VAR_14, VAR_11->sib_reason);
}
