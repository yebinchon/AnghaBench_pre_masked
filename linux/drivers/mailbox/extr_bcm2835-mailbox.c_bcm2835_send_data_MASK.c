
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mbox_chan {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct bcm2835_mbox {int lock; TYPE_1__ controller; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 struct bcm2835_mbox* FUNC_0 (struct mbox_chan*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mbox_chan *VAR_1, void *VAR_2)
{
 struct bcm2835_mbox *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = *(u32 *)VAR_2;

 FUNC_2(&VAR_3->lock);
 FUNC_4(VAR_4, VAR_3->regs + VAR_0);
 FUNC_1(VAR_3->controller.dev, "Request 0x%08X\n", VAR_4);
 FUNC_3(&VAR_3->lock);
 return 0;
}
