
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dmadev {int irq_lock; } ;
struct omap_chan {int paused; TYPE_1__* desc; } ;
struct dma_chan {int device; } ;
struct TYPE_2__ {int clnk_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct omap_chan*,int ,int ) ;
 int FUNC_2 (struct omap_chan*,TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct omap_chan* FUNC_5 (struct dma_chan*) ;
 struct omap_dmadev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_2)
{
 struct omap_chan *VAR_3 = FUNC_5(VAR_2);
 struct omap_dmadev *VAR_4 = FUNC_6(VAR_2->device);
 unsigned long VAR_5;
 int VAR_6 = -VAR_1;

 FUNC_3(&VAR_4->irq_lock, VAR_5);

 if (VAR_3->paused && VAR_3->desc) {
  FUNC_0();


  FUNC_1(VAR_3, VAR_0, VAR_3->desc->clnk_ctrl);

  FUNC_2(VAR_3, VAR_3->desc);
  VAR_3->paused = 0;
  VAR_6 = 0;
 }
 FUNC_4(&VAR_4->irq_lock, VAR_5);

 return VAR_6;
}
