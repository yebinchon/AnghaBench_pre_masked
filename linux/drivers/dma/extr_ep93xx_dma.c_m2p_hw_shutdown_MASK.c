
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct ep93xx_dma_chan*) ;
 int FUNC_3 (struct ep93xx_dma_chan*,int ) ;

__attribute__((used)) static void FUNC_4(struct ep93xx_dma_chan *VAR_1)
{
 FUNC_3(VAR_1, 0);

 while (FUNC_2(VAR_1) != VAR_0)
  FUNC_1(FUNC_0(VAR_1), "M2P: Not yet IDLE\n");
}
