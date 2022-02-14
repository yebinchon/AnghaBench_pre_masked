
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3,
           enum port VAR_4, i915_reg_t VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_5);

 if (VAR_6 & VAR_1 ||
     (VAR_6 & VAR_2) == FUNC_3(VAR_0))
  return;

 FUNC_0("Sanitizing transcoder select for HDMI %c\n",
        FUNC_4(VAR_4));

 VAR_6 &= ~VAR_2;
 VAR_6 |= FUNC_3(VAR_0);

 FUNC_2(VAR_5, VAR_6);
}
