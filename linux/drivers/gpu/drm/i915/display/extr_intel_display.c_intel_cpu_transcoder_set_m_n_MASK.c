
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_link_m_n {int gmch_m; int gmch_n; int link_m; int link_n; int tu; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; scalar_t__ has_drrs; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 struct drm_i915_private* FUNC_15 (int ) ;
 struct intel_crtc* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_18(const struct intel_crtc_state *VAR_0,
      const struct intel_link_m_n *VAR_1,
      const struct intel_link_m_n *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_16(VAR_0->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_15(VAR_3->base.dev);
 enum pipe VAR_5 = VAR_3->pipe;
 enum transcoder VAR_6 = VAR_0->cpu_transcoder;

 if (FUNC_1(VAR_4) >= 5) {
  FUNC_0(FUNC_2(VAR_6), FUNC_14(VAR_1->tu) | VAR_1->gmch_m);
  FUNC_0(FUNC_5(VAR_6), VAR_1->gmch_n);
  FUNC_0(FUNC_8(VAR_6), VAR_1->link_m);
  FUNC_0(FUNC_11(VAR_6), VAR_1->link_n);




  if (VAR_2 && VAR_0->has_drrs &&
      FUNC_17(VAR_4, VAR_6)) {
   FUNC_0(FUNC_3(VAR_6),
     FUNC_14(VAR_2->tu) | VAR_2->gmch_m);
   FUNC_0(FUNC_6(VAR_6), VAR_2->gmch_n);
   FUNC_0(FUNC_9(VAR_6), VAR_2->link_m);
   FUNC_0(FUNC_12(VAR_6), VAR_2->link_n);
  }
 } else {
  FUNC_0(FUNC_4(VAR_5), FUNC_14(VAR_1->tu) | VAR_1->gmch_m);
  FUNC_0(FUNC_7(VAR_5), VAR_1->gmch_n);
  FUNC_0(FUNC_10(VAR_5), VAR_1->link_m);
  FUNC_0(FUNC_13(VAR_5), VAR_1->link_n);
 }
}
