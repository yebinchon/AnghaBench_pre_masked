
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_object {int kmap; int * vmap; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct virtio_gpu_object *VAR_0)
{
 VAR_0->vmap = ((void*)0);
 FUNC_0(&VAR_0->kmap);
}
