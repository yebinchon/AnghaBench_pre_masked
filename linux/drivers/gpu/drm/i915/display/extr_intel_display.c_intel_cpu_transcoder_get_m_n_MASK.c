
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_link_m_n {int link_m; int link_n; int gmch_m; int gmch_n; int tu; } ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
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
 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_private* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_16(struct intel_crtc *VAR_2,
      enum transcoder VAR_3,
      struct intel_link_m_n *VAR_4,
      struct intel_link_m_n *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_14(VAR_2->base.dev);
 enum pipe VAR_7 = VAR_2->pipe;

 if (FUNC_1(VAR_6) >= 5) {
  VAR_4->link_m = FUNC_0(FUNC_8(VAR_3));
  VAR_4->link_n = FUNC_0(FUNC_11(VAR_3));
  VAR_4->gmch_m = FUNC_0(FUNC_2(VAR_3))
   & ~VAR_0;
  VAR_4->gmch_n = FUNC_0(FUNC_5(VAR_3));
  VAR_4->tu = ((FUNC_0(FUNC_2(VAR_3))
       & VAR_0) >> VAR_1) + 1;

  if (VAR_5 && FUNC_15(VAR_6, VAR_3)) {
   VAR_5->link_m = FUNC_0(FUNC_9(VAR_3));
   VAR_5->link_n = FUNC_0(FUNC_12(VAR_3));
   VAR_5->gmch_m = FUNC_0(FUNC_3(VAR_3))
     & ~VAR_0;
   VAR_5->gmch_n = FUNC_0(FUNC_6(VAR_3));
   VAR_5->tu = ((FUNC_0(FUNC_3(VAR_3))
     & VAR_0) >> VAR_1) + 1;
  }
 } else {
  VAR_4->link_m = FUNC_0(FUNC_10(VAR_7));
  VAR_4->link_n = FUNC_0(FUNC_13(VAR_7));
  VAR_4->gmch_m = FUNC_0(FUNC_4(VAR_7))
   & ~VAR_0;
  VAR_4->gmch_n = FUNC_0(FUNC_7(VAR_7));
  VAR_4->tu = ((FUNC_0(FUNC_4(VAR_7))
       & VAR_0) >> VAR_1) + 1;
 }
}
