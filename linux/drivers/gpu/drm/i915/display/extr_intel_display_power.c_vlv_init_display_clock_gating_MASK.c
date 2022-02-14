
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {scalar_t__ rawclk_freq; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_7)
{
 u32 VAR_8;







 VAR_8 = FUNC_1(VAR_2);
 VAR_8 &= VAR_1;
 VAR_8 |= VAR_6;
 FUNC_2(VAR_2, VAR_8);




 FUNC_2(VAR_4, VAR_3);
 FUNC_2(VAR_0, 0);

 FUNC_3(VAR_7->rawclk_freq == 0);

 FUNC_2(VAR_5,
     FUNC_0(VAR_7->rawclk_freq, 1000));
}
