
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_dma_desc {int size; int dst_addr; int src_addr; } ;
struct ep93xx_dma_chan {int buffer; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 struct ep93xx_dma_desc* FUNC_2 (struct ep93xx_dma_chan*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ep93xx_dma_chan *VAR_6)
{
 struct ep93xx_dma_desc *VAR_7;

 VAR_7 = FUNC_2(VAR_6);
 if (!VAR_7) {
  FUNC_1(FUNC_0(VAR_6), "M2M: empty descriptor list\n");
  return;
 }

 if (VAR_6->buffer == 0) {
  FUNC_3(VAR_7->src_addr, VAR_6->regs + VAR_4);
  FUNC_3(VAR_7->dst_addr, VAR_6->regs + VAR_2);
  FUNC_3(VAR_7->size, VAR_6->regs + VAR_0);
 } else {
  FUNC_3(VAR_7->src_addr, VAR_6->regs + VAR_5);
  FUNC_3(VAR_7->dst_addr, VAR_6->regs + VAR_3);
  FUNC_3(VAR_7->size, VAR_6->regs + VAR_1);
 }

 VAR_6->buffer ^= 1;
}
