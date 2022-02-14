
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_node; struct dma_device* device; } ;
struct virt_dma_chan {TYPE_1__ chan; int task; int desc_completed; int desc_issued; int desc_submitted; int desc_allocated; int lock; } ;
struct dma_device {int channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned long) ;
 int VAR_0 ;

void FUNC_5(struct virt_dma_chan *VAR_1, struct dma_device *VAR_2)
{
 FUNC_1(&VAR_1->chan);

 FUNC_3(&VAR_1->lock);
 FUNC_0(&VAR_1->desc_allocated);
 FUNC_0(&VAR_1->desc_submitted);
 FUNC_0(&VAR_1->desc_issued);
 FUNC_0(&VAR_1->desc_completed);

 FUNC_4(&VAR_1->task, VAR_0, (unsigned long)VAR_1);

 VAR_1->chan.device = VAR_2;
 FUNC_2(&VAR_1->chan.device_node, &VAR_2->channels);
}
