
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_channel {int watermark_level; int word_size; int direction; int per_address; int per_address2; } ;
struct dma_slave_config {int src_maxburst; int src_addr_width; int dst_maxburst; int dst_addr_width; int dst_addr; int src_addr; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dma_chan*) ;
 struct sdma_channel* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_4,
         struct dma_slave_config *VAR_5,
         enum dma_transfer_direction VAR_6)
{
 struct sdma_channel *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6 == VAR_1) {
  VAR_7->per_address = VAR_5->src_addr;
  VAR_7->watermark_level = VAR_5->src_maxburst *
   VAR_5->src_addr_width;
  VAR_7->word_size = VAR_5->src_addr_width;
 } else if (VAR_6 == VAR_0) {
  VAR_7->per_address2 = VAR_5->src_addr;
  VAR_7->per_address = VAR_5->dst_addr;
  VAR_7->watermark_level = VAR_5->src_maxburst &
   VAR_3;
  VAR_7->watermark_level |= (VAR_5->dst_maxburst << 16) &
   VAR_2;
  VAR_7->word_size = VAR_5->dst_addr_width;
 } else {
  VAR_7->per_address = VAR_5->dst_addr;
  VAR_7->watermark_level = VAR_5->dst_maxburst *
   VAR_5->dst_addr_width;
  VAR_7->word_size = VAR_5->dst_addr_width;
 }
 VAR_7->direction = VAR_6;
 return FUNC_0(VAR_4);
}
