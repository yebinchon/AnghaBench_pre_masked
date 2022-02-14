
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {int col_idx; int irq; } ;
struct its_vm {int* vlpi_count; int nr_vpes; struct its_vpe** vpes; } ;
struct its_node {size_t list_nr; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*,int ) ;
 struct irq_data* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct its_node*,struct its_vpe*) ;
 int FUNC_5 (struct its_node*,struct its_vpe*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct its_node *VAR_3, struct its_vm *VAR_4)
{
 unsigned long VAR_5;


 if (!VAR_1)
  return;

 FUNC_6(&VAR_2, VAR_5);





 VAR_4->vlpi_count[VAR_3->list_nr]++;

 if (VAR_4->vlpi_count[VAR_3->list_nr] == 1) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4->nr_vpes; VAR_6++) {
   struct its_vpe *VAR_7 = VAR_4->vpes[VAR_6];
   struct irq_data *VAR_8 = FUNC_3(VAR_7->irq);


   VAR_7->col_idx = FUNC_0(VAR_0);
   FUNC_5(VAR_3, VAR_7, 1);
   FUNC_4(VAR_3, VAR_7);
   FUNC_2(VAR_8, FUNC_1(VAR_7->col_idx));
  }
 }

 FUNC_7(&VAR_2, VAR_5);
}
