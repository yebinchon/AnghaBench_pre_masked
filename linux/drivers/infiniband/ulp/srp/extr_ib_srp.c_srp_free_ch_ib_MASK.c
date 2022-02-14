
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct srp_target_port {int queue_size; TYPE_3__* srp_host; scalar_t__ using_rdma_cm; } ;
struct TYPE_5__ {int * cm_id; } ;
struct TYPE_4__ {int * cm_id; } ;
struct srp_rdma_ch {int * tx_ring; int * rx_ring; int * recv_cq; int * send_cq; int * qp; int * target; scalar_t__ fmr_pool; scalar_t__ fr_pool; TYPE_2__ ib_cm; TYPE_1__ rdma_cm; } ;
struct srp_device {scalar_t__ use_fmr; scalar_t__ use_fast_reg; } ;
struct TYPE_6__ {struct srp_device* srp_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct srp_rdma_ch*) ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_8(struct srp_target_port *VAR_0,
      struct srp_rdma_ch *VAR_1)
{
 struct srp_device *VAR_2 = VAR_0->srp_host->srp_dev;
 int VAR_3;

 if (!VAR_1->target)
  return;

 if (VAR_0->using_rdma_cm) {
  if (VAR_1->rdma_cm.cm_id) {
   FUNC_4(VAR_1->rdma_cm.cm_id);
   VAR_1->rdma_cm.cm_id = ((void*)0);
  }
 } else {
  if (VAR_1->ib_cm.cm_id) {
   FUNC_0(VAR_1->ib_cm.cm_id);
   VAR_1->ib_cm.cm_id = ((void*)0);
  }
 }


 if (!VAR_1->qp)
  return;

 if (VAR_2->use_fast_reg) {
  if (VAR_1->fr_pool)
   FUNC_5(VAR_1->fr_pool);
 } else if (VAR_2->use_fmr) {
  if (VAR_1->fmr_pool)
   FUNC_1(VAR_1->fmr_pool);
 }

 FUNC_6(VAR_1);
 FUNC_2(VAR_1->send_cq);
 FUNC_2(VAR_1->recv_cq);







 VAR_1->target = ((void*)0);

 VAR_1->qp = ((void*)0);
 VAR_1->send_cq = VAR_1->recv_cq = ((void*)0);

 if (VAR_1->rx_ring) {
  for (VAR_3 = 0; VAR_3 < VAR_0->queue_size; ++VAR_3)
   FUNC_7(VAR_0->srp_host, VAR_1->rx_ring[VAR_3]);
  FUNC_3(VAR_1->rx_ring);
  VAR_1->rx_ring = ((void*)0);
 }
 if (VAR_1->tx_ring) {
  for (VAR_3 = 0; VAR_3 < VAR_0->queue_size; ++VAR_3)
   FUNC_7(VAR_0->srp_host, VAR_1->tx_ring[VAR_3]);
  FUNC_3(VAR_1->tx_ring);
  VAR_1->tx_ring = ((void*)0);
 }
}
