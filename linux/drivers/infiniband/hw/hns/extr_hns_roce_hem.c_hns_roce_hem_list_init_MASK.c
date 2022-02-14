
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_hem_list {int bt_pg_shift; int ** mid_bt; int btm_bt; int root_bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct hns_roce_hem_list *VAR_2,
       int VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(&VAR_2->root_bt);
 FUNC_0(&VAR_2->btm_bt);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   FUNC_0(&VAR_2->mid_bt[VAR_4][VAR_5]);

 VAR_2->bt_pg_shift = VAR_3;
}
