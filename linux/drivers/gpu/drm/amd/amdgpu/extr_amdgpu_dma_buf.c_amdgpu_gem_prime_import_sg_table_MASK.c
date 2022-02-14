
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct dma_resv {int dummy; } ;
struct dma_buf_attachment {TYPE_2__* dmabuf; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_param {struct dma_resv* resv; int type; scalar_t__ flags; int domain; int byte_align; int size; } ;
struct TYPE_6__ {struct drm_gem_object base; TYPE_1__* ttm; struct sg_table* sg; } ;
struct amdgpu_bo {int prime_shared_count; TYPE_3__ tbo; void* preferred_domains; void* allowed_domains; } ;
typedef int bp ;
struct TYPE_5__ {int * ops; int size; struct dma_resv* resv; } ;
struct TYPE_4__ {struct sg_table* sg; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct drm_gem_object* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int VAR_3 ;
 int FUNC_2 (struct dma_resv*,int *) ;
 int FUNC_3 (struct dma_resv*) ;
 int FUNC_4 (struct amdgpu_bo_param*,int ,int) ;
 int VAR_4 ;

struct drm_gem_object *
FUNC_5(struct drm_device *VAR_5,
     struct dma_buf_attachment *VAR_6,
     struct sg_table *VAR_7)
{
 struct dma_resv *VAR_8 = VAR_6->dmabuf->resv;
 struct amdgpu_device *VAR_9 = VAR_5->dev_private;
 struct amdgpu_bo *VAR_10;
 struct amdgpu_bo_param VAR_11;
 int VAR_12;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.size = VAR_6->dmabuf->size;
 VAR_11.byte_align = VAR_2;
 VAR_11.domain = VAR_0;
 VAR_11.flags = 0;
 VAR_11.type = VAR_4;
 VAR_11.resv = VAR_8;
 FUNC_2(VAR_8, ((void*)0));
 VAR_12 = FUNC_1(VAR_9, &VAR_11, &VAR_10);
 if (VAR_12)
  goto error;

 VAR_10->tbo.sg = VAR_7;
 VAR_10->tbo.ttm->sg = VAR_7;
 VAR_10->allowed_domains = VAR_1;
 VAR_10->preferred_domains = VAR_1;
 if (VAR_6->dmabuf->ops != &VAR_3)
  VAR_10->prime_shared_count = 1;

 FUNC_3(VAR_8);
 return &VAR_10->tbo.base;

error:
 FUNC_3(VAR_8);
 return FUNC_0(VAR_12);
}
