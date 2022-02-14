
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct virt_dma_chan {int lock; int desc_completed; } ;
struct sun6i_vchan {int cyclic; struct virt_dma_chan vc; struct sun6i_pchan* phy; int node; } ;
struct sun6i_pchan {int * done; TYPE_1__* desc; int * vchan; scalar_t__ base; } ;
struct sun6i_dma_dev {int lock; } ;
struct dma_chan {int device; } ;
struct TYPE_2__ {struct virt_dma_desc vd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 struct sun6i_dma_dev* FUNC_7 (int ) ;
 struct sun6i_vchan* FUNC_8 (struct dma_chan*) ;
 int FUNC_9 (struct virt_dma_chan*,int *) ;
 int FUNC_10 (struct virt_dma_chan*,int *) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct dma_chan *VAR_5)
{
 struct sun6i_dma_dev *VAR_6 = FUNC_7(VAR_5->device);
 struct sun6i_vchan *VAR_7 = FUNC_8(VAR_5);
 struct sun6i_pchan *VAR_8 = VAR_7->phy;
 unsigned long VAR_9;
 FUNC_0(VAR_4);

 FUNC_3(&VAR_6->lock);
 FUNC_2(&VAR_7->node);
 FUNC_5(&VAR_6->lock);

 FUNC_4(&VAR_7->vc.lock, VAR_9);

 if (VAR_7->cyclic) {
  VAR_7->cyclic = 0;
  if (VAR_8 && VAR_8->desc) {
   struct virt_dma_desc *VAR_10 = &VAR_8->desc->vd;
   struct virt_dma_chan *VAR_11 = &VAR_7->vc;

   FUNC_1(&VAR_10->node, &VAR_11->desc_completed);
  }
 }

 FUNC_10(&VAR_7->vc, &VAR_4);

 if (VAR_8) {
  FUNC_11(VAR_1, VAR_8->base + VAR_0);
  FUNC_11(VAR_3, VAR_8->base + VAR_2);

  VAR_7->phy = ((void*)0);
  VAR_8->vchan = ((void*)0);
  VAR_8->desc = ((void*)0);
  VAR_8->done = ((void*)0);
 }

 FUNC_6(&VAR_7->vc.lock, VAR_9);

 FUNC_9(&VAR_7->vc, &VAR_4);

 return 0;
}
