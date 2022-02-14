
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_chan {scalar_t__ ext_addr; } ;
struct xilinx_axidma_desc_hw {scalar_t__ buf_addr; int buf_addr_msb; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct xilinx_dma_chan *VAR_0,
         struct xilinx_axidma_desc_hw *VAR_1,
         dma_addr_t VAR_2, size_t VAR_3,
         size_t VAR_4)
{
 if (VAR_0->ext_addr) {
  VAR_1->buf_addr = FUNC_0(VAR_2 + VAR_3 + VAR_4);
  VAR_1->buf_addr_msb = FUNC_1(VAR_2 + VAR_3 +
       VAR_4);
 } else {
  VAR_1->buf_addr = VAR_2 + VAR_3 + VAR_4;
 }
}
