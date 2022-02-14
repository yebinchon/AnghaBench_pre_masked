
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_dc_buf {int refcount; scalar_t__ sgt_base; int size; } ;
struct dma_buf {int dummy; } ;
struct TYPE_4__ {unsigned long flags; struct vb2_dc_buf* priv; int size; int * ops; } ;


 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (struct dma_buf*) ;
 scalar_t__ FUNC_2 (int) ;
 struct dma_buf* FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct vb2_dc_buf*) ;

__attribute__((used)) static struct dma_buf *FUNC_6(void *VAR_2, unsigned long VAR_3)
{
 struct vb2_dc_buf *VAR_4 = VAR_2;
 struct dma_buf *VAR_5;
 FUNC_0(VAR_0);

 VAR_0.ops = &VAR_1;
 VAR_0.size = VAR_4->size;
 VAR_0.flags = VAR_3;
 VAR_0.priv = VAR_4;

 if (!VAR_4->sgt_base)
  VAR_4->sgt_base = FUNC_5(VAR_4);

 if (FUNC_2(!VAR_4->sgt_base))
  return ((void*)0);

 VAR_5 = FUNC_3(&VAR_0);
 if (FUNC_1(VAR_5))
  return ((void*)0);


 FUNC_4(&VAR_4->refcount);

 return VAR_5;
}
