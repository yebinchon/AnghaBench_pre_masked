
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct axi_dma_chan {scalar_t__ chan_regs; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct axi_dma_chan *VAR_0, u32 VAR_1, u64 VAR_2)
{




 FUNC_0(FUNC_1(VAR_2), VAR_0->chan_regs + VAR_1);
 FUNC_0(FUNC_2(VAR_2), VAR_0->chan_regs + VAR_1 + 4);
}
