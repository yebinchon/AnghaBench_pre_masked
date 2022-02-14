
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_rps_ei {void* media_c0; void* render_c0; int ktime; } ;
struct drm_i915_private {int dummy; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2,
   struct intel_rps_ei *VAR_3)
{
 VAR_3->ktime = FUNC_1();
 VAR_3->render_c0 = FUNC_0(VAR_1);
 VAR_3->media_c0 = FUNC_0(VAR_0);
}
