
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_list_head {int work; int head; } ;
struct TYPE_2__ {int * irq_handler_list_high_tab; struct irq_list_head* irq_handler_list_low_tab; int irq_handler_list_table_lock; } ;
struct amdgpu_device {TYPE_1__ dm; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct amdgpu_device *VAR_2)
{
 int VAR_3;
 struct irq_list_head *VAR_4;

 FUNC_0("DM_IRQ\n");

 FUNC_3(&VAR_2->dm.irq_handler_list_table_lock);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  VAR_4 = &VAR_2->dm.irq_handler_list_low_tab[VAR_3];
  FUNC_1(&VAR_4->head);
  FUNC_2(&VAR_4->work, VAR_1);


  FUNC_1(&VAR_2->dm.irq_handler_list_high_tab[VAR_3]);
 }

 return 0;
}
