
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {TYPE_1__* i915; int uncore; int irq_enable_mask; } ;
struct TYPE_2__ {int irq_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct intel_engine_cs *VAR_1)
{
 VAR_1->i915->irq_mask |= VAR_1->irq_enable_mask;
 FUNC_0(VAR_1->uncore, VAR_0, VAR_1->i915->irq_mask);
}
