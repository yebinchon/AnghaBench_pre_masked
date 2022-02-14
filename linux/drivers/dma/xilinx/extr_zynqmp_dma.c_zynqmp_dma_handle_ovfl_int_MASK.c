
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_dma_chan {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct zynqmp_dma_chan *VAR_6, u32 VAR_7)
{
 if (VAR_7 & VAR_0)
  FUNC_1(0, VAR_6->regs + VAR_5);
 if (VAR_7 & VAR_2)
  FUNC_0(VAR_6->regs + VAR_1);
 if (VAR_7 & VAR_4)
  FUNC_0(VAR_6->regs + VAR_3);
}
