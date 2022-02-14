
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; } ;
struct intel_crtc_state {TYPE_1__ dsi_pll; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_i915_private* FUNC_11 (struct drm_device*) ;

__attribute__((used)) static void FUNC_12(struct drm_device *VAR_5, enum port VAR_6,
       const struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_11(VAR_5);
 u32 VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;


 VAR_9 = FUNC_9(VAR_1);
 VAR_9 &= ~(FUNC_7(VAR_6));
 VAR_9 &= ~(FUNC_5(VAR_6));
 VAR_9 &= ~(FUNC_1(VAR_6));
 VAR_9 &= ~(FUNC_3(VAR_6));


 VAR_11 = VAR_7->dsi_pll.ctrl & VAR_0;
 VAR_10 = (VAR_2 * VAR_11) / 2;





 VAR_13 = FUNC_8(VAR_10, 20000) - 1;




 VAR_12 = FUNC_8(VAR_10, 150000) - 1;






 VAR_15 = VAR_12 & VAR_3;
 VAR_14 = (VAR_12 & VAR_4) >> 2;

 VAR_16 = 0x2;

 VAR_9 |= FUNC_0(VAR_6, VAR_16);
 VAR_9 |= FUNC_6(VAR_6, VAR_13);
 VAR_9 |= FUNC_2(VAR_6, VAR_15);
 VAR_9 |= FUNC_4(VAR_6, VAR_14);

 FUNC_10(VAR_1, VAR_9);
}
