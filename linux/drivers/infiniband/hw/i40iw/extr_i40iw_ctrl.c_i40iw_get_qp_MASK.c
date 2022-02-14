
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;
struct i40iw_sc_qp {struct list_head list; } ;


 struct i40iw_sc_qp* FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (struct list_head*) ;

__attribute__((used)) static struct i40iw_sc_qp *FUNC_2(struct list_head *VAR_0, struct i40iw_sc_qp *VAR_1)
{
 struct list_head *VAR_2 = ((void*)0);
 struct list_head *VAR_3;

 if (FUNC_1(VAR_0))
  return ((void*)0);

 if (!VAR_1) {
  VAR_2 = VAR_0->next;
 } else {
  VAR_3 = &VAR_1->list;
  VAR_2 = (VAR_3 != VAR_0) ? VAR_3->next : ((void*)0);
 }

 return FUNC_0(VAR_2);
}
