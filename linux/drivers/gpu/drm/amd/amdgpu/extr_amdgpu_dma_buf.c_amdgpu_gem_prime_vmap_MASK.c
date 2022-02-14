
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_gem_object {int dummy; } ;
struct TYPE_4__ {void* virtual; } ;
struct TYPE_3__ {int num_pages; } ;
struct amdgpu_bo {TYPE_2__ dma_buf_vmap; TYPE_1__ tbo; } ;


 void* FUNC_0 (int) ;
 struct amdgpu_bo* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,TYPE_2__*) ;

void *FUNC_3(struct drm_gem_object *VAR_0)
{
 struct amdgpu_bo *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->tbo, 0, VAR_1->tbo.num_pages,
     &VAR_1->dma_buf_vmap);
 if (VAR_2)
  return FUNC_0(VAR_2);

 return VAR_1->dma_buf_vmap.virtual;
}
