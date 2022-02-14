
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_qgv_point {int dclk; int t_rp; int t_rcd; int t_rdpre; int t_ras; int t_rc; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,int,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_1,
      struct intel_qgv_point *VAR_2,
      int VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1,
         VAR_0 |
         FUNC_0(VAR_3),
         &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_2->dclk = VAR_4 & 0xffff;
 VAR_2->t_rp = (VAR_4 & 0xff0000) >> 16;
 VAR_2->t_rcd = (VAR_4 & 0xff000000) >> 24;

 VAR_2->t_rdpre = VAR_5 & 0xff;
 VAR_2->t_ras = (VAR_5 & 0xff00) >> 8;

 VAR_2->t_rc = VAR_2->t_rp + VAR_2->t_ras;

 return 0;
}
