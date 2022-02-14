
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int reg; } ;
typedef TYPE_1__ i915_reg_t ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (char*,int ,int ,int,int,int) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_0,
     enum phy VAR_1, i915_reg_t VAR_2, u32 VAR_3,
     u32 VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_2);

 if ((VAR_5 & VAR_3) != VAR_4) {
  FUNC_0("Combo PHY %c reg %08x state mismatch: "
     "current %08x mask %08x expected %08x\n",
     FUNC_2(VAR_1),
     VAR_2.reg, VAR_5, VAR_3, VAR_4);
  return 0;
 }

 return 1;
}
