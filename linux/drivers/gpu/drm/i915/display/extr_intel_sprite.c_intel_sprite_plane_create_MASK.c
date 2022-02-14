
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_plane {int pipe; int base; scalar_t__ id; int frontbuffer_bit; void* check_plane; int get_hw_state; int disable_plane; int update_plane; void* max_stride; } ;
struct drm_plane_funcs {int dummy; } ;
struct drm_i915_private {int drm; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 struct intel_plane* FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct intel_plane*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int *,unsigned long,unsigned long,int,int) ;
 int FUNC_10 (int *,unsigned int,unsigned int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,unsigned long,struct drm_plane_funcs const*,int const*,int,int const*,int ,char*,int ) ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 struct drm_plane_funcs VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 void* VAR_18 ;
 struct intel_plane* FUNC_13 () ;
 int FUNC_14 (struct intel_plane*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct intel_plane* FUNC_15 (struct drm_i915_private*,int,scalar_t__) ;
 int * VAR_23 ;
 struct drm_plane_funcs VAR_24 ;
 int FUNC_16 (int,int) ;
 int VAR_25 ;
 int * VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 struct drm_plane_funcs VAR_29 ;
 int VAR_30 ;

struct intel_plane *
FUNC_17(struct drm_i915_private *VAR_31,
     enum pipe VAR_32, int VAR_33)
{
 struct intel_plane *VAR_34;
 const struct drm_plane_funcs *VAR_35;
 unsigned long VAR_36;
 unsigned int VAR_37;
 const u64 *VAR_38;
 const u32 *VAR_39;
 int VAR_40;
 int VAR_41;

 if (FUNC_4(VAR_31) >= 9)
  return FUNC_15(VAR_31, VAR_32,
        VAR_9 + VAR_33);

 VAR_34 = FUNC_13();
 if (FUNC_6(VAR_34))
  return VAR_34;

 if (FUNC_8(VAR_31) || FUNC_5(VAR_31)) {
  VAR_34->max_stride = VAR_18;
  VAR_34->update_plane = VAR_30;
  VAR_34->disable_plane = VAR_25;
  VAR_34->get_hw_state = VAR_27;
  VAR_34->check_plane = VAR_28;

  VAR_39 = VAR_26;
  VAR_40 = FUNC_0(VAR_26);
  VAR_38 = VAR_17;

  VAR_35 = &VAR_29;
 } else if (FUNC_4(VAR_31) >= 7) {
  VAR_34->max_stride = VAR_15;
  VAR_34->update_plane = VAR_22;
  VAR_34->disable_plane = VAR_20;
  VAR_34->get_hw_state = VAR_21;
  VAR_34->check_plane = VAR_13;

  VAR_39 = VAR_23;
  VAR_40 = FUNC_0(VAR_23);
  VAR_38 = VAR_17;

  VAR_35 = &VAR_24;
 } else {
  VAR_34->max_stride = VAR_15;
  VAR_34->update_plane = VAR_16;
  VAR_34->disable_plane = VAR_10;
  VAR_34->get_hw_state = VAR_12;
  VAR_34->check_plane = VAR_13;

  VAR_38 = VAR_17;
  if (FUNC_7(VAR_31, 6)) {
   VAR_39 = VAR_23;
   VAR_40 = FUNC_0(VAR_23);

   VAR_35 = &VAR_24;
  } else {
   VAR_39 = VAR_11;
   VAR_40 = FUNC_0(VAR_11);

   VAR_35 = &VAR_14;
  }
 }

 if (FUNC_5(VAR_31) && VAR_32 == VAR_8) {
  VAR_37 =
   VAR_5 | VAR_6 |
   VAR_4;
 } else {
  VAR_37 =
   VAR_5 | VAR_6;
 }

 VAR_34->pipe = VAR_32;
 VAR_34->id = VAR_9 + VAR_33;
 VAR_34->frontbuffer_bit = FUNC_3(VAR_32, VAR_34->id);

 VAR_36 = FUNC_1(VAR_32);

 VAR_41 = FUNC_12(&VAR_31->drm, &VAR_34->base,
           VAR_36, VAR_35,
           VAR_39, VAR_40, VAR_38,
           VAR_7,
           "sprite %c", FUNC_16(VAR_32, VAR_33));
 if (VAR_41)
  goto fail;

 FUNC_10(&VAR_34->base,
        VAR_5,
        VAR_37);

 FUNC_9(&VAR_34->base,
       FUNC_1(VAR_0) |
       FUNC_1(VAR_1),
       FUNC_1(VAR_3) |
       FUNC_1(VAR_2),
       VAR_1,
       VAR_3);

 FUNC_11(&VAR_34->base, &VAR_19);

 return VAR_34;

fail:
 FUNC_14(VAR_34);

 return FUNC_2(VAR_41);
}
