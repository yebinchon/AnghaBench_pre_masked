
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2,
          u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;

 *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, *VAR_3);

 *VAR_4 = FUNC_0(VAR_0);
 if (*VAR_4 == 0)
  return;
 VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, 0xffffffff);
 FUNC_1(VAR_1, VAR_5 | *VAR_4);
}
