
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_0);
 VAR_8 &= ~VAR_2;
 FUNC_1(VAR_0, VAR_8);


 FUNC_2(VAR_7, VAR_6);

 VAR_8 = FUNC_0(VAR_4);
 VAR_8 |= VAR_5;
 FUNC_1(VAR_4, VAR_8);

 VAR_8 = FUNC_0(VAR_3);
 VAR_8 |= VAR_1;
 FUNC_1(VAR_3, VAR_8);
}
