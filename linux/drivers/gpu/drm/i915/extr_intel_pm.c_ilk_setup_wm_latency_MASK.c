
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_latency; int spr_latency; int pri_latency; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (struct drm_i915_private*,char*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_0)
{
 FUNC_4(VAR_0, VAR_0->wm.pri_latency);

 FUNC_5(VAR_0->wm.spr_latency, VAR_0->wm.pri_latency,
        sizeof(VAR_0->wm.pri_latency));
 FUNC_5(VAR_0->wm.cur_latency, VAR_0->wm.pri_latency,
        sizeof(VAR_0->wm.pri_latency));

 FUNC_2(VAR_0, VAR_0->wm.spr_latency);
 FUNC_1(VAR_0, VAR_0->wm.cur_latency);

 FUNC_3(VAR_0, "Primary", VAR_0->wm.pri_latency);
 FUNC_3(VAR_0, "Sprite", VAR_0->wm.spr_latency);
 FUNC_3(VAR_0, "Cursor", VAR_0->wm.cur_latency);

 if (FUNC_0(VAR_0, 6)) {
  FUNC_6(VAR_0);
  FUNC_7(VAR_0);
 }
}
