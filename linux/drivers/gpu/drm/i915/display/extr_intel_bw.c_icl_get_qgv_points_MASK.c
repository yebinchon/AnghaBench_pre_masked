
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_qgv_point {int t_rc; int t_rcd; int t_ras; int t_rdpre; int t_rp; int dclk; } ;
struct intel_qgv_info {int num_points; struct intel_qgv_point* points; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct intel_qgv_point*) ;
 int FUNC_1 (char*,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,struct intel_qgv_info*) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_qgv_point*,int) ;

__attribute__((used)) static int FUNC_5(struct drm_i915_private *VAR_0,
         struct intel_qgv_info *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 if (FUNC_2(VAR_1->num_points > FUNC_0(VAR_1->points)))
  VAR_1->num_points = FUNC_0(VAR_1->points);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_points; VAR_2++) {
  struct intel_qgv_point *VAR_4 = &VAR_1->points[VAR_2];

  VAR_3 = FUNC_4(VAR_0, VAR_4, VAR_2);
  if (VAR_3)
   return VAR_3;

  FUNC_1("QGV %d: DCLK=%d tRP=%d tRDPRE=%d tRAS=%d tRCD=%d tRC=%d\n",
         VAR_2, VAR_4->dclk, VAR_4->t_rp, VAR_4->t_rdpre, VAR_4->t_ras,
         VAR_4->t_rcd, VAR_4->t_rc);
 }

 return 0;
}
