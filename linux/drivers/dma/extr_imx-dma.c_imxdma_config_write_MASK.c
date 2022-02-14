
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxdma_engine {int dummy; } ;
struct imxdma_channel {int watermark_level; int word_size; unsigned int ccr_from_device; int ccr_to_device; int dma_request; int channel; scalar_t__ hw_chaining; int per_address; struct imxdma_engine* imxdma; } ;
struct dma_slave_config {int src_maxburst; int src_addr_width; int dst_maxburst; int dst_addr_width; int dst_addr; int src_addr; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;



 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct imxdma_engine*,int,int ) ;
 struct imxdma_channel* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_7,
          struct dma_slave_config *VAR_8,
          enum dma_transfer_direction VAR_9)
{
 struct imxdma_channel *VAR_10 = FUNC_3(VAR_7);
 struct imxdma_engine *VAR_11 = VAR_10->imxdma;
 unsigned int VAR_12 = 0;

 if (VAR_9 == VAR_1) {
  VAR_10->per_address = VAR_8->src_addr;
  VAR_10->watermark_level = VAR_8->src_maxburst;
  VAR_10->word_size = VAR_8->src_addr_width;
 } else {
  VAR_10->per_address = VAR_8->dst_addr;
  VAR_10->watermark_level = VAR_8->dst_maxburst;
  VAR_10->word_size = VAR_8->dst_addr_width;
 }

 switch (VAR_10->word_size) {
 case 130:
  VAR_12 = VAR_4;
  break;
 case 129:
  VAR_12 = VAR_2;
  break;
 default:
 case 128:
  VAR_12 = VAR_3;
  break;
 }

 VAR_10->hw_chaining = 0;

 VAR_10->ccr_from_device = (VAR_12 | VAR_5) |
  ((VAR_3 | VAR_6) << 2) |
  VAR_0;
 VAR_10->ccr_to_device =
  (VAR_3 | VAR_6) |
  ((VAR_12 | VAR_5) << 2) | VAR_0;
 FUNC_2(VAR_11, VAR_10->dma_request,
    FUNC_1(VAR_10->channel));


 FUNC_2(VAR_11, VAR_10->watermark_level *
    VAR_10->word_size, FUNC_0(VAR_10->channel));

 return 0;
}
