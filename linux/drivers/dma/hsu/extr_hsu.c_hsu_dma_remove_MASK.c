
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsu_dma_chip {struct hsu_dma* hsu; } ;
struct TYPE_2__ {int task; } ;
struct hsu_dma_chan {TYPE_1__ vchan; } ;
struct hsu_dma {unsigned short nr_channels; struct hsu_dma_chan* chan; int dma; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct hsu_dma_chip *VAR_0)
{
 struct hsu_dma *VAR_1 = VAR_0->hsu;
 unsigned short VAR_2;

 FUNC_0(&VAR_1->dma);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_channels; VAR_2++) {
  struct hsu_dma_chan *VAR_3 = &VAR_1->chan[VAR_2];

  FUNC_1(&VAR_3->vchan.task);
 }

 return 0;
}
