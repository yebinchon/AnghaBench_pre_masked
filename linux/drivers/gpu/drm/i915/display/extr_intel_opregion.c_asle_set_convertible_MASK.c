
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(struct drm_i915_private *VAR_2, u32 VAR_3)
{
 if (VAR_3 & VAR_1)
  FUNC_0("Convertible is not supported (clamshell)\n");
 else
  FUNC_0("Convertible is not supported (slate)\n");

 return VAR_0;
}
