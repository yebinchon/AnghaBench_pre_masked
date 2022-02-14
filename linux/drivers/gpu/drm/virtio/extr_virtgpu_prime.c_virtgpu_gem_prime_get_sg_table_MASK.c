
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ttm; } ;
struct virtio_gpu_object {TYPE_2__ tbo; } ;
struct sg_table {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_3__ {int num_pages; int pages; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ) ;
 struct sg_table* FUNC_1 (int ,int ) ;
 struct virtio_gpu_object* FUNC_2 (struct drm_gem_object*) ;

struct sg_table *FUNC_3(struct drm_gem_object *VAR_1)
{
 struct virtio_gpu_object *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->tbo.ttm->pages || !VAR_2->tbo.ttm->num_pages)

  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_2->tbo.ttm->pages,
         VAR_2->tbo.ttm->num_pages);
}
