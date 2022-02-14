
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct tve200_drm_dev_private {scalar_t__ regs; TYPE_2__* drm; TYPE_1__ pipe; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct tve200_drm_dev_private *VAR_10 = VAR_9;
 u32 VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_2(VAR_10->regs + VAR_4);

 if (!VAR_11)
  return VAR_1;
 if (VAR_11 & VAR_5) {
  VAR_12 = FUNC_2(VAR_10->regs + VAR_2);

  if (!(VAR_12 & VAR_6)) {
   FUNC_1(&VAR_10->pipe.crtc);

   VAR_12 |= VAR_7;
  } else {

   VAR_12 &= ~VAR_6;
  }
  FUNC_3(VAR_12, VAR_10->regs + VAR_2);
 } else
  FUNC_0(VAR_10->drm->dev, "stray IRQ %08x\n", VAR_11);


 FUNC_3(VAR_11, VAR_10->regs + VAR_3);

 return VAR_0;
}
