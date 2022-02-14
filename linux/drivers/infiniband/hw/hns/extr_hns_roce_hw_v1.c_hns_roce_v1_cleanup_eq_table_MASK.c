
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_eq_table {struct hns_roce_dev* eq; struct hns_roce_dev* eqc_base; } ;
struct TYPE_2__ {int num_comp_vectors; int num_aeq_vectors; int num_other_vectors; } ;
struct hns_roce_dev {int * irq; TYPE_1__ caps; struct hns_roce_eq_table eq_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct hns_roce_dev*) ;
 int FUNC_1 (struct hns_roce_dev*,int,int ) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_dev*) ;
 int FUNC_3 (struct hns_roce_dev*) ;

__attribute__((used)) static void FUNC_4(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_eq_table *VAR_2 = &VAR_1->eq_table;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->caps.num_comp_vectors + VAR_1->caps.num_aeq_vectors;
 VAR_3 = VAR_4 + VAR_1->caps.num_other_vectors;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {

  FUNC_1(VAR_1, VAR_5, VAR_0);

  FUNC_0(VAR_1->irq[VAR_5], &VAR_2->eq[VAR_5]);

  FUNC_2(VAR_1, &VAR_2->eq[VAR_5]);
 }
 for (VAR_5 = VAR_4; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(VAR_1->irq[VAR_5], VAR_1);

 FUNC_3(VAR_2->eqc_base);
 FUNC_3(VAR_2->eq);
}
