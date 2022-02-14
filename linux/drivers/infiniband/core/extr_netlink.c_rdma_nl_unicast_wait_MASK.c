
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rdma_dev_net {int nl_sock; } ;
struct net {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (int ,struct sk_buff*,int ,int ) ;
 struct rdma_dev_net* FUNC_1 (struct net*) ;

int FUNC_2(struct net *VAR_0, struct sk_buff *VAR_1, __u32 VAR_2)
{
 struct rdma_dev_net *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->nl_sock, VAR_1, VAR_2, 0);
 return (VAR_4 < 0) ? VAR_4 : 0;
}
