
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bdev; } ;
struct virtio_gpu_device {TYPE_1__ mman; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct virtio_gpu_device *VAR_0)
{
 FUNC_1(&VAR_0->mman.bdev);
 FUNC_0("virtio_gpu: ttm finalized\n");
}
