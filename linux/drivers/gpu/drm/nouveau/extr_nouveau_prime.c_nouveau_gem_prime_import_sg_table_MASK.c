
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sg_table {int dummy; } ;
struct nouveau_drm {int client; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_4__ {struct drm_gem_object base; } ;
struct nouveau_bo {TYPE_2__ bo; int valid_domains; } ;
struct drm_device {int dummy; } ;
struct dma_resv {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_3__ {int size; struct dma_resv* resv; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct nouveau_bo*) ;
 struct drm_gem_object* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nouveau_bo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct dma_resv*,int *) ;
 int FUNC_4 (struct dma_resv*) ;
 int FUNC_5 (struct drm_device*,struct drm_gem_object*,int ) ;
 struct nouveau_bo* FUNC_6 (int *,int *,int*,int ,int ,int ) ;
 int FUNC_7 (struct nouveau_bo*,int ,int,int ,struct sg_table*,struct dma_resv*) ;
 int FUNC_8 (int *,struct nouveau_bo**) ;
 struct nouveau_drm* FUNC_9 (struct drm_device*) ;

struct drm_gem_object *FUNC_10(struct drm_device *VAR_3,
        struct dma_buf_attachment *VAR_4,
        struct sg_table *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_9(VAR_3);
 struct drm_gem_object *VAR_7;
 struct nouveau_bo *VAR_8;
 struct dma_resv *VAR_9 = VAR_4->dmabuf->resv;
 u64 VAR_10 = VAR_4->dmabuf->size;
 u32 VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;

 VAR_11 = VAR_2;

 FUNC_3(VAR_9, ((void*)0));
 VAR_8 = FUNC_6(&VAR_6->client, &VAR_10, &VAR_12, VAR_11, 0, 0);
 if (FUNC_2(VAR_8)) {
  VAR_7 = FUNC_0(VAR_8);
  goto unlock;
 }

 VAR_8->valid_domains = VAR_1;



 VAR_13 = FUNC_5(VAR_3, &VAR_8->bo.base, VAR_10);
 if (VAR_13) {
  FUNC_8(((void*)0), &VAR_8);
  VAR_7 = FUNC_1(-VAR_0);
  goto unlock;
 }

 VAR_13 = FUNC_7(VAR_8, VAR_10, VAR_12, VAR_11, VAR_5, VAR_9);
 if (VAR_13) {
  FUNC_8(((void*)0), &VAR_8);
  VAR_7 = FUNC_1(VAR_13);
  goto unlock;
 }

 VAR_7 = &VAR_8->bo.base;

unlock:
 FUNC_4(VAR_9);
 return VAR_7;
}
