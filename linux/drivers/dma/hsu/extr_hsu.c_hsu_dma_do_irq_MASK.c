
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hsu_dma_desc {scalar_t__ active; scalar_t__ nents; int status; int vdesc; } ;
struct hsu_dma_chip {TYPE_1__* hsu; } ;
struct TYPE_4__ {int lock; } ;
struct hsu_dma_chan {TYPE_2__ vchan; struct hsu_dma_desc* desc; } ;
struct TYPE_3__ {unsigned short nr_channels; struct hsu_dma_chan* chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hsu_dma_chan*) ;
 int FUNC_1 (struct hsu_dma_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hsu_dma_chip *VAR_3, unsigned short VAR_4, u32 VAR_5)
{
 struct hsu_dma_chan *VAR_6;
 struct hsu_dma_desc *VAR_7;
 unsigned long VAR_8;


 if (VAR_4 >= VAR_3->hsu->nr_channels)
  return 0;

 VAR_6 = &VAR_3->hsu->chan[VAR_4];

 FUNC_2(&VAR_6->vchan.lock, VAR_8);
 VAR_7 = VAR_6->desc;
 if (VAR_7) {
  if (VAR_5 & VAR_2) {
   VAR_7->status = VAR_1;
  } else if (VAR_7->active < VAR_7->nents) {
   FUNC_0(VAR_6);
  } else {
   FUNC_4(&VAR_7->vdesc);
   VAR_7->status = VAR_0;
   FUNC_1(VAR_6);
  }
 }
 FUNC_3(&VAR_6->vchan.lock, VAR_8);

 return 1;
}
