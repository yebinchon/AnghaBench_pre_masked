
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_breadcrumbs {int irq_lock; scalar_t__ irq_armed; } ;
struct intel_engine_cs {struct intel_breadcrumbs breadcrumbs; } ;


 int FUNC_0 (struct intel_breadcrumbs*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct intel_engine_cs *VAR_0)
{
 struct intel_breadcrumbs *VAR_1 = &VAR_0->breadcrumbs;
 unsigned long VAR_2;

 if (!VAR_1->irq_armed)
  return;

 FUNC_1(&VAR_1->irq_lock, VAR_2);
 if (VAR_1->irq_armed)
  FUNC_0(VAR_1);
 FUNC_2(&VAR_1->irq_lock, VAR_2);
}
