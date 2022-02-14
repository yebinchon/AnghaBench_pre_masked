
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ib_device*) ;
 struct ib_device* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct ib_device*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,size_t,scalar_t__) ;
 int VAR_17 ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct ib_device*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct ib_device*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_14 (struct ib_device*,scalar_t__,int,scalar_t__) ;
 int FUNC_15 (struct ib_device*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct ib_device*,scalar_t__) ;
 int FUNC_17 (int ,struct sk_buff*,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_18, struct nlmsghdr *VAR_19,
          struct netlink_ext_ack *VAR_20)
{
 u32 VAR_21, VAR_22, VAR_23, VAR_24 = 0, VAR_25, VAR_26 = 0;
 struct nlattr *VAR_27[VAR_7];
 struct ib_device *VAR_28;
 struct sk_buff *VAR_29;
 int VAR_30;

 VAR_30 = FUNC_10(VAR_19, 0, VAR_27, VAR_7 - 1,
     VAR_17, VAR_20);

 if (VAR_30 || !VAR_27[VAR_14] ||
     !VAR_27[VAR_6] ||
     !VAR_27[VAR_8] || !VAR_27[VAR_13])
  return -VAR_0;

 if (FUNC_5(VAR_27[VAR_14]) != VAR_10)
  return -VAR_0;

 VAR_21 = FUNC_5(VAR_27[VAR_6]);
 VAR_28 = FUNC_3(FUNC_18(VAR_18->sk), VAR_21);
 if (!VAR_28)
  return -VAR_0;

 VAR_22 = FUNC_5(VAR_27[VAR_8]);
 if (!FUNC_16(VAR_28, VAR_22)) {
  VAR_30 = -VAR_0;
  goto err;
 }

 VAR_29 = FUNC_9(VAR_4, VAR_3);
 if (!VAR_29) {
  VAR_30 = -VAR_2;
  goto err;
 }
 VAR_19 = FUNC_11(VAR_29, FUNC_0(VAR_18).portid, VAR_19->nlmsg_seq,
   FUNC_1(VAR_16,
      VAR_15),
   0, 0);

 VAR_23 = FUNC_5(VAR_27[VAR_13]);
 if (VAR_23 == VAR_5) {
  if (VAR_27[VAR_11])
   VAR_24 = FUNC_5(
    VAR_27[VAR_11]);

  VAR_30 = FUNC_14(VAR_28, VAR_22,
       VAR_24 ? 1 : 0, VAR_24);
  if (VAR_30)
   goto err_msg;
 } else {
  VAR_25 = FUNC_5(VAR_27[VAR_9]);
  if (VAR_27[VAR_12]) {
   VAR_26 = FUNC_5(VAR_27[VAR_12]);
   VAR_30 = FUNC_12(VAR_28, VAR_22, VAR_25, VAR_26);
  } else {
   VAR_30 = FUNC_13(VAR_28, VAR_22,
         VAR_25, &VAR_26);
  }
  if (VAR_30)
   goto err_msg;

  if (FUNC_2(VAR_29, VAR_28) ||
      FUNC_6(VAR_29, VAR_8, VAR_22) ||
      FUNC_6(VAR_29, VAR_12, VAR_26) ||
      FUNC_6(VAR_29, VAR_9, VAR_25)) {
   VAR_30 = -VAR_1;
   goto err_fill;
  }
 }

 FUNC_7(VAR_29, VAR_19);
 FUNC_4(VAR_28);
 return FUNC_17(FUNC_18(VAR_18->sk), VAR_29, FUNC_0(VAR_18).portid);

err_fill:
 FUNC_15(VAR_28, VAR_22, VAR_25, VAR_26);
err_msg:
 FUNC_8(VAR_29);
err:
 FUNC_4(VAR_28);
 return VAR_30;
}
