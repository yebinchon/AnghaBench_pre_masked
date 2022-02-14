
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rdma_dev_addr {int net; scalar_t__ bound_dev_if; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct rdma_dev_addr*,struct net_device*) ;
 struct net_device* FUNC_7 (int ,struct sockaddr const*) ;

int FUNC_8(const struct sockaddr *VAR_1,
        struct rdma_dev_addr *VAR_2)
{
 struct net_device *VAR_3;

 if (VAR_2->bound_dev_if) {
  VAR_3 = FUNC_2(VAR_2->net, VAR_2->bound_dev_if);
  if (!VAR_3)
   return -VAR_0;
  FUNC_6(VAR_2, VAR_3);
  FUNC_3(VAR_3);
  return 0;
 }

 FUNC_4();
 VAR_3 = FUNC_7(VAR_2->net, VAR_1);
 if (!FUNC_0(VAR_3))
  FUNC_6(VAR_2, VAR_3);
 FUNC_5();
 return FUNC_1(VAR_3);
}
