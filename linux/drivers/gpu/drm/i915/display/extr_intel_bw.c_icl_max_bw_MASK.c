
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_bw_info {int num_qgv_points; int num_planes; unsigned int* deratedbw; } ;
struct drm_i915_private {struct intel_bw_info* max_bw; } ;


 int FUNC_0 (struct intel_bw_info*) ;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct drm_i915_private *VAR_1,
          int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->max_bw); VAR_4++) {
  const struct intel_bw_info *VAR_5 =
   &VAR_1->max_bw[VAR_4];





  if (VAR_3 >= VAR_5->num_qgv_points)
   return VAR_0;

  if (VAR_2 >= VAR_5->num_planes)
   return VAR_5->deratedbw[VAR_3];
 }

 return 0;
}
