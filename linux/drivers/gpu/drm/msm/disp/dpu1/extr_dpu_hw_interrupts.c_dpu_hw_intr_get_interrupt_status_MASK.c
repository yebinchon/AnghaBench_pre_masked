
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct dpu_hw_intr {int irq_lock; int hw; } ;
struct TYPE_5__ {int clr_off; int status_off; } ;
struct TYPE_4__ {int reg_idx; int irq_mask; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;

__attribute__((used)) static u32 FUNC_7(struct dpu_hw_intr *VAR_2,
  int VAR_3, bool VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;

 if (!VAR_2)
  return 0;

 if (VAR_3 >= FUNC_0(VAR_1) || VAR_3 < 0) {
  FUNC_3("invalid IRQ index: [%d]\n", VAR_3);
  return 0;
 }

 FUNC_4(&VAR_2->irq_lock, VAR_6);

 VAR_5 = VAR_1[VAR_3].reg_idx;
 VAR_7 = FUNC_1(&VAR_2->hw,
   VAR_0[VAR_5].status_off) &
     VAR_1[VAR_3].irq_mask;
 if (VAR_7 && VAR_4)
  FUNC_2(&VAR_2->hw, VAR_0[VAR_5].clr_off,
    VAR_7);


 FUNC_6();

 FUNC_5(&VAR_2->irq_lock, VAR_6);

 return VAR_7;
}
