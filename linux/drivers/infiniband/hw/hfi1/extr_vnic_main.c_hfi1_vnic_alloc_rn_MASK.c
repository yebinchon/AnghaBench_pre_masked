
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rdma_netdev {int set_id; int free_rdma_netdev; } ;
struct opa_vnic_rdma_netdev {int dummy; } ;
struct net_device {int features; int hw_features; int vlan_features; int * netdev_ops; int watchdog_timeo; } ;
struct ib_device {int dummy; } ;
struct hfi1_vnic_vport_info {int num_rx_q; int lock; struct hfi1_vnic_rx_queue* rxq; struct net_device* netdev; int num_tx_q; struct hfi1_devdata* dd; } ;
struct hfi1_vnic_rx_queue {int idx; int napi; struct net_device* netdev; struct hfi1_vnic_vport_info* vinfo; } ;
struct hfi1_devdata {int num_vnic_contexts; scalar_t__ num_pports; int num_sdma; } ;
typedef enum rdma_netdev_t { ____Placeholder_rdma_netdev_t } rdma_netdev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_1 (int,char const*,unsigned char,void (*) (struct net_device*),int ,int) ;
 struct hfi1_devdata* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct hfi1_vnic_vport_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct rdma_netdev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int *,int ,int) ;
 struct hfi1_vnic_vport_info* FUNC_10 (struct net_device*) ;

struct net_device *FUNC_11(struct ib_device *VAR_11,
          u8 VAR_12,
          enum rdma_netdev_t VAR_13,
          const char *VAR_14,
          unsigned char VAR_15,
          void (*VAR_16)(struct net_device *))
{
 struct hfi1_devdata *VAR_17 = FUNC_2(VAR_11);
 struct hfi1_vnic_vport_info *VAR_18;
 struct net_device *VAR_19;
 struct rdma_netdev *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 if (!VAR_17->num_vnic_contexts)
  return FUNC_0(-VAR_1);

 if (!VAR_12 || (VAR_12 > VAR_17->num_pports))
  return FUNC_0(-VAR_0);

 if (VAR_13 != VAR_6)
  return FUNC_0(-VAR_2);

 VAR_22 = sizeof(struct opa_vnic_rdma_netdev) + sizeof(*VAR_18);
 VAR_19 = FUNC_1(VAR_22, VAR_14, VAR_15, VAR_16,
      VAR_17->num_sdma, VAR_17->num_vnic_contexts);
 if (!VAR_19)
  return FUNC_0(-VAR_1);

 VAR_20 = FUNC_8(VAR_19);
 VAR_18 = FUNC_10(VAR_19);
 VAR_18->dd = VAR_17;
 VAR_18->num_tx_q = VAR_17->num_sdma;
 VAR_18->num_rx_q = VAR_17->num_vnic_contexts;
 VAR_18->netdev = VAR_19;
 VAR_20->free_rdma_netdev = VAR_8;
 VAR_20->set_id = VAR_10;

 VAR_19->features = VAR_4 | VAR_5;
 VAR_19->hw_features = VAR_19->features;
 VAR_19->vlan_features = VAR_19->features;
 VAR_19->watchdog_timeo = FUNC_5(VAR_3);
 VAR_19->netdev_ops = &VAR_7;
 FUNC_7(&VAR_18->lock);

 for (VAR_21 = 0; VAR_21 < VAR_18->num_rx_q; VAR_21++) {
  struct hfi1_vnic_rx_queue *VAR_24 = &VAR_18->rxq[VAR_21];

  VAR_24->idx = VAR_21;
  VAR_24->vinfo = VAR_18;
  VAR_24->netdev = VAR_19;
  FUNC_9(VAR_19, &VAR_24->napi, VAR_9, 64);
 }

 VAR_23 = FUNC_4(VAR_18);
 if (VAR_23)
  goto init_fail;

 return VAR_19;
init_fail:
 FUNC_6(&VAR_18->lock);
 FUNC_3(VAR_19);
 return FUNC_0(VAR_23);
}
