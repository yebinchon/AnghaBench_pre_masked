
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (int,unsigned int) ;

u32 FUNC_6(struct drm_i915_private *VAR_2,
   u32 VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 u32 VAR_6;

 FUNC_0(!VAR_3);

 if (VAR_4 == VAR_0)
  return VAR_3;

 FUNC_0(!VAR_5);

 if (FUNC_1(VAR_2) >= 4) {
  VAR_5 *= FUNC_4(VAR_4);
  FUNC_0(!FUNC_2(VAR_5, VAR_1));
  return FUNC_5(VAR_3, VAR_5);
 }


 if (FUNC_3(VAR_2, 3))
  VAR_6 = 1024*1024;
 else
  VAR_6 = 512*1024;

 while (VAR_6 < VAR_3)
  VAR_6 <<= 1;

 return VAR_6;
}
