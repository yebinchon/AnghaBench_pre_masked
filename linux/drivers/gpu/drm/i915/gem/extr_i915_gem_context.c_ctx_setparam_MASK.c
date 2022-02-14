
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int priority; } ;
struct i915_gem_context {TYPE_3__ sched; TYPE_2__* i915; int user_flags; } ;
struct drm_i915_gem_context_param {int param; int size; int value; } ;
struct drm_i915_file_private {int dummy; } ;
typedef int s64 ;
struct TYPE_4__ {int scheduler; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct i915_gem_context*) ;
 int FUNC_4 (struct i915_gem_context*) ;
 int FUNC_5 (struct i915_gem_context*) ;
 int FUNC_6 (struct i915_gem_context*) ;
 int FUNC_7 (struct i915_gem_context*) ;
 int FUNC_8 (struct i915_gem_context*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct i915_gem_context*,struct drm_i915_gem_context_param*) ;
 int FUNC_11 (struct drm_i915_file_private*,struct i915_gem_context*,struct drm_i915_gem_context_param*) ;
 int FUNC_12 (struct i915_gem_context*,struct drm_i915_gem_context_param*) ;

__attribute__((used)) static int FUNC_13(struct drm_i915_file_private *VAR_10,
   struct i915_gem_context *VAR_11,
   struct drm_i915_gem_context_param *VAR_12)
{
 int VAR_13 = 0;

 switch (VAR_12->param) {
 case 132:
  if (VAR_12->size)
   VAR_13 = -VAR_2;
  else if (VAR_12->value)
   FUNC_9(VAR_9, &VAR_11->user_flags);
  else
   FUNC_2(VAR_9, &VAR_11->user_flags);
  break;

 case 133:
  if (VAR_12->size)
   VAR_13 = -VAR_2;
  else if (VAR_12->value)
   FUNC_7(VAR_11);
  else
   FUNC_4(VAR_11);
  break;

 case 136:
  if (VAR_12->size)
   VAR_13 = -VAR_2;
  else if (!FUNC_1(VAR_0) && !VAR_12->value)
   VAR_13 = -VAR_4;
  else if (VAR_12->value)
   FUNC_6(VAR_11);
  else
   FUNC_3(VAR_11);
  break;

 case 130:
  if (VAR_12->size)
   VAR_13 = -VAR_2;
  else if (VAR_12->value)
   FUNC_8(VAR_11);
  else
   FUNC_5(VAR_11);
  break;

 case 131:
  {
   s64 VAR_14 = VAR_12->value;

   if (VAR_12->size)
    VAR_13 = -VAR_2;
   else if (!(VAR_11->i915->caps.scheduler & VAR_8))
    VAR_13 = -VAR_3;
   else if (VAR_14 > VAR_6 ||
     VAR_14 < VAR_7)
    VAR_13 = -VAR_2;
   else if (VAR_14 > VAR_5 &&
     !FUNC_1(VAR_1))
    VAR_13 = -VAR_4;
   else
    VAR_11->sched.priority =
     FUNC_0(VAR_14);
  }
  break;

 case 129:
  VAR_13 = FUNC_12(VAR_11, VAR_12);
  break;

 case 128:
  VAR_13 = FUNC_11(VAR_10, VAR_11, VAR_12);
  break;

 case 134:
  VAR_13 = FUNC_10(VAR_11, VAR_12);
  break;

 case 135:
 default:
  VAR_13 = -VAR_2;
  break;
 }

 return VAR_13;
}
