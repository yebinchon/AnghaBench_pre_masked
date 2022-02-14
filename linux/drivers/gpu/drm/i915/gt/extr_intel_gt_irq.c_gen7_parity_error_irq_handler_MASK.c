
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_gt {TYPE_2__* i915; int irq_lock; } ;
struct TYPE_4__ {int which_slice; int error_work; } ;
struct TYPE_5__ {TYPE_1__ l3_parity; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct intel_gt*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct intel_gt *VAR_2, u32 VAR_3)
{
 if (!FUNC_1(VAR_2->i915))
  return;

 FUNC_4(&VAR_2->irq_lock);
 FUNC_2(VAR_2, FUNC_0(VAR_2->i915));
 FUNC_5(&VAR_2->irq_lock);

 if (VAR_3 & VAR_1)
  VAR_2->i915->l3_parity.which_slice |= 1 << 1;

 if (VAR_3 & VAR_0)
  VAR_2->i915->l3_parity.which_slice |= 1 << 0;

 FUNC_3(&VAR_2->i915->l3_parity.error_work);
}
