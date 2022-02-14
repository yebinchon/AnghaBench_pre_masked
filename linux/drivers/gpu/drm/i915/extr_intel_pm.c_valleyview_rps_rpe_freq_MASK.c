
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
 int FUNC_0 (struct drm_i915_private*,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_4);
 VAR_7 = (VAR_6 & VAR_1) >> VAR_2;
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_7 |= (VAR_6 & VAR_0) << 5;

 return VAR_7;
}
