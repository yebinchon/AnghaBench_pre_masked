
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
typedef enum rdma_nl_counter_mode { ____Placeholder_rdma_nl_counter_mode } rdma_nl_counter_mode ;
typedef enum rdma_nl_counter_mask { ____Placeholder_rdma_nl_counter_mask } rdma_nl_counter_mask ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ib_device*) ;
 struct ib_device* FUNC_3 (int ,int) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,size_t,int) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*,struct netlink_ext_ack*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct ib_device*,int,int*,int*) ;
 int FUNC_13 (struct ib_device*,int) ;
 int FUNC_14 (int ,struct sk_buff*,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_13, struct nlmsghdr *VAR_14,
       struct netlink_ext_ack *VAR_15, struct nlattr *VAR_16[])

{
 static enum rdma_nl_counter_mode VAR_17;
 static enum rdma_nl_counter_mask VAR_18;
 struct ib_device *VAR_19;
 struct sk_buff *VAR_20;
 u32 VAR_21, VAR_22;
 int VAR_23;

 if (VAR_16[VAR_9])
  return FUNC_7(VAR_13, VAR_14, VAR_15);

 if (!VAR_16[VAR_10] ||
     !VAR_16[VAR_6] || !VAR_16[VAR_7])
  return -VAR_0;

 VAR_21 = FUNC_5(VAR_16[VAR_6]);
 VAR_19 = FUNC_3(FUNC_15(VAR_13->sk), VAR_21);
 if (!VAR_19)
  return -VAR_0;

 VAR_22 = FUNC_5(VAR_16[VAR_7]);
 if (!FUNC_13(VAR_19, VAR_22)) {
  VAR_23 = -VAR_0;
  goto err;
 }

 VAR_20 = FUNC_10(VAR_4, VAR_3);
 if (!VAR_20) {
  VAR_23 = -VAR_2;
  goto err;
 }

 VAR_14 = FUNC_11(VAR_20, FUNC_0(VAR_13).portid, VAR_14->nlmsg_seq,
   FUNC_1(VAR_12,
      VAR_11),
   0, 0);

 VAR_23 = FUNC_12(VAR_19, VAR_22, &VAR_17, &VAR_18);
 if (VAR_23)
  goto err_msg;

 if (FUNC_2(VAR_20, VAR_19) ||
     FUNC_6(VAR_20, VAR_7, VAR_22) ||
     FUNC_6(VAR_20, VAR_10, VAR_17)) {
  VAR_23 = -VAR_1;
  goto err_msg;
 }

 if ((VAR_17 == VAR_5) &&
     FUNC_6(VAR_20, VAR_8, VAR_18)) {
  VAR_23 = -VAR_1;
  goto err_msg;
 }

 FUNC_8(VAR_20, VAR_14);
 FUNC_4(VAR_19);
 return FUNC_14(FUNC_15(VAR_13->sk), VAR_20, FUNC_0(VAR_13).portid);

err_msg:
 FUNC_9(VAR_20);
err:
 FUNC_4(VAR_19);
 return VAR_23;
}
