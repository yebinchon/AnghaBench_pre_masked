
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_timeline {int hwsp_offset; TYPE_3__* gt; } ;
struct intel_engine_cs {int kernel_context; } ;
struct i915_request {int dummy; } ;
struct TYPE_6__ {TYPE_2__* i915; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct TYPE_5__ {TYPE_1__ drm; } ;


 struct i915_request* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*,int ,int ) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (int ) ;
 int FUNC_5 (struct intel_timeline*) ;
 int FUNC_6 (struct intel_timeline*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static struct i915_request *
FUNC_9(struct intel_timeline *VAR_0, struct intel_engine_cs *VAR_1, u32 VAR_2)
{
 struct i915_request *VAR_3;
 int VAR_4;

 FUNC_7(&VAR_0->gt->i915->drm.struct_mutex);

 VAR_4 = FUNC_5(VAR_0);
 if (VAR_4) {
  VAR_3 = FUNC_0(VAR_4);
  goto out;
 }

 VAR_3 = FUNC_4(VAR_1->kernel_context);
 if (FUNC_1(VAR_3))
  goto out_unpin;

 VAR_4 = FUNC_2(VAR_3, VAR_0->hwsp_offset, VAR_2);
 FUNC_3(VAR_3);
 if (VAR_4)
  VAR_3 = FUNC_0(VAR_4);

out_unpin:
 FUNC_6(VAR_0);
out:
 if (FUNC_1(VAR_3))
  FUNC_8("Failed to write to timeline!\n");
 return VAR_3;
}
