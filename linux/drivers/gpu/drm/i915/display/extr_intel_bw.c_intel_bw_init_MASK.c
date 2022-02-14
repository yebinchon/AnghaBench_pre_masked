
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_bw_state {int base; } ;
struct drm_i915_private {int bw_obj; int drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 int VAR_2 ;
 struct intel_bw_state* FUNC_1 (int,int ) ;

int FUNC_2(struct drm_i915_private *VAR_3)
{
 struct intel_bw_state *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_3->drm, &VAR_3->bw_obj,
        &VAR_4->base, &VAR_2);

 return 0;
}
