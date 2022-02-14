
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {int has_psr; TYPE_1__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct TYPE_6__ {int psr2_enabled; int enabled; } ;
struct drm_i915_private {int uncore; TYPE_3__ psr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int,int,int *) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (int ) ;

int FUNC_4(const struct intel_crtc_state *VAR_3,
       u32 *VAR_4)
{
 struct intel_crtc *VAR_5 = FUNC_3(VAR_3->base.crtc);
 struct drm_i915_private *VAR_6 = FUNC_2(VAR_5->base.dev);

 if (!VAR_6->psr.enabled || !VAR_3->has_psr)
  return 0;


 if (FUNC_0(VAR_6->psr.psr2_enabled))
  return 0;
 return FUNC_1(&VAR_6->uncore, VAR_0,
      VAR_2,
      VAR_1, 2, 50,
      VAR_4);
}
