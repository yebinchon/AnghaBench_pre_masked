
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mbox_chan {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct mbox_chan* chans; struct device* dev; } ;
struct bcm2835_mbox {scalar_t__ regs; TYPE_1__ controller; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct mbox_chan*,int*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct bcm2835_mbox *VAR_6 = VAR_5;
 struct device *VAR_7 = VAR_6->controller.dev;
 struct mbox_chan *VAR_8 = &VAR_6->controller.chans[0];

 while (!(FUNC_2(VAR_6->regs + VAR_3) & VAR_0)) {
  u32 VAR_9 = FUNC_2(VAR_6->regs + VAR_2);
  FUNC_0(VAR_7, "Reply 0x%08X\n", VAR_9);
  FUNC_1(VAR_8, &VAR_9);
 }
 return VAR_1;
}
