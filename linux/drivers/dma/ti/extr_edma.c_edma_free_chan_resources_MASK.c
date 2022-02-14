
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edma_chan {int* slot; int alloced; int hw_triggered; int ch_num; int * tc; TYPE_1__* ecc; int vchan; } ;
struct dma_chan {int chan_id; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int dummy_slot; struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (struct edma_chan*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct edma_chan*,int ) ;
 int FUNC_5 (struct edma_chan*) ;
 struct edma_chan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dma_chan *VAR_1)
{
 struct edma_chan *VAR_2 = FUNC_6(VAR_1);
 struct device *VAR_3 = VAR_2->ecc->dev;
 int VAR_4;


 FUNC_5(VAR_2);

 FUNC_7(&VAR_2->vchan);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->slot[VAR_4] >= 0) {
   FUNC_3(VAR_2->ecc, VAR_2->slot[VAR_4]);
   VAR_2->slot[VAR_4] = -1;
  }
 }


 FUNC_4(VAR_2, VAR_2->ecc->dummy_slot);


 if (VAR_2->alloced) {
  FUNC_2(VAR_2);
  VAR_2->alloced = 0;
 }

 VAR_2->tc = ((void*)0);
 VAR_2->hw_triggered = 0;

 FUNC_1(VAR_3, "Free eDMA channel %d for virt channel %d\n",
  FUNC_0(VAR_2->ch_num), VAR_1->chan_id);
}
