
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private*,int ,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_5)
{
 bool VAR_6 = 0;

 VAR_6 |= FUNC_2(VAR_5);
 VAR_6 |= FUNC_4(VAR_5, 0, VAR_3);
 VAR_6 |= FUNC_1(VAR_5, 0, VAR_0);
 VAR_6 |= FUNC_3(VAR_5, 0, VAR_1);

 if (VAR_6) {
  FUNC_0("This is a pre-production stepping. "
     "It may not be fully functional.\n");
  FUNC_5(VAR_4, VAR_2);
 }
}
