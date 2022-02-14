
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* pri_latency; scalar_t__* spr_latency; scalar_t__* cur_latency; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0)
{
 if (VAR_0->wm.pri_latency[3] == 0 &&
     VAR_0->wm.spr_latency[3] == 0 &&
     VAR_0->wm.cur_latency[3] == 0)
  return;

 VAR_0->wm.pri_latency[3] = 0;
 VAR_0->wm.spr_latency[3] = 0;
 VAR_0->wm.cur_latency[3] = 0;

 FUNC_0("LP3 watermarks disabled due to potential for lost interrupts\n");
 FUNC_1(VAR_0, "Primary", VAR_0->wm.pri_latency);
 FUNC_1(VAR_0, "Sprite", VAR_0->wm.spr_latency);
 FUNC_1(VAR_0, "Cursor", VAR_0->wm.cur_latency);
}
