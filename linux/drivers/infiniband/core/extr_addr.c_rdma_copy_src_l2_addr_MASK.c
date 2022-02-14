
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_dev_addr {int bound_dev_if; int broadcast; int src_dev_addr; int dev_type; } ;
struct net_device {int ifindex; int broadcast; int dev_addr; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct rdma_dev_addr *VAR_1,
      const struct net_device *VAR_2)
{
 VAR_1->dev_type = VAR_2->type;
 FUNC_0(VAR_1->src_dev_addr, VAR_2->dev_addr, VAR_0);
 FUNC_0(VAR_1->broadcast, VAR_2->broadcast, VAR_0);
 VAR_1->bound_dev_if = VAR_2->ifindex;
}
