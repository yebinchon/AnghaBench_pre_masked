
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gem_context {int user_flags; scalar_t__ vm; } ;
struct i915_execbuffer {int context_flags; int invalid_flags; struct i915_gem_context* gem_context; TYPE_2__* args; TYPE_1__* file; } ;
struct TYPE_4__ {int rsvd1; } ;
struct TYPE_3__ {int driver_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i915_gem_context* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i915_execbuffer *VAR_4)
{
 struct i915_gem_context *VAR_5;

 VAR_5 = FUNC_0(VAR_4->file->driver_priv, VAR_4->args->rsvd1);
 if (FUNC_2(!VAR_5))
  return -VAR_0;

 VAR_4->gem_context = VAR_5;
 if (VAR_5->vm)
  VAR_4->invalid_flags |= VAR_1;

 VAR_4->context_flags = 0;
 if (FUNC_1(VAR_2, &VAR_5->user_flags))
  VAR_4->context_flags |= VAR_3;

 return 0;
}
