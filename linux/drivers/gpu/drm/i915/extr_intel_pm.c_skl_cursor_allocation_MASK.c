
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_wm_params {int dummy; } ;
struct skl_wm_level {int min_ddb_alloc; } ;
struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {int pixel_rate; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 unsigned int FUNC_3 (int,int) ;
 int FUNC_4 (struct intel_crtc_state const*,int,struct skl_wm_params*,struct skl_wm_level*,struct skl_wm_level*) ;
 int FUNC_5 (struct intel_crtc_state const*,int,int ,int ,int ,int ,struct skl_wm_params*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static unsigned int
FUNC_7(const struct intel_crtc_state *VAR_4,
        int VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_6(VAR_4->base.crtc->dev);
 int VAR_7, VAR_8 = FUNC_2(VAR_6);
 struct skl_wm_level VAR_9 = {};
 int VAR_10, VAR_11 = 0;
 struct skl_wm_params VAR_12;

 VAR_10 = FUNC_5(VAR_4, 256,
        FUNC_1(VAR_0),
        VAR_1,
        VAR_2,
        VAR_4->pixel_rate, &VAR_12, 0);
 FUNC_0(VAR_10);

 for (VAR_7 = 0; VAR_7 <= VAR_8; VAR_7++) {
  FUNC_4(VAR_4, VAR_7, &VAR_12, &VAR_9, &VAR_9);
  if (VAR_9.min_ddb_alloc == VAR_3)
   break;

  VAR_11 = VAR_9.min_ddb_alloc;
 }

 return FUNC_3(VAR_5 == 1 ? 32 : 8, VAR_11);
}
