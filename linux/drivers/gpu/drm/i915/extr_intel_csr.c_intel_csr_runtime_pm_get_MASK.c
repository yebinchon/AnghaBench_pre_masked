
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wakeref; } ;
struct drm_i915_private {TYPE_1__ csr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_1)
{
 FUNC_0(VAR_1->csr.wakeref);
 VAR_1->csr.wakeref =
  FUNC_1(VAR_1, VAR_0);
}
