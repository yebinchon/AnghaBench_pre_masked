
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct lima_device {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct lima_bo {struct drm_gem_object gem; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {int size; } ;


 struct drm_gem_object* FUNC_0 (struct lima_bo*) ;
 scalar_t__ FUNC_1 (struct lima_bo*) ;
 struct lima_bo* FUNC_2 (struct lima_device*,int ,int ,struct sg_table*) ;
 struct lima_device* FUNC_3 (struct drm_device*) ;

struct drm_gem_object *FUNC_4(
 struct drm_device *VAR_0, struct dma_buf_attachment *VAR_1,
 struct sg_table *VAR_2)
{
 struct lima_device *VAR_3 = FUNC_3(VAR_0);
 struct lima_bo *VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1->dmabuf->size, 0, VAR_2);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);

 return &VAR_4->gem;
}
