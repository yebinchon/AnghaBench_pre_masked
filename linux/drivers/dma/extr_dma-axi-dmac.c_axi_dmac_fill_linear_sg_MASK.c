
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_dmac_sg {unsigned int dest_addr; unsigned int src_addr; unsigned int x_len; int y_len; } ;
struct axi_dmac_chan {unsigned int max_length; unsigned int length_align_mask; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef unsigned int dma_addr_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static struct axi_dmac_sg *FUNC_1(struct axi_dmac_chan *VAR_1,
 enum dma_transfer_direction VAR_2, dma_addr_t VAR_3,
 unsigned int VAR_4, unsigned int VAR_5,
 struct axi_dmac_sg *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;


 VAR_7 = FUNC_0(VAR_5, VAR_1->max_length);
 VAR_9 = FUNC_0(VAR_5, VAR_7);

 VAR_9 = ((VAR_9 - 1) | VAR_1->length_align_mask) + 1;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_10 = VAR_5;

  while (VAR_10 > VAR_9) {
   if (VAR_2 == VAR_0)
    VAR_6->dest_addr = VAR_3;
   else
    VAR_6->src_addr = VAR_3;
   VAR_6->x_len = VAR_9;
   VAR_6->y_len = 1;
   VAR_6++;
   VAR_3 += VAR_9;
   VAR_10 -= VAR_9;
  }

  if (VAR_2 == VAR_0)
   VAR_6->dest_addr = VAR_3;
  else
   VAR_6->src_addr = VAR_3;
  VAR_6->x_len = VAR_10;
  VAR_6->y_len = 1;
  VAR_6++;
  VAR_3 += VAR_10;
 }

 return VAR_6;
}
