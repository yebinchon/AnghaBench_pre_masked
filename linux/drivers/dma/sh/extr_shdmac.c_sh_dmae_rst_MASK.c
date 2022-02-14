
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ dma_dev; } ;
struct sh_dmae_device {TYPE_3__* pdata; TYPE_2__ shdma_dev; struct sh_dmae_chan** chan; } ;
struct sh_dmae_chan {int dummy; } ;
struct TYPE_6__ {int channel_num; unsigned short dmaor_init; scalar_t__ chclr_present; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sh_dmae_chan*) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned short FUNC_2 (struct sh_dmae_device*) ;
 int FUNC_3 (struct sh_dmae_device*,unsigned short) ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct sh_dmae_device *VAR_5)
{
 unsigned short VAR_6;
 unsigned long VAR_7;

 FUNC_4(&VAR_4, VAR_7);

 VAR_6 = FUNC_2(VAR_5) & ~(VAR_2 | VAR_0 | VAR_1);

 if (VAR_5->pdata->chclr_present) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5->pdata->channel_num; VAR_8++) {
   struct sh_dmae_chan *VAR_9 = VAR_5->chan[VAR_8];
   if (VAR_9)
    FUNC_0(VAR_9);
  }
 }

 FUNC_3(VAR_5, VAR_6 | VAR_5->pdata->dmaor_init);

 VAR_6 = FUNC_2(VAR_5);

 FUNC_5(&VAR_4, VAR_7);

 if (VAR_6 & (VAR_0 | VAR_2)) {
  FUNC_1(VAR_5->shdma_dev.dma_dev.dev, "Can't initialize DMAOR.\n");
  return -VAR_3;
 }
 if (VAR_5->pdata->dmaor_init & ~VAR_6)
  FUNC_1(VAR_5->shdma_dev.dma_dev.dev,
    "DMAOR=0x%x hasn't latched the initial value 0x%x.\n",
    VAR_6, VAR_5->pdata->dmaor_init);
 return 0;
}
