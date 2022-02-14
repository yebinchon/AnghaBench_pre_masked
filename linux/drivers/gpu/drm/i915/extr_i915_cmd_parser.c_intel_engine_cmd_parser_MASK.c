
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_engine_cs {int dummy; } ;
struct i915_gem_context {int jump_whitelist_cmds; int jump_whitelist; } ;
struct TYPE_6__ {int mapping; } ;
struct drm_i915_gem_object {TYPE_3__ mm; } ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_4__ {int fixed; int mask; } ;
struct drm_i915_cmd_descriptor {int flags; TYPE_2__ cmd; TYPE_1__ length; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct i915_gem_context*,int*,int,int,int,int ,int ) ;
 int FUNC_4 (struct intel_engine_cs*,struct drm_i915_cmd_descriptor const*,int*,int) ;
 int* FUNC_5 (struct drm_i915_gem_object*,struct drm_i915_gem_object*,int,int,int*) ;
 int FUNC_6 (void*,int) ;
 struct drm_i915_cmd_descriptor* FUNC_7 (struct intel_engine_cs*,int,struct drm_i915_cmd_descriptor const*,struct drm_i915_cmd_descriptor*) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 int FUNC_9 (struct i915_gem_context*,int) ;
 struct drm_i915_cmd_descriptor VAR_6 ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;

int FUNC_12(struct i915_gem_context *VAR_7,
       struct intel_engine_cs *VAR_8,
       struct drm_i915_gem_object *VAR_9,
       u64 VAR_10,
       u32 VAR_11,
       u32 VAR_12,
       struct drm_i915_gem_object *VAR_13,
       u64 VAR_14)
{
 u32 *VAR_15, *VAR_16, VAR_17 = 0;
 struct drm_i915_cmd_descriptor VAR_18 = VAR_6;
 const struct drm_i915_cmd_descriptor *VAR_19 = &VAR_18;
 bool VAR_20 = 0;
 int VAR_21 = 0;

 VAR_15 = FUNC_5(VAR_13, VAR_9,
    VAR_11, VAR_12,
    &VAR_20);
 if (FUNC_1(VAR_15)) {
  FUNC_0("CMD: Failed to copy batch\n");
  return FUNC_2(VAR_15);
 }

 FUNC_9(VAR_7, VAR_12);






 VAR_16 = VAR_15 + (VAR_12 / sizeof(*VAR_16));
 do {
  u32 VAR_22;

  if (*VAR_15 == VAR_4)
   break;

  VAR_19 = FUNC_7(VAR_8, *VAR_15, VAR_19, &VAR_18);
  if (!VAR_19) {
   FUNC_0("CMD: Unrecognized command: 0x%08X\n",
      *VAR_15);
   VAR_21 = -VAR_2;
   goto err;
  }

  if (VAR_19->flags & VAR_0)
   VAR_22 = VAR_19->length.fixed;
  else
   VAR_22 = ((*VAR_15 & VAR_19->length.mask) + VAR_3);

  if ((VAR_16 - VAR_15) < VAR_22) {
   FUNC_0("CMD: Command length exceeds batch length: 0x%08X length=%u batchlen=%td\n",
      *VAR_15,
      VAR_22,
      VAR_16 - VAR_15);
   VAR_21 = -VAR_2;
   goto err;
  }

  if (!FUNC_4(VAR_8, VAR_19, VAR_15, VAR_22)) {
   VAR_21 = -VAR_1;
   goto err;
  }

  if (VAR_19->cmd.value == VAR_5) {
   VAR_21 = FUNC_3(VAR_7, VAR_15, VAR_17, VAR_22,
         VAR_12, VAR_10,
         VAR_14);

   if (VAR_21)
    goto err;
   break;
  }

  if (VAR_7->jump_whitelist_cmds > VAR_17)
   FUNC_11(VAR_17, VAR_7->jump_whitelist);

  VAR_15 += VAR_22;
  VAR_17 += VAR_22;
  if (VAR_15 >= VAR_16) {
   FUNC_0("CMD: Got to the end of the buffer w/o a BBE cmd!\n");
   VAR_21 = -VAR_2;
   goto err;
  }
 } while (1);

 if (VAR_20) {
  void *VAR_23 = FUNC_10(VAR_13->mm.mapping);

  FUNC_6(VAR_23, (void *)(VAR_15 + 1) - VAR_23);
 }

err:
 FUNC_8(VAR_13);
 return VAR_21;
}
