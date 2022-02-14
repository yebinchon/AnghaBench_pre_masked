
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int uncore; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ,int ,int) ;

int FUNC_4(struct drm_i915_private *VAR_3, bool VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 VAR_5 &= ~VAR_0;
 if (VAR_4)
  VAR_5 |= VAR_0;
 FUNC_2(VAR_2, VAR_5);

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_3(&VAR_3->uncore,
          VAR_2,
          VAR_1,
          VAR_1,
          20);
 if (VAR_6)
  FUNC_0("timeout waiting for GFX clock force-on (%08x)\n",
     FUNC_1(VAR_2));

 return VAR_6;
}
