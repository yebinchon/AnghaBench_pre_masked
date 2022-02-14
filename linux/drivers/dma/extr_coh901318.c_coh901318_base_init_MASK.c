
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_device {int channels; } ;
struct TYPE_2__ {int device_node; struct dma_device* device; } ;
struct coh901318_chan {int id; TYPE_1__ chan; int tasklet; int queue; int active; int free; scalar_t__ busy; scalar_t__ nbr_active_done; int lock; struct coh901318_base* base; } ;
struct coh901318_base {struct coh901318_chan* chans; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct dma_device *VAR_1, const int *VAR_2,
    struct coh901318_base *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct coh901318_chan *VAR_6;

 FUNC_0(&VAR_1->channels);

 for (VAR_4 = 0; VAR_2[VAR_4] != -1; VAR_4 += 2) {
  for (VAR_5 = VAR_2[VAR_4]; VAR_5 <= VAR_2[VAR_4+1]; VAR_5++) {
   VAR_6 = &VAR_3->chans[VAR_5];

   VAR_6->base = VAR_3;
   VAR_6->chan.device = VAR_1;
   VAR_6->id = VAR_5;





   FUNC_2(&VAR_6->lock);

   VAR_6->nbr_active_done = 0;
   VAR_6->busy = 0;
   FUNC_0(&VAR_6->free);
   FUNC_0(&VAR_6->active);
   FUNC_0(&VAR_6->queue);

   FUNC_3(&VAR_6->tasklet, VAR_0,
         (unsigned long) VAR_6);

   FUNC_1(&VAR_6->chan.device_node,
          &VAR_1->channels);
  }
 }
}
