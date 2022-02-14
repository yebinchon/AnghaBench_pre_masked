
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_netdev {int (* free_rdma_netdev ) (struct net_device*) ;} ;
struct opa_vnic_adapter {int mactbl_lock; int lock; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct opa_vnic_adapter*) ;
 int FUNC_1 (int *) ;
 struct rdma_netdev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct opa_vnic_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*) ;

void FUNC_7(struct opa_vnic_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 struct rdma_netdev *VAR_2 = FUNC_2(VAR_1);

 FUNC_6("removing\n");
 FUNC_5(VAR_1);
 FUNC_3(VAR_0);
 FUNC_1(&VAR_0->lock);
 FUNC_1(&VAR_0->mactbl_lock);
 FUNC_0(VAR_0);
 VAR_2->free_rdma_netdev(VAR_1);
}
