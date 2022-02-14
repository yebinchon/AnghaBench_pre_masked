
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_sndtimeo; } ;
struct rdma_dev_net {struct sock* nl_sock; int net; } ;
struct netlink_kernel_cfg {int input; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sock* FUNC_0 (struct net*,int ,struct netlink_kernel_cfg*) ;
 int VAR_3 ;
 struct net* FUNC_1 (int *) ;

int FUNC_2(struct rdma_dev_net *VAR_4)
{
 struct net *VAR_5 = FUNC_1(&VAR_4->net);
 struct netlink_kernel_cfg VAR_6 = {
  .input = VAR_3,
 };
 struct sock *VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_2, &VAR_6);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->sk_sndtimeo = 10 * VAR_1;
 VAR_4->nl_sock = VAR_7;
 return 0;
}
