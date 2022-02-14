
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int skl_latency; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 int FUNC_0 (struct drm_i915_private*,char*,int ) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0)
{
 FUNC_1(VAR_0, VAR_0->wm.skl_latency);
 FUNC_0(VAR_0, "Gen9 Plane", VAR_0->wm.skl_latency);
}
