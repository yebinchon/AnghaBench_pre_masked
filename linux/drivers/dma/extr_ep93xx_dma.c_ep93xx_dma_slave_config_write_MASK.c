
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct ep93xx_dma_chan {int lock; void* runtime_ctrl; void* runtime_addr; TYPE_1__* edma; } ;
struct dma_slave_config {int src_addr_width; int dst_addr_width; void* dst_addr; void* src_addr; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
struct TYPE_2__ {int m2m; } ;







 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct ep93xx_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_3,
      enum dma_transfer_direction VAR_4,
      struct dma_slave_config *VAR_5)
{
 struct ep93xx_dma_chan *VAR_6 = FUNC_2(VAR_3);
 enum dma_slave_buswidth VAR_7;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;

 if (!VAR_6->edma->m2m)
  return -VAR_0;

 switch (VAR_4) {
 case 132:
  VAR_7 = VAR_5->src_addr_width;
  VAR_9 = VAR_5->src_addr;
  break;

 case 131:
  VAR_7 = VAR_5->dst_addr_width;
  VAR_9 = VAR_5->dst_addr;
  break;

 default:
  return -VAR_0;
 }

 switch (VAR_7) {
 case 130:
  VAR_10 = 0;
  break;
 case 129:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_6->lock, VAR_8);
 VAR_6->runtime_addr = VAR_9;
 VAR_6->runtime_ctrl = VAR_10;
 FUNC_1(&VAR_6->lock, VAR_8);

 return 0;
}
