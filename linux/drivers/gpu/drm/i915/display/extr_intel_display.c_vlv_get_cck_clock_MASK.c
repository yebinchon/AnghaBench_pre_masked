
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (struct drm_i915_private*,int) ;

int FUNC_3(struct drm_i915_private *VAR_3,
        const char *VAR_4, u32 VAR_5, int VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_5);
 VAR_8 = VAR_7 & VAR_2;

 FUNC_1((VAR_7 & VAR_0) !=
      (VAR_8 << VAR_1),
      "%s change in progress\n", VAR_4);

 return FUNC_0(VAR_6 << 1, VAR_8 + 1);
}
