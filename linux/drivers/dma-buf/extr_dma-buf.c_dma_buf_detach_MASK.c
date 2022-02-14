
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf_attachment {int node; int dir; scalar_t__ sgt; } ;
struct dma_buf {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* detach ) (struct dma_buf*,struct dma_buf_attachment*) ;int (* unmap_dma_buf ) (struct dma_buf_attachment*,scalar_t__,int ) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dma_buf_attachment*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dma_buf_attachment*,scalar_t__,int ) ;
 int FUNC_6 (struct dma_buf*,struct dma_buf_attachment*) ;

void FUNC_7(struct dma_buf *VAR_0, struct dma_buf_attachment *VAR_1)
{
 if (FUNC_0(!VAR_0 || !VAR_1))
  return;

 if (VAR_1->sgt)
  VAR_0->ops->unmap_dma_buf(VAR_1, VAR_1->sgt, VAR_1->dir);

 FUNC_3(&VAR_0->lock);
 FUNC_2(&VAR_1->node);
 if (VAR_0->ops->detach)
  VAR_0->ops->detach(VAR_0, VAR_1);

 FUNC_4(&VAR_0->lock);
 FUNC_1(VAR_1);
}
