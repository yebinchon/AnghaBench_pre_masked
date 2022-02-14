
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_pdma_chan {int dcmd; int dir; int dev_addr; scalar_t__ drcmr; } ;
struct dma_slave_config {int src_maxburst; int src_addr_width; int src_addr; int dst_maxburst; int dst_addr_width; int dst_addr; scalar_t__ slave_id; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct mmp_pdma_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_1(struct dma_chan *VAR_17,
      struct dma_slave_config *VAR_18,
      enum dma_transfer_direction VAR_19)
{
 struct mmp_pdma_chan *VAR_20 = FUNC_0(VAR_17);
 u32 VAR_21 = 0, VAR_22 = 0;
 enum dma_slave_buswidth VAR_23 = VAR_15;

 if (!VAR_17)
  return -VAR_16;

 if (VAR_19 == VAR_10) {
  VAR_20->dcmd = VAR_6 | VAR_3;
  VAR_21 = VAR_18->src_maxburst;
  VAR_23 = VAR_18->src_addr_width;
  VAR_22 = VAR_18->src_addr;
 } else if (VAR_19 == VAR_11) {
  VAR_20->dcmd = VAR_5 | VAR_4;
  VAR_21 = VAR_18->dst_maxburst;
  VAR_23 = VAR_18->dst_addr_width;
  VAR_22 = VAR_18->dst_addr;
 }

 if (VAR_23 == VAR_12)
  VAR_20->dcmd |= VAR_7;
 else if (VAR_23 == VAR_13)
  VAR_20->dcmd |= VAR_8;
 else if (VAR_23 == VAR_14)
  VAR_20->dcmd |= VAR_9;

 if (VAR_21 == 8)
  VAR_20->dcmd |= VAR_2;
 else if (VAR_21 == 16)
  VAR_20->dcmd |= VAR_0;
 else if (VAR_21 == 32)
  VAR_20->dcmd |= VAR_1;

 VAR_20->dir = VAR_19;
 VAR_20->dev_addr = VAR_22;




 if (VAR_18->slave_id)
  VAR_20->drcmr = VAR_18->slave_id;

 return 0;
}
