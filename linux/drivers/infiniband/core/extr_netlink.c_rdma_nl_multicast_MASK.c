
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rdma_dev_net {int nl_sock; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,struct sk_buff*,int ,unsigned int,int ) ;
 struct rdma_dev_net* FUNC_1 (struct net*) ;

int FUNC_2(struct net *VAR_0, struct sk_buff *VAR_1,
        unsigned int VAR_2, gfp_t VAR_3)
{
 struct rdma_dev_net *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(VAR_4->nl_sock, VAR_1, 0, VAR_2, VAR_3);
}
