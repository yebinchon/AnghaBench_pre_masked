
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
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ib_device*) ;
 struct ib_device* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct ib_device*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,size_t,scalar_t__) ;
 int VAR_14 ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct ib_device*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct ib_device*,scalar_t__) ;
 int FUNC_14 (int ,struct sk_buff*,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_15, struct nlmsghdr *VAR_16,
          struct netlink_ext_ack *VAR_17)
{
 struct nlattr *VAR_18[VAR_6];
 struct ib_device *VAR_19;
 struct sk_buff *VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;

 VAR_25 = FUNC_10(VAR_16, 0, VAR_18, VAR_6 - 1,
     VAR_14, VAR_17);
 if (VAR_25 || !VAR_18[VAR_11] ||
     !VAR_18[VAR_5] || !VAR_18[VAR_7] ||
     !VAR_18[VAR_10] ||
     !VAR_18[VAR_8])
  return -VAR_0;

 if (FUNC_5(VAR_18[VAR_11]) != VAR_9)
  return -VAR_0;

 VAR_21 = FUNC_5(VAR_18[VAR_5]);
 VAR_19 = FUNC_3(FUNC_15(VAR_15->sk), VAR_21);
 if (!VAR_19)
  return -VAR_0;

 VAR_22 = FUNC_5(VAR_18[VAR_7]);
 if (!FUNC_13(VAR_19, VAR_22)) {
  VAR_25 = -VAR_0;
  goto err;
 }

 VAR_20 = FUNC_9(VAR_4, VAR_3);
 if (!VAR_20) {
  VAR_25 = -VAR_2;
  goto err;
 }
 VAR_16 = FUNC_11(VAR_20, FUNC_0(VAR_15).portid, VAR_16->nlmsg_seq,
   FUNC_1(VAR_13,
      VAR_12),
   0, 0);

 VAR_24 = FUNC_5(VAR_18[VAR_10]);
 VAR_23 = FUNC_5(VAR_18[VAR_8]);
 if (FUNC_2(VAR_20, VAR_19) ||
     FUNC_6(VAR_20, VAR_7, VAR_22) ||
     FUNC_6(VAR_20, VAR_10, VAR_24) ||
     FUNC_6(VAR_20, VAR_8, VAR_23)) {
  VAR_25 = -VAR_1;
  goto err_fill;
 }

 VAR_25 = FUNC_12(VAR_19, VAR_22, VAR_23, VAR_24);
 if (VAR_25)
  goto err_fill;

 FUNC_7(VAR_20, VAR_16);
 FUNC_4(VAR_19);
 return FUNC_14(FUNC_15(VAR_15->sk), VAR_20, FUNC_0(VAR_15).portid);

err_fill:
 FUNC_8(VAR_20);
err:
 FUNC_4(VAR_19);
 return VAR_25;
}
