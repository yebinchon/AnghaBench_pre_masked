
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {int tid_full_list; int tid_used_list; int tid_group_list; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hfi1_ctxtdata *VAR_0)
{
 FUNC_0(&VAR_0->tid_group_list);
 FUNC_0(&VAR_0->tid_used_list);
 FUNC_0(&VAR_0->tid_full_list);
}
