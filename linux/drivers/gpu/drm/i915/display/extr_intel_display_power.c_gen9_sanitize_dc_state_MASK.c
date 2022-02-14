
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dc_state; } ;
struct drm_i915_private {TYPE_1__ csr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0) & FUNC_2(VAR_1);

 FUNC_0("Resetting DC state tracking from %02x to %02x\n",
        VAR_1->csr.dc_state, VAR_2);
 VAR_1->csr.dc_state = VAR_2;
}
