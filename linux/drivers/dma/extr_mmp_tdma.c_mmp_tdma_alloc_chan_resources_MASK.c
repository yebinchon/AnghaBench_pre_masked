
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_submit; } ;
struct mmp_tdma_chan {scalar_t__ irq; int dev; TYPE_1__ desc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ,char*,struct mmp_tdma_chan*) ;
 int FUNC_1 (TYPE_1__*,struct dma_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mmp_tdma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_2)
{
 struct mmp_tdma_chan *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_1(&VAR_3->desc, VAR_2);
 VAR_3->desc.tx_submit = VAR_1;

 if (VAR_3->irq) {
  VAR_4 = FUNC_0(VAR_3->dev, VAR_3->irq,
   VAR_0, 0, "tdma", VAR_3);
  if (VAR_4)
   return VAR_4;
 }
 return 1;
}
