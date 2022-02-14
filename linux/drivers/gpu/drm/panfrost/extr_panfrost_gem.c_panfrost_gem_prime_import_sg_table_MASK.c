
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct panfrost_gem_object {int noexec; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {int dummy; } ;


 struct drm_gem_object* FUNC_0 (struct drm_gem_object*) ;
 scalar_t__ FUNC_1 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_2 (struct drm_device*,struct dma_buf_attachment*,struct sg_table*) ;
 struct panfrost_gem_object* FUNC_3 (struct drm_gem_object*) ;

struct drm_gem_object *
FUNC_4(struct drm_device *VAR_0,
       struct dma_buf_attachment *VAR_1,
       struct sg_table *VAR_2)
{
 struct drm_gem_object *VAR_3;
 struct panfrost_gem_object *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 VAR_4 = FUNC_3(VAR_3);
 VAR_4->noexec = 1;

 return VAR_3;
}
