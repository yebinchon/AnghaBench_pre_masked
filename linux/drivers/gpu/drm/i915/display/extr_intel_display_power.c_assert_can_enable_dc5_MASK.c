
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int runtime_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3)
{
 bool VAR_4 = FUNC_4(VAR_3,
     VAR_2);

 FUNC_1(VAR_4, "PG2 not disabled to enable DC5.\n");

 FUNC_1((FUNC_0(VAR_0) & VAR_1),
    "DC5 already programmed to be enabled.\n");
 FUNC_3(&VAR_3->runtime_pm);

 FUNC_2(VAR_3);
}
