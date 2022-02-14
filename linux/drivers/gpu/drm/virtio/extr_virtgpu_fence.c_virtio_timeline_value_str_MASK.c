
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct virtio_gpu_fence {TYPE_1__* drv; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int last_seq; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,int ) ;
 struct virtio_gpu_fence* FUNC_2 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_3(struct dma_fence *VAR_0, char *VAR_1, int VAR_2)
{
 struct virtio_gpu_fence *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, VAR_2, "%llu", (u64)FUNC_0(&VAR_3->drv->last_seq));
}
