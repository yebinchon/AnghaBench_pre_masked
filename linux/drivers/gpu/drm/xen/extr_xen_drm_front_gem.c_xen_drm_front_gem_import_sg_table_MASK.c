
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int dummy; } ;
struct xen_gem_object {struct drm_gem_object base; int pages; int num_pages; struct sg_table* sgt_imported; } ;
struct xen_drm_front_drm_info {int front_info; } ;
struct sg_table {int nents; } ;
struct drm_device {struct xen_drm_front_drm_info* dev_private; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {size_t size; } ;


 int FUNC_0 (char*,size_t,int ) ;
 struct drm_gem_object* FUNC_1 (struct xen_gem_object*) ;
 struct drm_gem_object* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct xen_gem_object*) ;
 int FUNC_4 (struct sg_table*,int ,int *,int ) ;
 int FUNC_5 (struct xen_gem_object*,size_t) ;
 struct xen_gem_object* FUNC_6 (struct drm_device*,size_t) ;
 int FUNC_7 (int ,int ,int ,int ,int ,size_t,int ) ;
 int FUNC_8 (struct drm_gem_object*) ;

struct drm_gem_object *
FUNC_9(struct drm_device *VAR_0,
      struct dma_buf_attachment *VAR_1,
      struct sg_table *VAR_2)
{
 struct xen_drm_front_drm_info *VAR_3 = VAR_0->dev_private;
 struct xen_gem_object *VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_5 = VAR_1->dmabuf->size;
 VAR_4 = FUNC_6(VAR_0, VAR_5);
 if (FUNC_3(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6 < 0)
  return FUNC_2(VAR_6);

 VAR_4->sgt_imported = VAR_2;

 VAR_6 = FUNC_4(VAR_2, VAR_4->pages,
            ((void*)0), VAR_4->num_pages);
 if (VAR_6 < 0)
  return FUNC_2(VAR_6);

 VAR_6 = FUNC_7(VAR_3->front_info,
     FUNC_8(&VAR_4->base),
     0, 0, 0, VAR_5, VAR_4->pages);
 if (VAR_6 < 0)
  return FUNC_2(VAR_6);

 FUNC_0("Imported buffer of size %zu with nents %u\n",
    VAR_5, VAR_2->nents);

 return &VAR_4->base;
}
