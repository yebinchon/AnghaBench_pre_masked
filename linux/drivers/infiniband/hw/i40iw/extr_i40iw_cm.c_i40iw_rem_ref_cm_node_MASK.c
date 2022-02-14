
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_qp {int ibqp; int * cm_node; } ;
struct i40iw_cm_node {struct i40iw_cm_core* cm_core; scalar_t__ qhash_set; int iwdev; struct i40iw_qp* iwqp; scalar_t__ apbvt_set; int loc_port; TYPE_1__* listener; scalar_t__ close_entry; scalar_t__ accept_pend; int accelerated; int list; int ref_count; } ;
struct i40iw_cm_info {int dummy; } ;
struct i40iw_cm_core {int stats_nodes_destroyed; int ht_lock; } ;
struct TYPE_2__ {int pend_accepts_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct i40iw_cm_core*,TYPE_1__*,int ,int) ;
 int FUNC_3 (struct i40iw_cm_node*,struct i40iw_cm_info*) ;
 int FUNC_4 (struct i40iw_cm_node*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,struct i40iw_cm_info*,int ,int ,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct i40iw_cm_node*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct i40iw_cm_node *VAR_3)
{
 struct i40iw_cm_core *VAR_4 = VAR_3->cm_core;
 struct i40iw_qp *VAR_5;
 struct i40iw_cm_info VAR_6;
 unsigned long VAR_7;

 FUNC_11(&VAR_3->cm_core->ht_lock, VAR_7);
 if (FUNC_1(&VAR_3->ref_count)) {
  FUNC_12(&VAR_3->cm_core->ht_lock, VAR_7);
  return;
 }
 FUNC_9(&VAR_3->list);
 FUNC_12(&VAR_3->cm_core->ht_lock, VAR_7);


 if (!VAR_3->accelerated && VAR_3->accept_pend) {
  FUNC_10("node destroyed before established\n");
  FUNC_0(&VAR_3->listener->pend_accepts_cnt);
 }
 if (VAR_3->close_entry)
  FUNC_4(VAR_3, 0);
 if (VAR_3->listener) {
  FUNC_2(VAR_4, VAR_3->listener, 0, 1);
 } else {
  if (VAR_3->apbvt_set) {
   FUNC_5(VAR_3->iwdev,
        VAR_3->loc_port,
        VAR_0);
   VAR_3->apbvt_set = 0;
  }
  FUNC_3(VAR_3, &VAR_6);
  if (VAR_3->qhash_set) {
   FUNC_6(VAR_3->iwdev,
        &VAR_6,
        VAR_2,
        VAR_1,
        ((void*)0),
        0);
   VAR_3->qhash_set = 0;
  }
 }

 VAR_5 = VAR_3->iwqp;
 if (VAR_5) {
  VAR_5->cm_node = ((void*)0);
  FUNC_7(&VAR_5->ibqp);
  VAR_3->iwqp = ((void*)0);
 } else if (VAR_3->qhash_set) {
  FUNC_3(VAR_3, &VAR_6);
  FUNC_6(VAR_3->iwdev,
       &VAR_6,
       VAR_2,
       VAR_1,
       ((void*)0),
       0);
  VAR_3->qhash_set = 0;
 }

 VAR_3->cm_core->stats_nodes_destroyed++;
 FUNC_8(VAR_3);
}
