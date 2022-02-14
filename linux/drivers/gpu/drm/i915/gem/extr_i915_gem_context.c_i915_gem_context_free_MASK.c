
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gem_context {int mutex; int link; int pid; int name; scalar_t__ timeline; int jump_whitelist; int engines_mutex; int engines; scalar_t__ vm; TYPE_2__* i915; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_gem_context*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i915_gem_context*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct i915_gem_context*) ;

__attribute__((used)) static void FUNC_13(struct i915_gem_context *VAR_1)
{
 FUNC_8(&VAR_1->i915->drm.struct_mutex);
 FUNC_0(!FUNC_2(VAR_1));

 FUNC_12(VAR_1);
 if (VAR_1->vm)
  FUNC_3(VAR_1->vm);

 FUNC_1(FUNC_11(VAR_1->engines));
 FUNC_9(&VAR_1->engines_mutex);

 FUNC_5(VAR_1->jump_whitelist);

 if (VAR_1->timeline)
  FUNC_4(VAR_1->timeline);

 FUNC_5(VAR_1->name);
 FUNC_10(VAR_1->pid);

 FUNC_7(&VAR_1->link);
 FUNC_9(&VAR_1->mutex);

 FUNC_6(VAR_1, VAR_0);
}
