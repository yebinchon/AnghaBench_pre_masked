
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_gem_cma_object {void* vaddr; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {int dmabuf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_gem_object*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*) ;
 struct drm_gem_object* FUNC_5 (struct drm_device*,struct dma_buf_attachment*,struct sg_table*) ;
 struct drm_gem_cma_object* FUNC_6 (struct drm_gem_object*) ;

struct drm_gem_object *
FUNC_7(struct drm_device *VAR_1,
           struct dma_buf_attachment *VAR_2,
           struct sg_table *VAR_3)
{
 struct drm_gem_cma_object *VAR_4;
 struct drm_gem_object *VAR_5;
 void *VAR_6;

 VAR_6 = FUNC_3(VAR_2->dmabuf);
 if (!VAR_6) {
  FUNC_0("Failed to vmap PRIME buffer\n");
  return FUNC_1(-VAR_0);
 }

 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (FUNC_2(VAR_5)) {
  FUNC_4(VAR_2->dmabuf, VAR_6);
  return VAR_5;
 }

 VAR_4 = FUNC_6(VAR_5);
 VAR_4->vaddr = VAR_6;

 return VAR_5;
}
