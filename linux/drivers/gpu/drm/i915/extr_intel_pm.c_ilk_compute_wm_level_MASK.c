
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct intel_wm_level {int enable; int cur_val; int spr_val; int pri_val; int fbc_val; } ;
struct intel_plane_state {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct intel_crtc {int dummy; } ;
struct TYPE_2__ {int* pri_latency; int* spr_latency; int* cur_latency; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 int FUNC_0 (struct intel_crtc_state*,struct intel_plane_state const*,int) ;
 int FUNC_1 (struct intel_crtc_state*,struct intel_plane_state const*,int ) ;
 int FUNC_2 (struct intel_crtc_state*,struct intel_plane_state const*,int,int) ;
 int FUNC_3 (struct intel_crtc_state*,struct intel_plane_state const*,int) ;

__attribute__((used)) static void FUNC_4(const struct drm_i915_private *VAR_0,
     const struct intel_crtc *VAR_1,
     int VAR_2,
     struct intel_crtc_state *VAR_3,
     const struct intel_plane_state *VAR_4,
     const struct intel_plane_state *VAR_5,
     const struct intel_plane_state *VAR_6,
     struct intel_wm_level *VAR_7)
{
 u16 VAR_8 = VAR_0->wm.pri_latency[VAR_2];
 u16 VAR_9 = VAR_0->wm.spr_latency[VAR_2];
 u16 VAR_10 = VAR_0->wm.cur_latency[VAR_2];


 if (VAR_2 > 0) {
  VAR_8 *= 5;
  VAR_9 *= 5;
  VAR_10 *= 5;
 }

 if (VAR_4) {
  VAR_7->pri_val = FUNC_2(VAR_3, VAR_4,
           VAR_8, VAR_2);
  VAR_7->fbc_val = FUNC_1(VAR_3, VAR_4, VAR_7->pri_val);
 }

 if (VAR_5)
  VAR_7->spr_val = FUNC_3(VAR_3, VAR_5, VAR_9);

 if (VAR_6)
  VAR_7->cur_val = FUNC_0(VAR_3, VAR_6, VAR_10);

 VAR_7->enable = 1;
}
