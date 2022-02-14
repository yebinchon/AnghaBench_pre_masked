
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int cntl; int base; } ;
struct intel_plane {int pipe; int i9xx_plane; int base; TYPE_1__ cursor; int check_plane; int get_hw_state; int disable_plane; int update_plane; int max_stride; int id; int frontbuffer_bit; } ;
struct drm_i915_private {int drm; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_plane* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct intel_plane*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,unsigned int,int *,int ,int ,int ,int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct intel_plane* FUNC_12 () ;
 int FUNC_13 (struct intel_plane*) ;
 int VAR_17 ;
 int FUNC_14 (int) ;

__attribute__((used)) static struct intel_plane *
FUNC_15(struct drm_i915_private *VAR_18,
     enum pipe VAR_19)
{
 unsigned int VAR_20;
 struct intel_plane *VAR_21;
 int VAR_22;

 VAR_21 = FUNC_12();
 if (FUNC_6(VAR_21))
  return VAR_21;

 VAR_21->pipe = VAR_19;
 VAR_21->i9xx_plane = (enum i9xx_plane_id) VAR_19;
 VAR_21->id = VAR_3;
 VAR_21->frontbuffer_bit = FUNC_4(VAR_19, VAR_21->id);

 if (FUNC_7(VAR_18) || FUNC_8(VAR_18)) {
  VAR_21->max_stride = VAR_7;
  VAR_21->update_plane = VAR_9;
  VAR_21->disable_plane = VAR_8;
  VAR_21->get_hw_state = VAR_6;
  VAR_21->check_plane = VAR_5;
 } else {
  VAR_21->max_stride = VAR_12;
  VAR_21->update_plane = VAR_14;
  VAR_21->disable_plane = VAR_13;
  VAR_21->get_hw_state = VAR_11;
  VAR_21->check_plane = VAR_10;
 }

 VAR_21->cursor.base = ~0;
 VAR_21->cursor.cntl = ~0;

 if (FUNC_7(VAR_18) || FUNC_8(VAR_18) || FUNC_3(VAR_18))
  VAR_21->cursor.size = ~0;

 VAR_20 = FUNC_1(VAR_19);

 VAR_22 = FUNC_11(&VAR_18->drm, &VAR_21->base,
           VAR_20, &VAR_16,
           VAR_15,
           FUNC_0(VAR_15),
           VAR_4,
           VAR_2,
           "cursor %c", FUNC_14(VAR_19));
 if (VAR_22)
  goto fail;

 if (FUNC_5(VAR_18) >= 4)
  FUNC_9(&VAR_21->base,
         VAR_0,
         VAR_0 |
         VAR_1);

 FUNC_10(&VAR_21->base, &VAR_17);

 return VAR_21;

fail:
 FUNC_13(VAR_21);

 return FUNC_2(VAR_22);
}
