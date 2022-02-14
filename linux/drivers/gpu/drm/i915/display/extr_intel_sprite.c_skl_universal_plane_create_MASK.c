
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_plane {int pipe; int id; int base; scalar_t__ has_ccs; int update_slave; int check_plane; int get_hw_state; int disable_plane; int update_plane; int max_stride; int frontbuffer_bit; scalar_t__ has_fbc; } ;
struct intel_fbc {int possible_framebuffer_bits; } ;
struct drm_i915_private {int drm; struct intel_fbc fbc; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct intel_plane* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct intel_plane*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_14 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,unsigned int,unsigned int,int,int) ;
 int FUNC_9 (int *,unsigned int,unsigned int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,unsigned int,int *,int const*,int,int const*,int,char*,int,int ) ;
 int * FUNC_12 (struct drm_i915_private*,int,int,int*) ;
 int * FUNC_13 (struct drm_i915_private*,int,int,int*) ;
 scalar_t__ FUNC_14 (int) ;
 int VAR_15 ;
 struct intel_plane* FUNC_15 () ;
 int FUNC_16 (struct intel_plane*) ;
 int VAR_16 ;
 int FUNC_17 (int) ;
 int VAR_17 ;
 int * FUNC_18 (struct drm_i915_private*,int,int,int*) ;
 int VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_19 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_20 (struct drm_i915_private*,int,int) ;
 int VAR_23 ;
 int VAR_24 ;

struct intel_plane *
FUNC_21(struct drm_i915_private *VAR_25,
      enum pipe VAR_26, enum plane_id VAR_27)
{
 struct intel_plane *VAR_28;
 enum drm_plane_type VAR_29;
 unsigned int VAR_30;
 unsigned int VAR_31;
 const u64 *VAR_32;
 const u32 *VAR_33;
 int VAR_34;
 int VAR_35;

 VAR_28 = FUNC_15();
 if (FUNC_4(VAR_28))
  return VAR_28;

 VAR_28->pipe = VAR_26;
 VAR_28->id = VAR_27;
 VAR_28->frontbuffer_bit = FUNC_2(VAR_26, VAR_27);

 VAR_28->has_fbc = FUNC_20(VAR_25, VAR_26, VAR_27);
 if (VAR_28->has_fbc) {
  struct intel_fbc *VAR_36 = &VAR_25->fbc;

  VAR_36->possible_framebuffer_bits |= VAR_28->frontbuffer_bit;
 }

 VAR_28->max_stride = VAR_23;
 VAR_28->update_plane = VAR_24;
 VAR_28->disable_plane = VAR_17;
 VAR_28->get_hw_state = VAR_22;
 VAR_28->check_plane = VAR_18;
 if (FUNC_14(VAR_27))
  VAR_28->update_slave = VAR_15;

 if (FUNC_3(VAR_25) >= 11)
  VAR_33 = FUNC_13(VAR_25, VAR_26,
      VAR_27, &VAR_34);
 else if (FUNC_3(VAR_25) >= 10 || FUNC_5(VAR_25))
  VAR_33 = FUNC_12(VAR_25, VAR_26,
      VAR_27, &VAR_34);
 else
  VAR_33 = FUNC_18(VAR_25, VAR_26,
      VAR_27, &VAR_34);

 VAR_28->has_ccs = FUNC_19(VAR_25, VAR_26, VAR_27);
 if (VAR_28->has_ccs)
  VAR_32 = VAR_19;
 else
  VAR_32 = VAR_20;

 if (VAR_27 == VAR_14)
  VAR_29 = VAR_13;
 else
  VAR_29 = VAR_12;

 VAR_31 = FUNC_0(VAR_26);

 VAR_35 = FUNC_11(&VAR_25->drm, &VAR_28->base,
           VAR_31, &VAR_21,
           VAR_33, VAR_34, VAR_32,
           VAR_29,
           "plane %d%c", VAR_27 + 1,
           FUNC_17(VAR_26));
 if (VAR_35)
  goto fail;

 VAR_30 =
  VAR_8 | VAR_11 |
  VAR_9 | VAR_10;

 if (FUNC_3(VAR_25) >= 10)
  VAR_30 |= VAR_7;

 FUNC_9(&VAR_28->base,
        VAR_8,
        VAR_30);

 FUNC_8(&VAR_28->base,
       FUNC_0(VAR_0) |
       FUNC_0(VAR_1),
       FUNC_0(VAR_3) |
       FUNC_0(VAR_2),
       VAR_1,
       VAR_3);

 FUNC_6(&VAR_28->base);
 FUNC_7(&VAR_28->base,
          FUNC_0(VAR_5) |
          FUNC_0(VAR_6) |
          FUNC_0(VAR_4));

 FUNC_10(&VAR_28->base, &VAR_16);

 return VAR_28;

fail:
 FUNC_16(VAR_28);

 return FUNC_1(VAR_35);
}
