
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct pl111_drm_dev_private {scalar_t__ use_device_memory; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {struct pl111_drm_dev_private* dev_private; } ;
struct dma_buf_attachment {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (int ) ;
 struct drm_gem_object* FUNC_1 (struct drm_device*,struct dma_buf_attachment*,struct sg_table*) ;

__attribute__((used)) static struct drm_gem_object *
FUNC_2(struct drm_device *VAR_1,
     struct dma_buf_attachment *VAR_2,
     struct sg_table *VAR_3)
{
 struct pl111_drm_dev_private *VAR_4 = VAR_1->dev_private;






 if (VAR_4->use_device_memory)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
