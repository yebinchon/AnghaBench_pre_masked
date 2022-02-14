
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_hw_intr {int hw; } ;
struct TYPE_4__ {int clr_off; } ;
struct TYPE_3__ {int reg_idx; int irq_mask; } ;


 int FUNC_0 (int *,int ,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_intr *VAR_2,
  int VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = VAR_1[VAR_3].reg_idx;
 FUNC_0(&VAR_2->hw, VAR_0[VAR_4].clr_off,
   VAR_1[VAR_3].irq_mask);


 FUNC_1();
}
