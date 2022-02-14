
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int priority; } ;
struct i915_gem_context {TYPE_6__ sched; TYPE_1__* vm; int user_flags; } ;
struct drm_i915_gem_context_param {int param; int value; int size; int ctx_id; } ;
struct drm_i915_file_private {int dummy; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;
struct TYPE_11__ {int total; } ;
struct TYPE_12__ {TYPE_4__ vm; TYPE_3__* alias; } ;
struct TYPE_14__ {TYPE_5__ ggtt; } ;
struct TYPE_9__ {int total; } ;
struct TYPE_10__ {TYPE_2__ vm; } ;
struct TYPE_8__ {int total; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i915_gem_context*,struct drm_i915_gem_context_param*) ;
 int FUNC_1 (struct drm_i915_file_private*,struct i915_gem_context*,struct drm_i915_gem_context_param*) ;
 int FUNC_2 (struct i915_gem_context*,struct drm_i915_gem_context_param*) ;
 int FUNC_3 (struct i915_gem_context*) ;
 int FUNC_4 (struct i915_gem_context*) ;
 struct i915_gem_context* FUNC_5 (struct drm_i915_file_private*,int ) ;
 int FUNC_6 (struct i915_gem_context*) ;
 int FUNC_7 (struct i915_gem_context*) ;
 int FUNC_8 (int ,int *) ;
 TYPE_7__* FUNC_9 (struct drm_device*) ;

int FUNC_10(struct drm_device *VAR_4, void *VAR_5,
        struct drm_file *VAR_6)
{
 struct drm_i915_file_private *VAR_7 = VAR_6->driver_priv;
 struct drm_i915_gem_context_param *VAR_8 = VAR_5;
 struct i915_gem_context *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_5(VAR_7, VAR_8->ctx_id);
 if (!VAR_9)
  return -VAR_1;

 switch (VAR_8->param) {
 case 132:
  VAR_8->size = 0;
  VAR_8->value = FUNC_8(VAR_3, &VAR_9->user_flags);
  break;

 case 134:
  VAR_8->size = 0;
  if (VAR_9->vm)
   VAR_8->value = VAR_9->vm->total;
  else if (FUNC_9(VAR_4)->ggtt.alias)
   VAR_8->value = FUNC_9(VAR_4)->ggtt.alias->vm.total;
  else
   VAR_8->value = FUNC_9(VAR_4)->ggtt.vm.total;
  break;

 case 133:
  VAR_8->size = 0;
  VAR_8->value = FUNC_6(VAR_9);
  break;

 case 137:
  VAR_8->size = 0;
  VAR_8->value = FUNC_3(VAR_9);
  break;

 case 130:
  VAR_8->size = 0;
  VAR_8->value = FUNC_4(VAR_9);
  break;

 case 131:
  VAR_8->size = 0;
  VAR_8->value = VAR_9->sched.priority >> VAR_2;
  break;

 case 129:
  VAR_10 = FUNC_2(VAR_9, VAR_8);
  break;

 case 128:
  VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_8);
  break;

 case 135:
  VAR_10 = FUNC_0(VAR_9, VAR_8);
  break;

 case 136:
 default:
  VAR_10 = -VAR_0;
  break;
 }

 FUNC_7(VAR_9);
 return VAR_10;
}
