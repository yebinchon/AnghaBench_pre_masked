
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int allowed_dc_mask; int dc_state; } ;
struct drm_i915_private {TYPE_1__ csr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 if (FUNC_3(VAR_2 & ~VAR_1->csr.allowed_dc_mask))
  VAR_2 &= VAR_1->csr.allowed_dc_mask;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_4(VAR_1);
 FUNC_0("Setting DC state from %02x to %02x\n",
        VAR_3 & VAR_4, VAR_2);


 if ((VAR_3 & VAR_4) != VAR_1->csr.dc_state)
  FUNC_1("DC state mismatch (0x%x -> 0x%x)\n",
     VAR_1->csr.dc_state, VAR_3 & VAR_4);

 VAR_3 &= ~VAR_4;
 VAR_3 |= VAR_2;

 FUNC_5(VAR_1, VAR_3);

 VAR_1->csr.dc_state = VAR_3 & VAR_4;
}
