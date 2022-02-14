
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int saveBLC_PWM_CTL; } ;
struct drm_psb_private {TYPE_1__ regs; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static u32 FUNC_4(struct drm_device *VAR_3)
{
 struct drm_psb_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5;

 if (FUNC_2(VAR_3, 0)) {
  VAR_5 = FUNC_0(VAR_2);
  FUNC_3(VAR_3);
 } else
  VAR_5 = VAR_4->regs.saveBLC_PWM_CTL;


 VAR_5 = (VAR_5 & VAR_0) >>
     VAR_1;

        VAR_5 *= 2;
        if (VAR_5 == 0)
                FUNC_1(VAR_3->dev, "BL bug: Reg %08x save %08X\n",
                        FUNC_0(VAR_2), VAR_4->regs.saveBLC_PWM_CTL);
 return VAR_5;
}
