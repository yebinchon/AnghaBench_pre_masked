
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iowait_work {int tx_head; } ;
struct hfi1_vnic_vport_info {int num_tx_q; TYPE_1__* dd; struct hfi1_vnic_sdma* sdma; } ;
struct TYPE_6__ {int list; scalar_t__ num_desc; } ;
struct hfi1_vnic_sdma {int q_idx; TYPE_3__ stx; int wait; TYPE_2__* sde; int state; struct hfi1_vnic_vport_info* vinfo; TYPE_1__* dd; } ;
struct TYPE_5__ {scalar_t__ descq_cnt; } ;
struct TYPE_4__ {TYPE_2__* per_sdma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct iowait_work* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int *,int ,int ,int *,int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct hfi1_vnic_vport_info *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_tx_q; VAR_5++) {
  struct hfi1_vnic_sdma *VAR_6 = &VAR_4->sdma[VAR_5];

  FUNC_2(&VAR_6->wait, 0, ((void*)0), ((void*)0),
       VAR_2,
       VAR_3, ((void*)0), ((void*)0));
  VAR_6->sde = &VAR_4->dd->per_sdma[VAR_5];
  VAR_6->dd = VAR_4->dd;
  VAR_6->vinfo = VAR_4;
  VAR_6->q_idx = VAR_5;
  VAR_6->state = VAR_1;


  if (VAR_6->sde->descq_cnt > VAR_0) {
   struct iowait_work *VAR_7;

   FUNC_0(&VAR_6->stx.list);
   VAR_6->stx.num_desc = VAR_0;
   VAR_7 = FUNC_1(&VAR_6->wait);
   FUNC_3(&VAR_6->stx.list, &VAR_7->tx_head);
  }
 }
}
