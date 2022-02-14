
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_dev_addr {int bound_dev_if; int net; int sgid_attr; } ;
struct net_device {int ifindex; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rdma_dev_addr *VAR_0)
{
 struct net_device *VAR_1;

 VAR_1 = FUNC_3(VAR_0->sgid_attr);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);
 VAR_0->net = FUNC_2(VAR_1);
 VAR_0->bound_dev_if = VAR_1->ifindex;
 return 0;
}
