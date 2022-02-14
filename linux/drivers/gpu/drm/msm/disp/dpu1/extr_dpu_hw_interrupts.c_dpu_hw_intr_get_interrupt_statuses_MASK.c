
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dpu_hw_intr {int* save_irq_status; int irq_lock; int hw; } ;
struct TYPE_3__ {int clr_off; int en_off; int status_off; } ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct dpu_hw_intr *VAR_1)
{
 int VAR_2;
 u32 VAR_3;
 unsigned long VAR_4;

 if (!VAR_1)
  return;

 FUNC_3(&VAR_1->irq_lock, VAR_4);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {

  VAR_1->save_irq_status[VAR_2] = FUNC_1(&VAR_1->hw,
    VAR_0[VAR_2].status_off);


  VAR_3 = FUNC_1(&VAR_1->hw, VAR_0[VAR_2].en_off);


  if (VAR_1->save_irq_status[VAR_2])
   FUNC_2(&VAR_1->hw, VAR_0[VAR_2].clr_off,
     VAR_1->save_irq_status[VAR_2]);


  VAR_1->save_irq_status[VAR_2] &= VAR_3;
 }


 FUNC_5();

 FUNC_4(&VAR_1->irq_lock, VAR_4);
}
