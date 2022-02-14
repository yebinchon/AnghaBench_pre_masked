
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_ucontext {int qp_reg_mem_list_lock; int cq_reg_mem_list_lock; } ;
struct i40iw_pbl {int on_list; int list; } ;
struct i40iw_mr {int type; struct i40iw_pbl iwpbl; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct i40iw_mr *VAR_0,
         struct i40iw_ucontext *VAR_1)
{
 struct i40iw_pbl *VAR_2 = &VAR_0->iwpbl;
 unsigned long VAR_3;

 switch (VAR_0->type) {
 case 129:
  FUNC_1(&VAR_1->cq_reg_mem_list_lock, VAR_3);
  if (VAR_2->on_list) {
   VAR_2->on_list = 0;
   FUNC_0(&VAR_2->list);
  }
  FUNC_2(&VAR_1->cq_reg_mem_list_lock, VAR_3);
  break;
 case 128:
  FUNC_1(&VAR_1->qp_reg_mem_list_lock, VAR_3);
  if (VAR_2->on_list) {
   VAR_2->on_list = 0;
   FUNC_0(&VAR_2->list);
  }
  FUNC_2(&VAR_1->qp_reg_mem_list_lock, VAR_3);
  break;
 default:
  break;
 }
}
