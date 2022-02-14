
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_dma_chan {int idle; int err; int dev; int tasklet; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,struct zynqmp_dma_chan*) ;
 int FUNC_1 (int ,char*,struct zynqmp_dma_chan*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct zynqmp_dma_chan*,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct zynqmp_dma_chan *VAR_10 = (struct zynqmp_dma_chan *)VAR_9;
 u32 VAR_11, VAR_12, VAR_13;
 irqreturn_t VAR_14 = VAR_1;

 VAR_11 = FUNC_2(VAR_10->regs + VAR_7);
 VAR_12 = FUNC_2(VAR_10->regs + VAR_3);
 VAR_13 = VAR_11 & ~VAR_12;

 FUNC_4(VAR_11, VAR_10->regs + VAR_7);
 if (VAR_13 & VAR_4) {
  FUNC_3(&VAR_10->tasklet);
  VAR_14 = VAR_0;
 }

 if (VAR_13 & VAR_2)
  VAR_10->idle = 1;

 if (VAR_13 & VAR_5) {
  VAR_10->err = 1;
  FUNC_3(&VAR_10->tasklet);
  FUNC_1(VAR_10->dev, "Channel %p has errors\n", VAR_10);
  VAR_14 = VAR_0;
 }

 if (VAR_13 & VAR_6) {
  FUNC_5(VAR_10, VAR_13);
  FUNC_0(VAR_10->dev, "Channel %p overflow interrupt\n", VAR_10);
  VAR_14 = VAR_0;
 }

 return VAR_14;
}
