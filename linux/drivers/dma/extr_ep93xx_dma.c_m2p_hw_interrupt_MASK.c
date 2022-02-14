
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cookie; } ;
struct ep93xx_dma_desc {int size; int dst_addr; int src_addr; TYPE_1__ txd; } ;
struct ep93xx_dma_chan {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct ep93xx_dma_chan*) ;
 struct ep93xx_dma_desc* FUNC_3 (struct ep93xx_dma_chan*) ;
 int FUNC_4 (struct ep93xx_dma_chan*) ;
 int FUNC_5 (struct ep93xx_dma_chan*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct ep93xx_dma_chan *VAR_10)
{
 u32 VAR_11 = FUNC_6(VAR_10->regs + VAR_6);
 u32 VAR_12;

 if (VAR_11 & VAR_7) {
  struct ep93xx_dma_desc *VAR_13 = FUNC_3(VAR_10);


  FUNC_7(1, VAR_10->regs + VAR_6);
  FUNC_1(FUNC_0(VAR_10),
   "DMA transfer failed! Details:\n"
   "\tcookie	: %d\n"
   "\tsrc_addr	: 0x%08x\n"
   "\tdst_addr	: 0x%08x\n"
   "\tsize		: %zu\n",
   VAR_13->txd.cookie, VAR_13->src_addr, VAR_13->dst_addr,
   VAR_13->size);
 }






 if (!(VAR_11 & (VAR_9 | VAR_8)))
  return VAR_2;

 if (FUNC_2(VAR_10)) {
  FUNC_4(VAR_10);
  return VAR_1;
 }


 VAR_12 = FUNC_6(VAR_10->regs + VAR_3);
 VAR_12 &= ~(VAR_5 | VAR_4);
 FUNC_5(VAR_10, VAR_12);

 return VAR_0;
}
