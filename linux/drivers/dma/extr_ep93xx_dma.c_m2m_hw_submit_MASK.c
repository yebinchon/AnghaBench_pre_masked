
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ep93xx_dma_data {int dummy; } ;
struct TYPE_2__ {struct ep93xx_dma_data* private; } ;
struct ep93xx_dma_chan {scalar_t__ regs; int runtime_ctrl; TYPE_1__ chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (struct ep93xx_dma_chan*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ep93xx_dma_chan *VAR_6)
{
 struct ep93xx_dma_data *VAR_7 = VAR_6->chan.private;
 u32 VAR_8 = FUNC_2(VAR_6->regs + VAR_0);






 VAR_8 &= ~VAR_4;
 VAR_8 |= VAR_6->runtime_ctrl;

 FUNC_1(VAR_6);
 VAR_8 |= VAR_1;

 if (FUNC_0(VAR_6)) {
  FUNC_1(VAR_6);
  VAR_8 |= VAR_3;
 }





 VAR_8 |= VAR_2;
 FUNC_3(VAR_8, VAR_6->regs + VAR_0);

 if (!VAR_7) {




  VAR_8 |= VAR_5;
  FUNC_3(VAR_8, VAR_6->regs + VAR_0);
 }
}
