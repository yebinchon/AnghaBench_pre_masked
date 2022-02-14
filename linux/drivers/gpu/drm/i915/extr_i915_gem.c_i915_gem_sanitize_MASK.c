
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int runtime_pm; int uncore; int gt; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(struct drm_i915_private *VAR_1)
{
 intel_wakeref_t VAR_2;

 FUNC_0("\n");

 VAR_2 = FUNC_4(&VAR_1->runtime_pm);
 FUNC_6(&VAR_1->uncore, VAR_0);







 if (FUNC_1(&VAR_1->gt))
  FUNC_3(&VAR_1->gt);
 FUNC_2(&VAR_1->gt, 0);

 FUNC_7(&VAR_1->uncore, VAR_0);
 FUNC_5(&VAR_1->runtime_pm, VAR_2);
}
