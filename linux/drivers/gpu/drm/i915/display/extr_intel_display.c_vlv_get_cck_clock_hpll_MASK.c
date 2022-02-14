
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {scalar_t__ hpll_freq; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*,char const*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;

int FUNC_4(struct drm_i915_private *VAR_0,
      const char *VAR_1, u32 VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);

 if (VAR_0->hpll_freq == 0)
  VAR_0->hpll_freq = FUNC_3(VAR_0);

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_0->hpll_freq);

 FUNC_1(VAR_0);

 return VAR_3;
}
