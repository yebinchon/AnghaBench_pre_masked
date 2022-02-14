
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_list_head {int work; } ;
struct TYPE_2__ {struct irq_list_head* irq_handler_list_low_tab; } ;
struct amdgpu_device {TYPE_1__ dm; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,unsigned long) ;
 int FUNC_1 (struct amdgpu_device*,unsigned long) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct amdgpu_device *VAR_1)
{
 int VAR_2;
 struct irq_list_head *VAR_3;
 unsigned long VAR_4;
 FUNC_2("DM_IRQ: releasing resources.\n");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1, VAR_4);



  VAR_3 = &VAR_1->dm.irq_handler_list_low_tab[VAR_2];
  FUNC_1(VAR_1, VAR_4);
  FUNC_3(&VAR_3->work);
 }
}
