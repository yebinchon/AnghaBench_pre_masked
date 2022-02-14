
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_breadcrumbs {int irq_lock; scalar_t__ irq_enabled; } ;
struct intel_engine_cs {struct intel_breadcrumbs breadcrumbs; } ;


 int FUNC_0 (struct intel_engine_cs*) ;
 int FUNC_1 (struct intel_engine_cs*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct intel_engine_cs *VAR_0)
{
 struct intel_breadcrumbs *VAR_1 = &VAR_0->breadcrumbs;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->irq_lock, VAR_2);

 if (VAR_1->irq_enabled)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);

 FUNC_3(&VAR_1->irq_lock, VAR_2);
}
