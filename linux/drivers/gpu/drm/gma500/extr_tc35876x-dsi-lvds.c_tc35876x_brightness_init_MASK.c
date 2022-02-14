
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 u16 VAR_8;




 VAR_6 = FUNC_4(VAR_0, &VAR_7);
 if (VAR_6 || VAR_7 != 0x01) {
  if (VAR_6)
   FUNC_2(&VAR_5->pdev->dev, "GPIOPWMCTRL read failed\n");
  else
   FUNC_3(&VAR_5->pdev->dev, "GPIOPWMCTRL was not set to system clock (pwmctrl = 0x%02x)\n", VAR_7);

  VAR_6 = FUNC_5(VAR_0, 0x01);
  if (VAR_6)
   FUNC_2(&VAR_5->pdev->dev, "GPIOPWMCTRL set failed\n");
 }

 VAR_8 = FUNC_0(VAR_4, VAR_3);

 VAR_6 = FUNC_5(VAR_2, (VAR_8 >> 8) & 0xff);
 if (!VAR_6)
  VAR_6 = FUNC_5(VAR_1, VAR_8 & 0xff);

 if (VAR_6)
  FUNC_2(&VAR_5->pdev->dev, "PWM0CLKDIV set failed\n");
 else
  FUNC_1(&VAR_5->pdev->dev, "PWM0CLKDIV set to 0x%04x (%d Hz)\n",
   VAR_8, VAR_3);
}
