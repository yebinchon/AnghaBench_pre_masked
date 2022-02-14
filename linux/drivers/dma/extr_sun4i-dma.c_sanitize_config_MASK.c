
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int src_maxburst; int dst_maxburst; int src_addr_width; int dst_addr_width; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dma_slave_config *VAR_2,
      enum dma_transfer_direction VAR_3)
{
 switch (VAR_3) {
 case 128:
  if ((VAR_2->dst_addr_width == VAR_0) ||
      !VAR_2->dst_maxburst)
   return -VAR_1;

  if (VAR_2->src_addr_width == VAR_0)
   VAR_2->src_addr_width = VAR_2->dst_addr_width;

  if (!VAR_2->src_maxburst)
   VAR_2->src_maxburst = VAR_2->dst_maxburst;

  break;

 case 129:
  if ((VAR_2->src_addr_width == VAR_0) ||
      !VAR_2->src_maxburst)
   return -VAR_1;

  if (VAR_2->dst_addr_width == VAR_0)
   VAR_2->dst_addr_width = VAR_2->src_addr_width;

  if (!VAR_2->dst_maxburst)
   VAR_2->dst_maxburst = VAR_2->src_maxburst;

  break;
 default:
  return 0;
 }

 return 0;
}
