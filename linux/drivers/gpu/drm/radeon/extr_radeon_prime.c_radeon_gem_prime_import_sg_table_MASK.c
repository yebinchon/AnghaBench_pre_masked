
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_5__ {int mutex; int objects; } ;
struct radeon_device {TYPE_2__ gem; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_6__ {struct drm_gem_object base; } ;
struct radeon_bo {int prime_shared_count; TYPE_3__ tbo; int list; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct dma_resv {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_4__ {int size; struct dma_resv* resv; } ;


 struct drm_gem_object* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dma_resv*,int *) ;
 int FUNC_2 (struct dma_resv*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct radeon_device*,int ,int ,int,int ,int ,struct sg_table*,struct dma_resv*,struct radeon_bo**) ;

struct drm_gem_object *FUNC_7(struct drm_device *VAR_2,
       struct dma_buf_attachment *VAR_3,
       struct sg_table *VAR_4)
{
 struct dma_resv *VAR_5 = VAR_3->dmabuf->resv;
 struct radeon_device *VAR_6 = VAR_2->dev_private;
 struct radeon_bo *VAR_7;
 int VAR_8;

 FUNC_1(VAR_5, ((void*)0));
 VAR_8 = FUNC_6(VAR_6, VAR_3->dmabuf->size, VAR_0, 0,
          VAR_1, 0, VAR_4, VAR_5, &VAR_7);
 FUNC_2(VAR_5);
 if (VAR_8)
  return FUNC_0(VAR_8);

 FUNC_4(&VAR_6->gem.mutex);
 FUNC_3(&VAR_7->list, &VAR_6->gem.objects);
 FUNC_5(&VAR_6->gem.mutex);

 VAR_7->prime_shared_count = 1;
 return &VAR_7->tbo.base;
}
