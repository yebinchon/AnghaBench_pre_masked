
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
struct sk_buff {int sk; } ;
struct rdma_link_ops {int (* newlink ) (char*,struct net_device*) ;} ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
typedef int ndev_name ;
typedef int ibdev_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 struct net_device* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 struct rdma_link_ops* FUNC_3 (char*) ;
 int VAR_8 ;
 int FUNC_4 (char*,struct nlattr*,int) ;
 int VAR_9 ;
 int FUNC_5 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char) ;
 int FUNC_9 (char*,struct net_device*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
     struct netlink_ext_ack *VAR_12)
{
 struct nlattr *VAR_13[VAR_6];
 char VAR_14[VAR_2];
 const struct rdma_link_ops *VAR_15;
 char VAR_16[VAR_3];
 struct net_device *VAR_17;
 char VAR_18[VAR_3];
 int VAR_19;

 VAR_19 = FUNC_5(VAR_11, 0, VAR_13, VAR_6 - 1,
         VAR_9, VAR_12);
 if (VAR_19 || !VAR_13[VAR_4] ||
     !VAR_13[VAR_5] || !VAR_13[VAR_7])
  return -VAR_0;

 FUNC_4(VAR_14, VAR_13[VAR_4],
      sizeof(VAR_14));
 if (FUNC_8(VAR_14, '%'))
  return -VAR_0;

 FUNC_4(VAR_18, VAR_13[VAR_5], sizeof(VAR_18));
 FUNC_4(VAR_16, VAR_13[VAR_7],
      sizeof(VAR_16));

 VAR_17 = FUNC_0(FUNC_7(VAR_10->sk), VAR_16);
 if (!VAR_17)
  return -VAR_1;

 FUNC_2(&VAR_8);
 VAR_15 = FUNC_3(VAR_18);
 VAR_19 = VAR_15 ? VAR_15->newlink(VAR_14, VAR_17) : -VAR_0;
 FUNC_10(&VAR_8);
 FUNC_1(VAR_17);

 return VAR_19;
}
