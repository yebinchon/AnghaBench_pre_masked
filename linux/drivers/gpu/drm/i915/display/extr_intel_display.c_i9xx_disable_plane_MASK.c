
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_plane {int i9xx_plane; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct drm_i915_private {TYPE_2__ uncore; } ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct intel_crtc_state const*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_plane *VAR_0,
          const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_8(VAR_0->base.dev);
 enum i9xx_plane_id VAR_3 = VAR_0->i9xx_plane;
 unsigned long VAR_4;
 u32 VAR_5;
 VAR_5 = FUNC_5(VAR_1);

 FUNC_6(&VAR_2->uncore.lock, VAR_4);

 FUNC_3(FUNC_1(VAR_3), VAR_5);
 if (FUNC_4(VAR_2) >= 4)
  FUNC_3(FUNC_2(VAR_3), 0);
 else
  FUNC_3(FUNC_0(VAR_3), 0);

 FUNC_7(&VAR_2->uncore.lock, VAR_4);
}
