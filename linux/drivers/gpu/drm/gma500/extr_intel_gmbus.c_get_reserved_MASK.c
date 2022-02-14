
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gpio {int reg; struct drm_psb_private* dev_priv; } ;
struct drm_psb_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct intel_gpio *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_priv;
 u32 VAR_4 = 0;


 VAR_4 = FUNC_0(VAR_2->reg) &
         (VAR_1 |
          VAR_0);

 return VAR_4;
}
