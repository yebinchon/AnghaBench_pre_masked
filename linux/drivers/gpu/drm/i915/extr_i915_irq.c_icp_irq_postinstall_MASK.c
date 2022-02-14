
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int uncore; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_8)
{
 u32 VAR_9 = VAR_5;

 FUNC_5(FUNC_2(VAR_2) != 0);
 FUNC_3(VAR_2, 0xffffffff);
 FUNC_4(VAR_2);

 FUNC_6(&VAR_8->uncore, VAR_3);
 FUNC_3(VAR_4, ~VAR_9);

 if (FUNC_1(VAR_8))
  FUNC_7(VAR_8, VAR_6,
     VAR_7);
 else if (FUNC_0(VAR_8))
  FUNC_7(VAR_8, VAR_6, 0);
 else
  FUNC_7(VAR_8, VAR_0,
     VAR_1);
}
