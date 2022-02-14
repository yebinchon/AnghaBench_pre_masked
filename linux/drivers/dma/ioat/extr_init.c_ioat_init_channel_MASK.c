
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int channels; } ;
struct ioatdma_device {struct ioatdma_chan** idx; scalar_t__ reg_base; struct dma_device dma_dev; } ;
struct dma_chan {int device_node; struct dma_device* device; } ;
struct ioatdma_chan {int cleanup_task; int timer; struct dma_chan dma_chan; int cleanup_lock; scalar_t__ reg_base; struct ioatdma_device* ioat_dma; } ;


 int FUNC_0 (struct dma_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ioatdma_device *VAR_2,
    struct ioatdma_chan *VAR_3, int VAR_4)
{
 struct dma_device *VAR_5 = &VAR_2->dma_dev;
 struct dma_chan *VAR_6 = &VAR_3->dma_chan;
 unsigned long VAR_7 = (unsigned long) VAR_6;

 VAR_3->ioat_dma = VAR_2;
 VAR_3->reg_base = VAR_2->reg_base + (0x80 * (VAR_4 + 1));
 FUNC_2(&VAR_3->cleanup_lock);
 VAR_3->dma_chan.device = VAR_5;
 FUNC_0(&VAR_3->dma_chan);
 FUNC_1(&VAR_3->dma_chan.device_node, &VAR_5->channels);
 VAR_2->idx[VAR_4] = VAR_3;
 FUNC_4(&VAR_3->timer, VAR_1, 0);
 FUNC_3(&VAR_3->cleanup_task, VAR_0, VAR_7);
}
