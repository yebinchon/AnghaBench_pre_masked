
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_eq_table {int * eq; } ;
struct TYPE_2__ {int num_comp_vectors; int num_aeq_vectors; } ;
struct hns_roce_dev {int irq_workq; TYPE_1__ caps; struct hns_roce_eq_table eq_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hns_roce_dev*,int) ;
 int FUNC_4 (struct hns_roce_dev*,int *) ;
 int FUNC_5 (struct hns_roce_dev*,int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_eq_table *VAR_2 = &VAR_1->eq_table;
 int VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->caps.num_comp_vectors + VAR_1->caps.num_aeq_vectors;


 FUNC_5(VAR_1, VAR_3, VAR_0);

 FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_3(VAR_1, VAR_4);

  FUNC_4(VAR_1, &VAR_2->eq[VAR_4]);
 }

 FUNC_6(VAR_2->eq);

 FUNC_2(VAR_1->irq_workq);
 FUNC_1(VAR_1->irq_workq);
}
