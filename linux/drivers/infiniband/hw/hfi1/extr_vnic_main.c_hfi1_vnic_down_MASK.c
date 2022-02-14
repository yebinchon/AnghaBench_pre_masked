
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct hfi1_vnic_vport_info {size_t num_rx_q; struct hfi1_vnic_rx_queue* rxq; int vesw_id; int netdev; int flags; struct hfi1_devdata* dd; } ;
struct hfi1_vnic_rx_queue {int skbq; int napi; } ;
struct TYPE_2__ {int vesws; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct hfi1_vnic_vport_info *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;
 u8 VAR_3;

 FUNC_0(VAR_0, &VAR_1->flags);
 FUNC_3(VAR_1->netdev);
 FUNC_4(VAR_1->netdev);
 FUNC_6(&VAR_2->vnic.vesws, VAR_1->vesw_id);


 FUNC_1(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_1->num_rx_q; VAR_3++) {
  struct hfi1_vnic_rx_queue *VAR_4 = &VAR_1->rxq[VAR_3];

  FUNC_2(&VAR_4->napi);
  FUNC_5(&VAR_4->skbq);
 }
}
