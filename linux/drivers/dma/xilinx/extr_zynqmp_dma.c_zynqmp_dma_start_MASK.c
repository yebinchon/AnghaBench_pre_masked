
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_dma_chan {int idle; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct zynqmp_dma_chan *VAR_5)
{
 FUNC_0(VAR_3, VAR_5->regs + VAR_2);
 FUNC_0(0, VAR_5->regs + VAR_4);
 VAR_5->idle = 0;
 FUNC_0(VAR_1, VAR_5->regs + VAR_0);
}
