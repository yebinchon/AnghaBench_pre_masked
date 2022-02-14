
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jz4780_dma_hwdesc {size_t dcm; size_t dsa; size_t dta; size_t dtc; } ;
struct dma_slave_config {size_t dst_addr; size_t dst_addr_width; size_t dst_maxburst; size_t src_addr; size_t src_addr_width; size_t src_maxburst; } ;
struct jz4780_dma_chan {size_t transfer_shift; struct dma_slave_config config; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;


 int VAR_0 ;



 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_0 (struct jz4780_dma_chan*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_1(struct jz4780_dma_chan *VAR_8,
 struct jz4780_dma_hwdesc *VAR_9, dma_addr_t VAR_10, size_t VAR_11,
 enum dma_transfer_direction VAR_12)
{
 struct dma_slave_config *VAR_13 = &VAR_8->config;
 uint32_t VAR_14, VAR_15, VAR_16;

 if (VAR_12 == VAR_0) {
  VAR_9->dcm = VAR_4;
  VAR_9->dsa = VAR_10;
  VAR_9->dta = VAR_13->dst_addr;

  VAR_14 = VAR_13->dst_addr_width;
  VAR_15 = VAR_13->dst_maxburst;
 } else {
  VAR_9->dcm = VAR_2;
  VAR_9->dsa = VAR_13->src_addr;
  VAR_9->dta = VAR_10;

  VAR_14 = VAR_13->src_addr_width;
  VAR_15 = VAR_13->src_maxburst;
 }
 VAR_16 = FUNC_0(VAR_8, VAR_10 | VAR_11 | (VAR_14 * VAR_15),
           &VAR_8->transfer_shift);

 switch (VAR_14) {
 case 130:
 case 129:
  break;
 case 128:
  VAR_14 = VAR_7;
  break;
 default:
  return -VAR_1;
 }

 VAR_9->dcm |= VAR_16 << VAR_6;
 VAR_9->dcm |= VAR_14 << VAR_5;
 VAR_9->dcm |= VAR_14 << VAR_3;

 VAR_9->dtc = VAR_11 >> VAR_8->transfer_shift;
 return 0;
}
