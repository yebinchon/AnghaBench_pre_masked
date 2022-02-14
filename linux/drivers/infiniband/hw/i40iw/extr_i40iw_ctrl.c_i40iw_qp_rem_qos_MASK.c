
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_vsi {TYPE_1__* qos; } ;
struct i40iw_sc_qp {size_t user_pri; int list; int on_qoslist; struct i40iw_sc_vsi* vsi; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct i40iw_sc_qp *VAR_0)
{
 struct i40iw_sc_vsi *VAR_1 = VAR_0->vsi;
 unsigned long VAR_2;

 if (!VAR_0->on_qoslist)
  return;
 FUNC_1(&VAR_1->qos[VAR_0->user_pri].lock, VAR_2);
 FUNC_0(&VAR_0->list);
 FUNC_2(&VAR_1->qos[VAR_0->user_pri].lock, VAR_2);
}
