
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct sk_buff {int sk; } ;
struct rdma_hw_stats {int lock; int * names; scalar_t__* value; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_5__ {int (* get_hw_stats ) (struct ib_device*,struct rdma_hw_stats*,size_t,int ) ;int alloc_hw_stats; } ;
struct ib_device {TYPE_2__ ops; TYPE_1__* port_data; } ;
struct TYPE_6__ {int portid; } ;
struct TYPE_4__ {struct rdma_hw_stats* hw_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ib_device*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__) ;
 struct ib_device* FUNC_4 (int ,size_t) ;
 int FUNC_5 (struct ib_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct sk_buff*,struct nlattr*) ;
 int FUNC_10 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,size_t,size_t) ;
 int FUNC_13 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_14 (struct sk_buff*) ;
 struct sk_buff* FUNC_15 (int ,int ) ;
 struct nlmsghdr* FUNC_16 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_17 (struct ib_device*,size_t,int) ;
 int FUNC_18 (struct ib_device*,size_t) ;
 int FUNC_19 (int ,struct sk_buff*,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct ib_device*,struct rdma_hw_stats*,size_t,int ) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_10,
      struct nlmsghdr *VAR_11,
      struct netlink_ext_ack *VAR_12,
      struct nlattr *VAR_13[])
{
 struct rdma_hw_stats *VAR_14;
 struct nlattr *VAR_15;
 struct ib_device *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 struct sk_buff *VAR_20;
 u32 VAR_21, VAR_22;
 u64 VAR_23;

 if (!VAR_13[VAR_5] || !VAR_13[VAR_6])
  return -VAR_0;

 VAR_21 = FUNC_8(VAR_13[VAR_5]);
 VAR_16 = FUNC_4(FUNC_20(VAR_10->sk), VAR_21);
 if (!VAR_16)
  return -VAR_0;

 if (!VAR_16->ops.alloc_hw_stats || !VAR_16->ops.get_hw_stats) {
  VAR_17 = -VAR_0;
  goto err;
 }

 VAR_22 = FUNC_8(VAR_13[VAR_6]);
 if (!FUNC_18(VAR_16, VAR_22)) {
  VAR_17 = -VAR_0;
  goto err;
 }

 VAR_20 = FUNC_15(VAR_4, VAR_3);
 if (!VAR_20) {
  VAR_17 = -VAR_2;
  goto err;
 }

 VAR_11 = FUNC_16(VAR_20, FUNC_0(VAR_10).portid, VAR_11->nlmsg_seq,
   FUNC_1(VAR_9,
      VAR_8),
   0, 0);

 if (FUNC_2(VAR_20, VAR_16) ||
     FUNC_12(VAR_20, VAR_6, VAR_22)) {
  VAR_17 = -VAR_1;
  goto err_msg;
 }

 VAR_14 = VAR_16->port_data ? VAR_16->port_data[VAR_22].hw_stats : ((void*)0);
 if (VAR_14 == ((void*)0)) {
  VAR_17 = -VAR_0;
  goto err_msg;
 }
 FUNC_6(&VAR_14->lock);

 VAR_18 = VAR_16->ops.get_hw_stats(VAR_16, VAR_14, VAR_22, 0);
 if (VAR_18 < 0) {
  VAR_17 = -VAR_0;
  goto err_stats;
 }

 VAR_15 = FUNC_11(VAR_20, VAR_7);
 if (!VAR_15) {
  VAR_17 = -VAR_1;
  goto err_stats;
 }
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_23 = VAR_14->value[VAR_19] +
   FUNC_17(VAR_16, VAR_22, VAR_19);
  if (FUNC_3(VAR_20, VAR_14->names[VAR_19], VAR_23)) {
   VAR_17 = -VAR_1;
   goto err_table;
  }
 }
 FUNC_10(VAR_20, VAR_15);

 FUNC_7(&VAR_14->lock);
 FUNC_13(VAR_20, VAR_11);
 FUNC_5(VAR_16);
 return FUNC_19(FUNC_20(VAR_10->sk), VAR_20, FUNC_0(VAR_10).portid);

err_table:
 FUNC_9(VAR_20, VAR_15);
err_stats:
 FUNC_7(&VAR_14->lock);
err_msg:
 FUNC_14(VAR_20);
err:
 FUNC_5(VAR_16);
 return VAR_17;
}
