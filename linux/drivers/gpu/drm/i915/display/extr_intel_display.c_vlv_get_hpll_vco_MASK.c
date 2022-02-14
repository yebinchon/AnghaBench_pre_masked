
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*,int ) ;

int FUNC_1(struct drm_i915_private *VAR_2)
{
 int VAR_3, VAR_4[] = { 800, 1600, 2000, 2400 };


 VAR_3 = FUNC_0(VAR_2, VAR_1) &
  VAR_0;

 return VAR_4[VAR_3] * 1000;
}
