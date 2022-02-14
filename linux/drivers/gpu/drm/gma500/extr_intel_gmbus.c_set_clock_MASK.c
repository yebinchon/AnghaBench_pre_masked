
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gpio {int reg; struct drm_psb_private* dev_priv; } ;
struct drm_psb_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct intel_gpio*) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, int VAR_5)
{
 struct intel_gpio *VAR_6 = VAR_4;
 struct drm_psb_private *VAR_7 = VAR_6->dev_priv;
 u32 VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9;

 if (VAR_5)
  VAR_9 = VAR_0 | VAR_1;
 else
  VAR_9 = VAR_2 | VAR_1 |
   VAR_3;

 FUNC_1(VAR_6->reg, VAR_8 | VAR_9);
 FUNC_0(VAR_6->reg);
}
