
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
u32 FUNC_3(struct drm_i915_private *VAR_0,
   u32 VAR_1, u64 VAR_2)
{






 if (!FUNC_2(VAR_2)) {
  if (FUNC_0(VAR_0) >= 7)
   return 256*1024;
  else if (FUNC_0(VAR_0) >= 4)
   return 128*1024;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
