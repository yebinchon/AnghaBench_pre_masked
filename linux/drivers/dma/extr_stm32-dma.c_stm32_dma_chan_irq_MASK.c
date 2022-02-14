
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_dma_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct stm32_dma_chan {TYPE_1__ vchan; int id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct stm32_dma_chan*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct stm32_dma_device* FUNC_7 (struct stm32_dma_chan*) ;
 int FUNC_8 (struct stm32_dma_chan*) ;
 int FUNC_9 (struct stm32_dma_chan*,int) ;
 int FUNC_10 (struct stm32_dma_chan*) ;
 int FUNC_11 (struct stm32_dma_device*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_7, void *VAR_8)
{
 struct stm32_dma_chan *VAR_9 = VAR_8;
 struct stm32_dma_device *VAR_10 = FUNC_7(VAR_9);
 u32 VAR_11, VAR_12, VAR_13;

 FUNC_5(&VAR_9->vchan.lock);

 VAR_11 = FUNC_10(VAR_9);
 VAR_12 = FUNC_11(VAR_10, FUNC_0(VAR_9->id));
 VAR_13 = FUNC_11(VAR_10, FUNC_1(VAR_9->id));

 if (VAR_11 & VAR_6) {
  FUNC_9(VAR_9, VAR_6);
  if (VAR_12 & VAR_4)
   FUNC_8(VAR_9);
  VAR_11 &= ~VAR_6;
 }
 if (VAR_11 & VAR_2) {
  FUNC_9(VAR_9, VAR_2);
  VAR_11 &= ~VAR_2;
 }
 if (VAR_11 & VAR_1) {
  FUNC_9(VAR_9, VAR_1);
  VAR_11 &= ~VAR_1;
  if (VAR_13 & VAR_5) {
   if (!(VAR_12 & VAR_3))
    FUNC_4(FUNC_2(VAR_9), "FIFO Error\n");
   else
    FUNC_3(FUNC_2(VAR_9), "FIFO over/underrun\n");
  }
 }
 if (VAR_11) {
  FUNC_9(VAR_9, VAR_11);
  FUNC_4(FUNC_2(VAR_9), "DMA error: status=0x%08x\n", VAR_11);
  if (!(VAR_12 & VAR_3))
   FUNC_4(FUNC_2(VAR_9), "chan disabled by HW\n");
 }

 FUNC_6(&VAR_9->vchan.lock);

 return VAR_0;
}
