
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {int signal_link; int signals; } ;
struct intel_breadcrumbs {int irq_lock; } ;
struct TYPE_3__ {int flags; } ;
struct i915_request {TYPE_1__ fence; int signal_link; struct intel_context* hw_context; int lock; TYPE_2__* engine; } ;
struct TYPE_4__ {struct intel_breadcrumbs breadcrumbs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct i915_request *VAR_1)
{
 struct intel_breadcrumbs *VAR_2 = &VAR_1->engine->breadcrumbs;

 FUNC_4(&VAR_1->lock);
 FUNC_5();







 FUNC_6(&VAR_2->irq_lock);
 if (FUNC_8(VAR_0, &VAR_1->fence.flags)) {
  struct intel_context *VAR_3 = VAR_1->hw_context;

  FUNC_1(&VAR_1->signal_link);
  if (FUNC_3(&VAR_3->signals))
   FUNC_2(&VAR_3->signal_link);

  FUNC_0(VAR_0, &VAR_1->fence.flags);
 }
 FUNC_7(&VAR_2->irq_lock);
}
