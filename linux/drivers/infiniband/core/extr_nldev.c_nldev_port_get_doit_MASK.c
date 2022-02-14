
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct sk_buff*,struct ib_device*,int ,int ) ;
 struct ib_device* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct nlattr*) ;
 int VAR_9 ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 struct nlmsghdr* FUNC_10 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct ib_device*,int ) ;
 int FUNC_12 (int ,struct sk_buff*,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
          struct netlink_ext_ack *VAR_12)
{
 struct nlattr *VAR_13[VAR_5];
 struct ib_device *VAR_14;
 struct sk_buff *VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_18 = FUNC_9(VAR_11, 0, VAR_13, VAR_5 - 1,
         VAR_9, VAR_12);
 if (VAR_18 ||
     !VAR_13[VAR_4] ||
     !VAR_13[VAR_6])
  return -VAR_0;

 VAR_16 = FUNC_5(VAR_13[VAR_4]);
 VAR_14 = FUNC_3(FUNC_13(VAR_10->sk), VAR_16);
 if (!VAR_14)
  return -VAR_0;

 VAR_17 = FUNC_5(VAR_13[VAR_6]);
 if (!FUNC_11(VAR_14, VAR_17)) {
  VAR_18 = -VAR_0;
  goto err;
 }

 VAR_15 = FUNC_8(VAR_3, VAR_2);
 if (!VAR_15) {
  VAR_18 = -VAR_1;
  goto err;
 }

 VAR_11 = FUNC_10(VAR_15, FUNC_0(VAR_10).portid, VAR_11->nlmsg_seq,
   FUNC_1(VAR_8, VAR_7),
   0, 0);

 VAR_18 = FUNC_2(VAR_15, VAR_14, VAR_17, FUNC_13(VAR_10->sk));
 if (VAR_18)
  goto err_free;

 FUNC_6(VAR_15, VAR_11);
 FUNC_4(VAR_14);

 return FUNC_12(FUNC_13(VAR_10->sk), VAR_15, FUNC_0(VAR_10).portid);

err_free:
 FUNC_7(VAR_15);
err:
 FUNC_4(VAR_14);
 return VAR_18;
}
