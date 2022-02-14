
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int saveBLC_PWM_CTL; } ;
struct drm_psb_private {TYPE_1__ regs; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;

__attribute__((used)) static u32 FUNC_3(struct drm_device *VAR_3)
{
 struct drm_psb_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5;

 if (FUNC_1(VAR_3, 0)) {
  VAR_5 = ((FUNC_0(VAR_2) &
     VAR_0) >>
     VAR_1) * 2;

  FUNC_2(VAR_3);
 } else
  VAR_5 = ((VAR_4->regs.saveBLC_PWM_CTL &
     VAR_0) >>
     VAR_1) * 2;

 return VAR_5;
}
