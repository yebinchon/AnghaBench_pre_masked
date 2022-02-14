
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct dw_axi_dma {struct axi_dma_chan* chan; TYPE_1__* hdata; } ;
struct axi_dma_chip {int dev; struct dw_axi_dma* dw; } ;
struct axi_dma_chan {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {size_t nr_channels; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axi_dma_chan*) ;
 int FUNC_1 (struct axi_dma_chan*,size_t) ;
 int FUNC_2 (struct axi_dma_chan*,size_t) ;
 size_t FUNC_3 (struct axi_dma_chan*) ;
 int FUNC_4 (struct axi_dma_chan*) ;
 int FUNC_5 (struct axi_dma_chip*) ;
 int FUNC_6 (struct axi_dma_chip*) ;
 int FUNC_7 (int ,char*,int ,size_t,size_t) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct axi_dma_chip *VAR_5 = VAR_4;
 struct dw_axi_dma *VAR_6 = VAR_5->dw;
 struct axi_dma_chan *VAR_7;

 u32 VAR_8, VAR_9;


 FUNC_5(VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_6->hdata->nr_channels; VAR_9++) {
  VAR_7 = &VAR_6->chan[VAR_9];
  VAR_8 = FUNC_3(VAR_7);
  FUNC_2(VAR_7, VAR_8);

  FUNC_7(VAR_5->dev, "%s %u IRQ status: 0x%08x\n",
   FUNC_4(VAR_7), VAR_9, VAR_8);

  if (VAR_8 & VAR_0)
   FUNC_1(VAR_7, VAR_8);
  else if (VAR_8 & VAR_1)
   FUNC_0(VAR_7);
 }


 FUNC_6(VAR_5);

 return VAR_2;
}
