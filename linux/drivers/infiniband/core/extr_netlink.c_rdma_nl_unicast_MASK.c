
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rdma_dev_net {int nl_sock; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*,int ,int ) ;
 struct rdma_dev_net* FUNC_1 (struct net*) ;

int FUNC_2(struct net *VAR_1, struct sk_buff *VAR_2, u32 VAR_3)
{
 struct rdma_dev_net *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->nl_sock, VAR_2, VAR_3, VAR_0);
 return (VAR_5 < 0) ? VAR_5 : 0;
}
