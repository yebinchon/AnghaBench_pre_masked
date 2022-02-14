
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl08x_txd {int dsg_list; } ;
struct pl08x_sg {unsigned int len; void* dst_addr; void* src_addr; int node; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pl08x_sg* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct pl08x_txd *VAR_3,
      enum dma_transfer_direction VAR_4,
      dma_addr_t VAR_5,
      dma_addr_t VAR_6,
      unsigned int VAR_7)
{
 struct pl08x_sg *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct pl08x_sg), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_1(&VAR_8->node, &VAR_3->dsg_list);

 VAR_8->len = VAR_7;
 if (VAR_4 == VAR_0) {
  VAR_8->src_addr = VAR_6;
  VAR_8->dst_addr = VAR_5;
 } else {
  VAR_8->src_addr = VAR_5;
  VAR_8->dst_addr = VAR_6;
 }

 return 0;
}
