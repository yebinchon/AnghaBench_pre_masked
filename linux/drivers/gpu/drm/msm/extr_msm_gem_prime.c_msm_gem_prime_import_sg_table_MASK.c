
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {int dmabuf; } ;


 struct drm_gem_object* FUNC_0 (struct drm_device*,int ,struct sg_table*) ;

struct drm_gem_object *FUNC_1(struct drm_device *VAR_0,
  struct dma_buf_attachment *VAR_1, struct sg_table *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->dmabuf, VAR_2);
}
