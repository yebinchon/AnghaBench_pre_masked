
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pages; } ;
struct virtio_gpu_object {int kmap; int vmap; TYPE_1__ tbo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_2 (int *,int*) ;

int FUNC_3(struct virtio_gpu_object *VAR_0)
{
 bool VAR_1;
 int VAR_2;

 FUNC_0(VAR_0->vmap);

 VAR_2 = FUNC_1(&VAR_0->tbo, 0, VAR_0->tbo.num_pages, &VAR_0->kmap);
 if (VAR_2)
  return VAR_2;
 VAR_0->vmap = FUNC_2(&VAR_0->kmap, &VAR_1);
 return 0;
}
