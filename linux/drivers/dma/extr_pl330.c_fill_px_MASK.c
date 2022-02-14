
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl330_xfer {size_t bytes; void* src_addr; void* dst_addr; } ;
typedef void* dma_addr_t ;



__attribute__((used)) static inline void FUNC_0(struct pl330_xfer *VAR_0,
  dma_addr_t VAR_1, dma_addr_t VAR_2, size_t VAR_3)
{
 VAR_0->bytes = VAR_3;
 VAR_0->dst_addr = VAR_1;
 VAR_0->src_addr = VAR_2;
}
