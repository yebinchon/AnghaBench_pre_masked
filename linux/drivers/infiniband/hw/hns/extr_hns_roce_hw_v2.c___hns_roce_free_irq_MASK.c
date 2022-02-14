
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct hns_roce_dev* eq; } ;
struct TYPE_3__ {int num_comp_vectors; int num_aeq_vectors; int num_other_vectors; } ;
struct hns_roce_dev {int * irq_names; TYPE_2__ eq_table; int *** irq; TYPE_1__ caps; } ;


 int FUNC_0 (int **,struct hns_roce_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->caps.num_comp_vectors + VAR_0->caps.num_aeq_vectors;
 VAR_1 = VAR_2 + VAR_0->caps.num_other_vectors;

 for (VAR_3 = 0; VAR_3 < VAR_0->caps.num_other_vectors; VAR_3++)
  FUNC_0(VAR_0->irq[VAR_3], VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(*VAR_0->eq_table.eq[VAR_3].irq, &VAR_0->eq_table.eq[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1(VAR_0->irq_names[VAR_3]);
}
