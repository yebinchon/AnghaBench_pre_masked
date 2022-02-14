
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_breadcrumbs {int irq_work; int signalers; int irq_lock; } ;
struct intel_engine_cs {struct intel_breadcrumbs breadcrumbs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct intel_engine_cs *VAR_1)
{
 struct intel_breadcrumbs *VAR_2 = &VAR_1->breadcrumbs;

 FUNC_2(&VAR_2->irq_lock);
 FUNC_0(&VAR_2->signalers);

 FUNC_1(&VAR_2->irq_work, VAR_0);
}
