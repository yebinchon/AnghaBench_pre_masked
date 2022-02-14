
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int* dpio_phy_iosf_port; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int ,int,int ,int,int*) ;

u32 FUNC_4(struct drm_i915_private *VAR_2, enum pipe VAR_3, int VAR_4)
{
 int VAR_5 = VAR_2->dpio_phy_iosf_port[FUNC_0(VAR_3)];
 u32 VAR_6 = 0;

 FUNC_3(VAR_2, VAR_0, VAR_5, VAR_1, VAR_4, &VAR_6);





 FUNC_1(VAR_6 == 0xffffffff, "DPIO read pipe %c reg 0x%x == 0x%x\n",
      FUNC_2(VAR_3), VAR_4, VAR_6);

 return VAR_6;
}
