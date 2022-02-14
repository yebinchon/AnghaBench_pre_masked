
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = VAR_2;

 if (FUNC_2(VAR_3))
  VAR_5 |= VAR_1;


 VAR_4 = FUNC_0(VAR_0);
 if ((VAR_4 & VAR_5) != VAR_5) {
  VAR_4 |= VAR_5;
  FUNC_1(VAR_0, VAR_4);
  FUNC_3(VAR_0);
 }
}
