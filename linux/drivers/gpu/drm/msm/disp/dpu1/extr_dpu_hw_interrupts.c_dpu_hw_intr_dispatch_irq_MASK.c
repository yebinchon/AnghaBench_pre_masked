
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* clear_intr_status_nolock ) (struct dpu_hw_intr*,int) ;} ;
struct dpu_hw_intr {int* save_irq_status; int irq_lock; TYPE_1__ ops; } ;
struct TYPE_6__ {int irq_mask; int reg_idx; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct dpu_hw_intr*,int) ;

__attribute__((used)) static void FUNC_4(struct dpu_hw_intr *VAR_2,
  void (*VAR_3)(void *, int),
  void *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 u32 VAR_9;
 unsigned long VAR_10;

 if (!VAR_2)
  return;






 FUNC_1(&VAR_2->irq_lock, VAR_10);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_9 = VAR_2->save_irq_status[VAR_5];





  VAR_7 = VAR_5 * 32;
  VAR_8 = VAR_7 + 32;

  if (VAR_7 >= FUNC_0(VAR_1) ||
    VAR_8 > FUNC_0(VAR_1))
   continue;






  for (VAR_6 = VAR_7;
    (VAR_6 < VAR_8) && VAR_9;
    VAR_6++)
   if ((VAR_9 & VAR_1[VAR_6].irq_mask) &&
    (VAR_1[VAR_6].reg_idx == VAR_5)) {







    if (VAR_3)
     VAR_3(VAR_4, VAR_6);
    else
     VAR_2->ops.clear_intr_status_nolock(
       VAR_2, VAR_6);






    VAR_9 &= ~VAR_1[VAR_6].irq_mask;
   }
 }
 FUNC_2(&VAR_2->irq_lock, VAR_10);
}
