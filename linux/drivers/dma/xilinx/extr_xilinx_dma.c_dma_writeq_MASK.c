
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct xilinx_dma_chan {scalar_t__ ctrl_offset; TYPE_1__* xdev; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct xilinx_dma_chan *VAR_0, u32 VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->xdev->regs + VAR_0->ctrl_offset + VAR_1);
}
