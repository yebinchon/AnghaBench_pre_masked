
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_vgem_gem_object {struct drm_gem_object base; int pages; struct sg_table* table; int pages_pin_count; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_vgem_gem_object*) ;
 struct drm_gem_object* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_vgem_gem_object*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 struct drm_vgem_gem_object* FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_vgem_gem_object*) ;
 int FUNC_6 (struct sg_table*,int ,int *,int) ;
 int FUNC_7 (int,int,int ) ;

__attribute__((used)) static struct drm_gem_object *FUNC_8(struct drm_device *VAR_3,
   struct dma_buf_attachment *VAR_4, struct sg_table *VAR_5)
{
 struct drm_vgem_gem_object *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_3, VAR_4->dmabuf->size);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 VAR_7 = FUNC_3(VAR_4->dmabuf->size) / VAR_2;

 VAR_6->table = VAR_5;
 VAR_6->pages = FUNC_7(VAR_7, sizeof(struct page *), VAR_1);
 if (!VAR_6->pages) {
  FUNC_5(VAR_6);
  return FUNC_1(-VAR_0);
 }

 VAR_6->pages_pin_count++;
 FUNC_6(VAR_6->table, VAR_6->pages, ((void*)0),
     VAR_7);
 return &VAR_6->base;
}
