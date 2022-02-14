
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {TYPE_1__* gt; int (* irq_disable ) (struct intel_engine_cs*) ;} ;
struct TYPE_2__ {int irq_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_engine_cs*) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_0)
{
 if (!VAR_0->irq_disable)
  return;


 FUNC_0(&VAR_0->gt->irq_lock);
 VAR_0->irq_disable(VAR_0);
 FUNC_1(&VAR_0->gt->irq_lock);
}
