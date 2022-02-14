
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_latency; int spr_latency; int pri_latency; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private*,int ,int) ;
 int FUNC_2 (struct drm_i915_private*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0)
{
 bool VAR_1;





 VAR_1 = FUNC_1(VAR_0, VAR_0->wm.pri_latency, 12) |
  FUNC_1(VAR_0, VAR_0->wm.spr_latency, 12) |
  FUNC_1(VAR_0, VAR_0->wm.cur_latency, 12);

 if (!VAR_1)
  return;

 FUNC_0("WM latency values increased to avoid potential underruns\n");
 FUNC_2(VAR_0, "Primary", VAR_0->wm.pri_latency);
 FUNC_2(VAR_0, "Sprite", VAR_0->wm.spr_latency);
 FUNC_2(VAR_0, "Cursor", VAR_0->wm.cur_latency);
}
