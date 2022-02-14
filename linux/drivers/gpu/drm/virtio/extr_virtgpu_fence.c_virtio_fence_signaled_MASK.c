
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ seqno; } ;
struct virtio_gpu_fence {TYPE_2__ f; TYPE_1__* drv; } ;
struct dma_fence {int dummy; } ;
struct TYPE_3__ {int last_seq; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct virtio_gpu_fence* FUNC_1 (struct dma_fence*) ;

bool FUNC_2(struct dma_fence *VAR_0)
{
 struct virtio_gpu_fence *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(&VAR_1->drv->last_seq) >= VAR_1->f.seqno)
  return 1;
 return 0;
}
