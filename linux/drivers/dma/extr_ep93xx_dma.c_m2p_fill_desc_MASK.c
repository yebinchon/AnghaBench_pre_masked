
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ep93xx_dma_desc {int size; int dst_addr; int src_addr; } ;
struct ep93xx_dma_chan {int buffer; scalar_t__ regs; int chan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct ep93xx_dma_desc* FUNC_3 (struct ep93xx_dma_chan*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ep93xx_dma_chan *VAR_5)
{
 struct ep93xx_dma_desc *VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6) {
  FUNC_1(FUNC_0(VAR_5), "M2P: empty descriptor list\n");
  return;
 }

 if (FUNC_2(&VAR_5->chan) == VAR_0)
  VAR_7 = VAR_6->src_addr;
 else
  VAR_7 = VAR_6->dst_addr;

 if (VAR_5->buffer == 0) {
  FUNC_4(VAR_6->size, VAR_5->regs + VAR_3);
  FUNC_4(VAR_7, VAR_5->regs + VAR_1);
 } else {
  FUNC_4(VAR_6->size, VAR_5->regs + VAR_4);
  FUNC_4(VAR_7, VAR_5->regs + VAR_2);
 }

 VAR_5->buffer ^= 1;
}
