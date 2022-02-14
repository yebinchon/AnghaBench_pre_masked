
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {int pin_count; } ;
struct i915_execbuffer {TYPE_2__* i915; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct intel_context*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct i915_execbuffer *VAR_0, struct intel_context *VAR_1)
{
 if (FUNC_2(FUNC_0(&VAR_1->pin_count, -1, 1)))
  return;

 FUNC_3(&VAR_0->i915->drm.struct_mutex);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_0->i915->drm.struct_mutex);
}
