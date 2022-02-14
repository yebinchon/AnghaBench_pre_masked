
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_hem_list {scalar_t__ root_ba; int btm_bt; int root_bt; int ** mid_bt; } ;
struct hns_roce_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hns_roce_dev*,int *,int) ;

void FUNC_2(struct hns_roce_dev *VAR_2,
          struct hns_roce_hem_list *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   FUNC_1(VAR_2, &VAR_3->mid_bt[VAR_4][VAR_5],
       VAR_5 != 0);

 FUNC_1(VAR_2, &VAR_3->root_bt, 1);
 FUNC_0(&VAR_3->btm_bt);
 VAR_3->root_ba = 0;
}
