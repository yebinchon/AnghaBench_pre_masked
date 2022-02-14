
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {scalar_t__ ipc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct drm_i915_private *VAR_2)
{
 u32 VAR_3;

 if (!FUNC_0(VAR_2))
  return;

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_2->ipc_enabled)
  VAR_3 |= VAR_1;
 else
  VAR_3 &= ~VAR_1;

 FUNC_2(VAR_0, VAR_3);
}
