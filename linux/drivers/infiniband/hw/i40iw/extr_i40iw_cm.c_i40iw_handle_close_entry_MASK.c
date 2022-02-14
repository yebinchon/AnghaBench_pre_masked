
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;} ;
struct i40iw_timer_entry {scalar_t__ sqbuf; } ;
struct i40iw_qp {int lock; int ibqp_state; int last_aeq; int hw_iwarp_state; int hw_tcp_state; scalar_t__ cm_id; } ;
struct i40iw_cm_node {struct i40iw_timer_entry* close_entry; struct iw_cm_id* cm_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40iw_qp*) ;
 int FUNC_1 (struct i40iw_cm_node*) ;
 int FUNC_2 (struct i40iw_timer_entry*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct iw_cm_id*) ;

__attribute__((used)) static void FUNC_6(struct i40iw_cm_node *VAR_4, u32 VAR_5)
{
 struct i40iw_timer_entry *VAR_6 = VAR_4->close_entry;
 struct iw_cm_id *VAR_7 = VAR_4->cm_id;
 struct i40iw_qp *VAR_8;
 unsigned long VAR_9;

 if (!VAR_6)
  return;
 VAR_8 = (struct i40iw_qp *)VAR_6->sqbuf;
 if (VAR_8) {
  FUNC_3(&VAR_8->lock, VAR_9);
  if (VAR_8->cm_id) {
   VAR_8->hw_tcp_state = VAR_2;
   VAR_8->hw_iwarp_state = VAR_1;
   VAR_8->last_aeq = VAR_0;
   VAR_8->ibqp_state = VAR_3;
   FUNC_4(&VAR_8->lock, VAR_9);
   FUNC_0(VAR_8);
  } else {
   FUNC_4(&VAR_8->lock, VAR_9);
  }
 } else if (VAR_5) {

  FUNC_1(VAR_4);
 }
 if (VAR_7)
  VAR_7->rem_ref(VAR_7);
 FUNC_2(VAR_6);
 VAR_4->close_entry = ((void*)0);
}
