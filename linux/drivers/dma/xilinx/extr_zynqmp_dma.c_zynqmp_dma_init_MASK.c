
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_dma_chan {int idle; scalar_t__ regs; scalar_t__ is_dmacoherent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct zynqmp_dma_chan *VAR_15)
{
 u32 VAR_16;

 FUNC_1(VAR_11, VAR_15->regs + VAR_10);
 VAR_16 = FUNC_0(VAR_15->regs + VAR_14);
 FUNC_1(VAR_16, VAR_15->regs + VAR_14);

 if (VAR_15->is_dmacoherent) {
  VAR_16 = VAR_7;
  VAR_16 = (VAR_16 & ~VAR_4) |
   (VAR_6 << VAR_5);
  FUNC_1(VAR_16, VAR_15->regs + VAR_9);
 }

 VAR_16 = FUNC_0(VAR_15->regs + VAR_8);
 if (VAR_15->is_dmacoherent) {
  VAR_16 = (VAR_16 & ~VAR_0) |
   (VAR_6 << VAR_1);
  VAR_16 = (VAR_16 & ~VAR_2) |
   (VAR_6 << VAR_3);
 }
 FUNC_1(VAR_16, VAR_15->regs + VAR_8);


 VAR_16 = FUNC_0(VAR_15->regs + VAR_13);
 VAR_16 = FUNC_0(VAR_15->regs + VAR_12);

 VAR_15->idle = 1;
}
