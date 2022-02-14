
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct mtk_uart_apdmadev {scalar_t__ support_33bits; TYPE_1__ ddev; } ;
struct mtk_chan {int irq; scalar_t__ base; } ;
struct dma_chan {TYPE_2__* device; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int VAR_11 ;
 int FUNC_1 (struct mtk_chan*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,scalar_t__,unsigned int,int,int,int) ;
 int FUNC_5 (int ,int ,int ,int ,struct dma_chan*) ;
 struct mtk_chan* FUNC_6 (struct dma_chan*) ;
 struct mtk_uart_apdmadev* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_13)
{
 struct mtk_uart_apdmadev *VAR_14 = FUNC_7(VAR_13->device);
 struct mtk_chan *VAR_15 = FUNC_6(VAR_13);
 unsigned int VAR_16;
 int VAR_17;

 VAR_17 = FUNC_2(VAR_14->ddev.dev);
 if (VAR_17 < 0) {
  FUNC_3(VAR_13->device->dev);
  return VAR_17;
 }

 FUNC_1(VAR_15, VAR_5, 0);
 FUNC_1(VAR_15, VAR_9, 0);
 FUNC_1(VAR_15, VAR_7, 0);
 FUNC_1(VAR_15, VAR_8, VAR_10);

 VAR_17 = FUNC_4(VAR_12, VAR_15->base + VAR_6,
     VAR_16, !VAR_16, 10, 100);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_5(VAR_15->irq, VAR_11,
     VAR_1, VAR_2, VAR_13);
 if (VAR_17 < 0) {
  FUNC_0(VAR_13->device->dev, "Can't request dma IRQ\n");
  return -VAR_0;
 }

 if (VAR_14->support_33bits)
  FUNC_1(VAR_15, VAR_3, VAR_4);

 return VAR_17;
}
