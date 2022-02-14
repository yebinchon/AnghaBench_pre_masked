
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_plane {int pipe; int i9xx_plane; int base; void* check_plane; void* get_hw_state; void* disable_plane; void* update_plane; void* max_stride; int frontbuffer_bit; scalar_t__ has_fbc; int id; } ;
struct intel_fbc {int possible_framebuffer_bits; } ;
struct drm_plane_funcs {int dummy; } ;
struct drm_i915_private {int drm; struct intel_fbc fbc; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct intel_plane* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct intel_plane*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,unsigned int,unsigned int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,unsigned int,struct drm_plane_funcs const*,int const*,int,int const*,int ,char*,int ) ;
 struct drm_plane_funcs VAR_6 ;
 int * VAR_7 ;
 struct drm_plane_funcs VAR_8 ;
 int * VAR_9 ;
 void* VAR_10 ;
 int * VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ FUNC_12 (struct drm_i915_private*,int) ;
 void* VAR_14 ;
 void* VAR_15 ;
 struct intel_plane* FUNC_13 () ;
 int FUNC_14 (struct intel_plane*) ;
 int VAR_16 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 struct intel_plane* FUNC_17 (struct drm_i915_private*,int,int ) ;

__attribute__((used)) static struct intel_plane *
FUNC_18(struct drm_i915_private *VAR_17, enum pipe VAR_18)
{
 struct intel_plane *VAR_19;
 const struct drm_plane_funcs *VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 const u64 *VAR_23;
 const u32 *VAR_24;
 int VAR_25;
 int VAR_26;

 if (FUNC_5(VAR_17) >= 9)
  return FUNC_17(VAR_17, VAR_18,
        VAR_5);

 VAR_19 = FUNC_13();
 if (FUNC_7(VAR_19))
  return VAR_19;

 VAR_19->pipe = VAR_18;




 if (FUNC_3(VAR_17) && FUNC_5(VAR_17) < 4)
  VAR_19->i9xx_plane = (enum i9xx_plane_id) !VAR_18;
 else
  VAR_19->i9xx_plane = (enum i9xx_plane_id) VAR_18;
 VAR_19->id = VAR_5;
 VAR_19->frontbuffer_bit = FUNC_4(VAR_18, VAR_19->id);

 VAR_19->has_fbc = FUNC_12(VAR_17, VAR_19->i9xx_plane);
 if (VAR_19->has_fbc) {
  struct intel_fbc *VAR_27 = &VAR_17->fbc;

  VAR_27->possible_framebuffer_bits |= VAR_19->frontbuffer_bit;
 }

 if (FUNC_5(VAR_17) >= 4) {
  VAR_24 = VAR_9;
  VAR_25 = FUNC_0(VAR_9);
  VAR_23 = VAR_11;

  VAR_19->max_stride = VAR_14;
  VAR_19->update_plane = VAR_15;
  VAR_19->disable_plane = VAR_10;
  VAR_19->get_hw_state = VAR_13;
  VAR_19->check_plane = VAR_12;

  VAR_20 = &VAR_8;
 } else {
  VAR_24 = VAR_7;
  VAR_25 = FUNC_0(VAR_7);
  VAR_23 = VAR_11;

  VAR_19->max_stride = VAR_14;
  VAR_19->update_plane = VAR_15;
  VAR_19->disable_plane = VAR_10;
  VAR_19->get_hw_state = VAR_13;
  VAR_19->check_plane = VAR_12;

  VAR_20 = &VAR_6;
 }

 VAR_22 = FUNC_1(VAR_18);

 if (FUNC_5(VAR_17) >= 5 || FUNC_8(VAR_17))
  VAR_26 = FUNC_11(&VAR_17->drm, &VAR_19->base,
            VAR_22, VAR_20,
            VAR_24, VAR_25, VAR_23,
            VAR_3,
            "primary %c", FUNC_15(VAR_18));
 else
  VAR_26 = FUNC_11(&VAR_17->drm, &VAR_19->base,
            VAR_22, VAR_20,
            VAR_24, VAR_25, VAR_23,
            VAR_3,
            "plane %c",
            FUNC_16(VAR_19->i9xx_plane));
 if (VAR_26)
  goto fail;

 if (FUNC_6(VAR_17) && VAR_18 == VAR_4) {
  VAR_21 =
   VAR_1 | VAR_2 |
   VAR_0;
 } else if (FUNC_5(VAR_17) >= 4) {
  VAR_21 =
   VAR_1 | VAR_2;
 } else {
  VAR_21 = VAR_1;
 }

 if (FUNC_5(VAR_17) >= 4)
  FUNC_9(&VAR_19->base,
         VAR_1,
         VAR_21);

 FUNC_10(&VAR_19->base, &VAR_16);

 return VAR_19;

fail:
 FUNC_14(VAR_19);

 return FUNC_2(VAR_26);
}
