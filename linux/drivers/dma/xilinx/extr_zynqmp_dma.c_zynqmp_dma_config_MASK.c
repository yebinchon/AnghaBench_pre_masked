
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_dma_chan {int src_burst_len; int dst_burst_len; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct zynqmp_dma_chan *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7->regs + VAR_4);
 VAR_8 |= VAR_6;
 FUNC_1(VAR_8, VAR_7->regs + VAR_4);

 VAR_8 = FUNC_0(VAR_7->regs + VAR_5);
 VAR_8 = (VAR_8 & ~VAR_0) |
  (VAR_7->src_burst_len << VAR_1);
 VAR_8 = (VAR_8 & ~VAR_2) |
  (VAR_7->dst_burst_len << VAR_3);
 FUNC_1(VAR_8, VAR_7->regs + VAR_5);
}
