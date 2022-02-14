
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dmadev {int irq_lock; } ;
struct omap_chan {int paused; TYPE_1__* desc; scalar_t__ cyclic; } ;
struct dma_chan {int device; } ;
struct TYPE_2__ {scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct omap_chan* FUNC_3 (struct dma_chan*) ;
 struct omap_dmadev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_2)
{
 struct omap_chan *VAR_3 = FUNC_3(VAR_2);
 struct omap_dmadev *VAR_4 = FUNC_4(VAR_2->device);
 unsigned long VAR_5;
 int VAR_6 = -VAR_1;
 bool VAR_7 = 0;

 FUNC_1(&VAR_4->irq_lock, VAR_5);

 if (!VAR_3->desc)
  goto out;

 if (VAR_3->cyclic)
  VAR_7 = 1;
 else if (VAR_3->desc->dir == VAR_0)
  VAR_7 = 1;

 if (VAR_7 && !VAR_3->paused) {
  VAR_6 = FUNC_0(VAR_3);
  if (!VAR_6)
   VAR_3->paused = 1;
 }
out:
 FUNC_2(&VAR_4->irq_lock, VAR_5);

 return VAR_6;
}
