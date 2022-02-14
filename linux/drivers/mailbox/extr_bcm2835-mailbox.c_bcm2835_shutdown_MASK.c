
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int dummy; } ;
struct bcm2835_mbox {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 struct bcm2835_mbox* FUNC_0 (struct mbox_chan*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mbox_chan *VAR_1)
{
 struct bcm2835_mbox *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(0, VAR_2->regs + VAR_0);
}
