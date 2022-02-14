
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static void
FUNC_5(struct drm_i915_private *VAR_3, u32 VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_4 & VAR_2) {
  FUNC_3(VAR_3);
  VAR_5 = 1;
 }

 if (VAR_4 & VAR_1) {
  u32 VAR_6 = FUNC_1(VAR_0);

  FUNC_4(VAR_3, VAR_6);
  FUNC_2(VAR_0, VAR_6);
  VAR_5 = 1;
 }

 if (!VAR_5)
  FUNC_0("Unexpected DE Misc interrupt\n");
}
