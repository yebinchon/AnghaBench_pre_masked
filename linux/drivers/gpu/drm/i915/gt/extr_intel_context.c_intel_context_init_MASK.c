
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_engine_cs {int sseu; scalar_t__ cops; TYPE_2__* gt; } ;
struct intel_context {int active; int pin_mutex; int signals; int signal_link; int ring; int sseu; scalar_t__ ops; struct intel_engine_cs* engine; int timeline; int vm; struct i915_gem_context* gem_context; int ref; } ;
struct i915_gem_context {int i915; scalar_t__ timeline; scalar_t__ vm; } ;
struct TYPE_4__ {TYPE_1__* ggtt; } ;
struct TYPE_3__ {int vm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct intel_context *VAR_3,
     struct i915_gem_context *VAR_4,
     struct intel_engine_cs *VAR_5)
{
 FUNC_0(!VAR_5->cops);

 FUNC_6(&VAR_3->ref);

 VAR_3->gem_context = VAR_4;
 VAR_3->vm = FUNC_4(VAR_4->vm ?: &VAR_5->gt->ggtt->vm);
 if (VAR_4->timeline)
  VAR_3->timeline = FUNC_5(VAR_4->timeline);

 VAR_3->engine = VAR_5;
 VAR_3->ops = VAR_5->cops;
 VAR_3->sseu = VAR_5->sseu;
 VAR_3->ring = FUNC_2(VAR_0);

 FUNC_1(&VAR_3->signal_link);
 FUNC_1(&VAR_3->signals);

 FUNC_7(&VAR_3->pin_mutex);

 FUNC_3(VAR_4->i915, &VAR_3->active,
    VAR_1, VAR_2);
}
