
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_sseu {int slice_mask; int subslice_mask; } ;
struct intel_engine_cs {struct intel_sseu sseu; } ;
struct intel_context {int dummy; } ;
typedef struct intel_context i915_gem_context ;
struct TYPE_5__ {int struct_mutex; } ;
struct drm_i915_private {int gt; TYPE_2__ drm; struct intel_engine_cs** engine; } ;
typedef struct intel_context drm_i915_gem_object ;
typedef struct intel_context drm_file ;
struct TYPE_4__ {int has_slice_pg; } ;
struct TYPE_6__ {TYPE_1__ sseu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct intel_context*) ;
 int VAR_2 ;
 int FUNC_2 (struct intel_context*) ;
 size_t VAR_3 ;
 TYPE_3__* FUNC_3 (struct drm_i915_private*) ;
 unsigned int VAR_4 ;
 int FUNC_4 (char const*,unsigned int,struct intel_context*,struct intel_context*,struct intel_sseu) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct intel_context*) ;
 struct intel_context* FUNC_7 (struct intel_context*,size_t) ;
 struct intel_context* FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (struct intel_context*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct intel_context*) ;
 int FUNC_14 (struct intel_context*) ;
 int FUNC_15 (struct intel_context*) ;
 struct intel_context* FUNC_16 (struct drm_i915_private*,struct intel_context*) ;
 struct intel_context* FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_i915_private*,struct intel_context*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (char*,char const*,int) ;
 int FUNC_22 (char*,char const*,unsigned int,int,int) ;

__attribute__((used)) static int
FUNC_23(struct drm_i915_private *VAR_5,
        const char *VAR_6,
        unsigned int VAR_7)
{
 struct intel_engine_cs *VAR_8 = VAR_5->engine[VAR_3];
 struct drm_i915_gem_object *VAR_9;
 struct i915_gem_context *VAR_10;
 struct intel_context *VAR_11;
 struct intel_sseu VAR_12;
 struct drm_file *VAR_13;
 int VAR_14;

 if (FUNC_0(VAR_5) < 9 || !VAR_8)
  return 0;

 if (!FUNC_3(VAR_5)->sseu.has_slice_pg)
  return 0;

 if (FUNC_5(VAR_8->sseu.slice_mask) < 2)
  return 0;





 VAR_12 = VAR_8->sseu;
 VAR_12.slice_mask = 1;
 VAR_12.subslice_mask =
  ~(~0 << (FUNC_5(VAR_8->sseu.subslice_mask) / 2));

 FUNC_22("SSEU subtest '%s', flags=%x, def_slices=%u, pg_slices=%u\n",
  VAR_6, VAR_7, FUNC_5(VAR_8->sseu.slice_mask),
  FUNC_5(VAR_12.slice_mask));

 VAR_13 = FUNC_17(VAR_5);
 if (FUNC_1(VAR_13))
  return FUNC_2(VAR_13);

 if (VAR_7 & VAR_4)
  FUNC_11(&VAR_5->gt);

 FUNC_19(&VAR_5->drm.struct_mutex);

 VAR_10 = FUNC_16(VAR_5, VAR_13);
 if (FUNC_1(VAR_10)) {
  VAR_14 = FUNC_2(VAR_10);
  goto out_unlock;
 }
 FUNC_6(VAR_10);

 VAR_9 = FUNC_8(VAR_5, VAR_2);
 if (FUNC_1(VAR_9)) {
  VAR_14 = FUNC_2(VAR_9);
  goto out_unlock;
 }

 VAR_11 = FUNC_7(VAR_10, VAR_3);
 if (FUNC_1(VAR_11)) {
  VAR_14 = FUNC_2(VAR_11);
  goto out_put;
 }

 VAR_14 = FUNC_13(VAR_11);
 if (VAR_14)
  goto out_context;


 VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_11, VAR_9, VAR_8->sseu);
 if (VAR_14)
  goto out_fail;


 VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_11, VAR_9, VAR_12);
 if (VAR_14)
  goto out_fail;


 VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_11, VAR_9, VAR_8->sseu);
 if (VAR_14)
  goto out_fail;


 VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_11, VAR_9, VAR_12);
 if (VAR_14)
  goto out_fail;

out_fail:
 if (FUNC_10(VAR_5, VAR_1))
  VAR_14 = -VAR_0;

 FUNC_15(VAR_11);
out_context:
 FUNC_14(VAR_11);
out_put:
 FUNC_9(VAR_9);

out_unlock:
 FUNC_20(&VAR_5->drm.struct_mutex);

 if (VAR_7 & VAR_4)
  FUNC_12(&VAR_5->gt);

 FUNC_18(VAR_5, VAR_13);

 if (VAR_14)
  FUNC_21("%s: Failed with %d!\n", VAR_6, VAR_14);

 return VAR_14;
}
