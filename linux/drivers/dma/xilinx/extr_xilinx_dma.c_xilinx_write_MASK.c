
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilinx_dma_chan {scalar_t__ ext_addr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct xilinx_dma_chan*,int ,int ) ;
 int FUNC_1 (struct xilinx_dma_chan*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct xilinx_dma_chan *VAR_0, u32 VAR_1,
    dma_addr_t VAR_2)
{
 if (VAR_0->ext_addr)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
