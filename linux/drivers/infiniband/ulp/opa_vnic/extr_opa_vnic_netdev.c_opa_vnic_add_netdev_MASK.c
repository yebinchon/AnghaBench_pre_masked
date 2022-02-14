
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct rdma_netdev {int (* free_rdma_netdev ) (struct net_device*) ;void* port_num; struct ib_device* hca; struct opa_vnic_adapter* clnt_priv; } ;
struct opa_vnic_adapter {int mactbl_lock; int lock; int stats_lock; int * rn_ops; void* vport_num; void* port_num; struct ib_device* ibdev; struct net_device* netdev; } ;
struct net_device {int hard_header_len; int priv_flags; int * netdev_ops; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {struct net_device* (* alloc_rdma_netdev ) (struct ib_device*,void*,int ,char*,int ,int ) ;} ;
struct ib_device {TYPE_2__ dev; TYPE_1__ ops; } ;


 int VAR_0 ;
 struct opa_vnic_adapter* FUNC_0 (struct net_device*) ;
 struct opa_vnic_adapter* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct net_device*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct opa_vnic_adapter*) ;
 struct opa_vnic_adapter* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct rdma_netdev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct opa_vnic_adapter*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *) ;
 struct net_device* FUNC_15 (struct ib_device*,void*,int ,char*,int ,int ) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (char*) ;

struct opa_vnic_adapter *FUNC_18(struct ib_device *VAR_8,
          u8 VAR_9, u8 VAR_10)
{
 struct opa_vnic_adapter *VAR_11;
 struct net_device *VAR_12;
 struct rdma_netdev *VAR_13;
 int VAR_14;

 VAR_12 = VAR_8->ops.alloc_rdma_netdev(VAR_8, VAR_9,
           VAR_5,
           "veth%d", VAR_3,
           VAR_6);
 if (!VAR_12)
  return FUNC_1(-VAR_0);
 else if (FUNC_2(VAR_12))
  return FUNC_0(VAR_12);

 VAR_13 = FUNC_8(VAR_12);
 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_1);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto adapter_err;
 }

 VAR_13->clnt_priv = VAR_11;
 VAR_13->hca = VAR_8;
 VAR_13->port_num = VAR_9;
 VAR_11->netdev = VAR_12;
 VAR_11->ibdev = VAR_8;
 VAR_11->port_num = VAR_9;
 VAR_11->vport_num = VAR_10;
 VAR_11->rn_ops = VAR_12->netdev_ops;

 VAR_12->netdev_ops = &VAR_7;
 VAR_12->priv_flags |= VAR_2;
 VAR_12->hard_header_len += VAR_4;
 FUNC_7(&VAR_11->lock);
 FUNC_7(&VAR_11->mactbl_lock);
 FUNC_14(&VAR_11->stats_lock);

 FUNC_3(VAR_12, VAR_8->dev.parent);

 FUNC_11(VAR_12);

 FUNC_12(VAR_11);

 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14)
  goto netdev_err;

 FUNC_9(VAR_12);
 FUNC_10(VAR_12);
 FUNC_17("initialized\n");

 return VAR_11;
netdev_err:
 FUNC_6(&VAR_11->lock);
 FUNC_6(&VAR_11->mactbl_lock);
 FUNC_4(VAR_11);
adapter_err:
 VAR_13->free_rdma_netdev(VAR_12);

 return FUNC_1(VAR_14);
}
