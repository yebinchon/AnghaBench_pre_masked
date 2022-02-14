
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ep93xx_dma_chan {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (struct ep93xx_dma_chan*) ;
 int FUNC_2 (struct ep93xx_dma_chan*,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ep93xx_dma_chan *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_3->regs + VAR_0);

 FUNC_1(VAR_3);
 VAR_4 |= VAR_2;

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_3);
  VAR_4 |= VAR_1;
 }

 FUNC_2(VAR_3, VAR_4);
}
