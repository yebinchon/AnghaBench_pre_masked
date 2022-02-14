
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hfi1_vnic_vport_info {int num_rx_q; int flags; struct hfi1_vnic_rx_queue* rxq; int vesw_id; struct net_device* netdev; struct hfi1_devdata* dd; } ;
struct hfi1_vnic_rx_queue {int napi; int skbq; } ;
struct TYPE_2__ {int vesws; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,struct hfi1_vnic_vport_info*,int ) ;

__attribute__((used)) static int FUNC_6(struct hfi1_vnic_vport_info *VAR_3)
{
 struct hfi1_devdata *VAR_4 = VAR_3->dd;
 struct net_device *VAR_5 = VAR_3->netdev;
 int VAR_6, VAR_7;


 if (!VAR_3->vesw_id)
  return -VAR_0;

 VAR_7 = FUNC_5(&VAR_4->vnic.vesws, VAR_3->vesw_id, VAR_3, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_rx_q; VAR_6++) {
  struct hfi1_vnic_rx_queue *VAR_8 = &VAR_3->rxq[VAR_6];

  FUNC_4(&VAR_8->skbq);
  FUNC_0(&VAR_8->napi);
 }

 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 FUNC_3(VAR_2, &VAR_3->flags);

 return 0;
}
