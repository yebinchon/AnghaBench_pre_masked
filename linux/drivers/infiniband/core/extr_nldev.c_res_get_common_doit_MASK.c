
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int sk; } ;
struct rdma_restrack_entry {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nldev_fill_res_entry {size_t id; int flags; int (* fill_res_func ) (struct sk_buff*,int,struct rdma_restrack_entry*,scalar_t__) ;int nldev_cmd; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_restrack_type { ____Placeholder_rdma_restrack_type } rdma_restrack_type ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct rdma_restrack_entry*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct rdma_restrack_entry*) ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 struct nldev_fill_res_entry* VAR_12 ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct ib_device*) ;
 struct ib_device* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct ib_device*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct nlattr*) ;
 int VAR_13 ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_14 (struct ib_device*,scalar_t__) ;
 int FUNC_15 (struct rdma_restrack_entry*) ;
 int FUNC_16 (int ,struct sk_buff*,int ) ;
 struct rdma_restrack_entry* FUNC_17 (struct ib_device*,int,scalar_t__) ;
 int FUNC_18 (struct rdma_restrack_entry*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct sk_buff*,int,struct rdma_restrack_entry*,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_14, struct nlmsghdr *VAR_15,
          struct netlink_ext_ack *VAR_16,
          enum rdma_restrack_type VAR_17)
{
 const struct nldev_fill_res_entry *VAR_18 = &VAR_12[VAR_17];
 struct nlattr *VAR_19[VAR_9];
 struct rdma_restrack_entry *VAR_20;
 struct ib_device *VAR_21;
 u32 VAR_22, VAR_23, VAR_24 = 0;
 bool VAR_25;
 struct sk_buff *VAR_26;
 int VAR_27;

 VAR_27 = FUNC_12(VAR_15, 0, VAR_19, VAR_9 - 1,
         VAR_13, VAR_16);
 if (VAR_27 || !VAR_19[VAR_8] || !VAR_18->id || !VAR_19[VAR_18->id])
  return -VAR_1;

 VAR_22 = FUNC_8(VAR_19[VAR_8]);
 VAR_21 = FUNC_5(FUNC_19(VAR_14->sk), VAR_22);
 if (!VAR_21)
  return -VAR_1;

 if (VAR_19[VAR_10]) {
  VAR_24 = FUNC_8(VAR_19[VAR_10]);
  if (!FUNC_14(VAR_21, VAR_24)) {
   VAR_27 = -VAR_1;
   goto err;
  }
 }

 if ((VAR_24 && VAR_18->flags & VAR_6) ||
     (!VAR_24 && ~VAR_18->flags & VAR_6)) {
  VAR_27 = -VAR_1;
  goto err;
 }

 VAR_23 = FUNC_8(VAR_19[VAR_18->id]);
 VAR_20 = FUNC_17(VAR_21, VAR_17, VAR_23);
 if (FUNC_0(VAR_20)) {
  VAR_27 = FUNC_2(VAR_20);
  goto err;
 }

 if (!FUNC_15(VAR_20)) {
  VAR_27 = -VAR_3;
  goto err_get;
 }

 VAR_26 = FUNC_11(VAR_7, VAR_5);
 if (!VAR_26) {
  VAR_27 = -VAR_4;
  goto err_get;
 }

 VAR_15 = FUNC_13(VAR_26, FUNC_1(VAR_14).portid, VAR_15->nlmsg_seq,
   FUNC_3(VAR_11, VAR_18->nldev_cmd),
   0, 0);

 if (FUNC_4(VAR_26, VAR_21)) {
  VAR_27 = -VAR_2;
  goto err_free;
 }

 VAR_25 = FUNC_7(VAR_14, VAR_0);
 VAR_27 = VAR_18->fill_res_func(VAR_26, VAR_25, VAR_20, VAR_24);
 FUNC_18(VAR_20);
 if (VAR_27)
  goto err_free;

 FUNC_9(VAR_26, VAR_15);
 FUNC_6(VAR_21);
 return FUNC_16(FUNC_19(VAR_14->sk), VAR_26, FUNC_1(VAR_14).portid);

err_free:
 FUNC_10(VAR_26);
err_get:
 FUNC_18(VAR_20);
err:
 FUNC_6(VAR_21);
 return VAR_27;
}
