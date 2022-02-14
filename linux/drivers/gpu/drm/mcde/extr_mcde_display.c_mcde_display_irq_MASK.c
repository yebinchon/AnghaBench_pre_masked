
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int crtc; } ;
struct mcde {scalar_t__ flow_active; scalar_t__ regs; int dev; TYPE_1__ pipe; int flow_lock; scalar_t__ oneshot_mode; int mdsi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;

void FUNC_8(struct mcde *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 bool VAR_18 = 0;


 VAR_15 = FUNC_4(VAR_14->regs + VAR_4);
 VAR_16 = FUNC_4(VAR_14->regs + VAR_3);
 VAR_17 = FUNC_4(VAR_14->regs + VAR_2);
 if (FUNC_3(VAR_14->mdsi)) {
  u32 VAR_19;







  if (VAR_14->oneshot_mode) {
   FUNC_5(&VAR_14->flow_lock);
   if (--VAR_14->flow_active == 0) {
    FUNC_0(VAR_14->dev, "TE0 IRQ\n");

    VAR_19 = FUNC_4(VAR_14->regs + VAR_0);
    VAR_19 &= ~VAR_1;
    FUNC_7(VAR_19, VAR_14->regs + VAR_0);
   }
   FUNC_6(&VAR_14->flow_lock);
  }
 }


 if (VAR_15 & VAR_5) {
  FUNC_0(VAR_14->dev, "chnl A vblank IRQ\n");
  VAR_18 = 1;
 }
 if (VAR_15 & VAR_6) {
  FUNC_0(VAR_14->dev, "chnl B vblank IRQ\n");
  VAR_18 = 1;
 }
 if (VAR_15 & VAR_7)
  FUNC_0(VAR_14->dev, "chnl C0 vblank IRQ\n");
 if (VAR_15 & VAR_8)
  FUNC_0(VAR_14->dev, "chnl C1 vblank IRQ\n");
 if (VAR_15 & VAR_9)
  FUNC_0(VAR_14->dev, "chnl C0 TE IRQ\n");
 if (VAR_15 & VAR_10)
  FUNC_0(VAR_14->dev, "chnl C1 TE IRQ\n");
 FUNC_7(VAR_15, VAR_14->regs + VAR_13);

 if (VAR_18)
  FUNC_2(&VAR_14->pipe.crtc);

 if (VAR_16)
  FUNC_1(VAR_14->dev, "some stray overlay IRQ %08x\n", VAR_16);
 FUNC_7(VAR_16, VAR_14->regs + VAR_12);

 if (VAR_17)
  FUNC_1(VAR_14->dev, "some stray channel error IRQ %08x\n",
    VAR_17);
 FUNC_7(VAR_17, VAR_14->regs + VAR_11);
}
