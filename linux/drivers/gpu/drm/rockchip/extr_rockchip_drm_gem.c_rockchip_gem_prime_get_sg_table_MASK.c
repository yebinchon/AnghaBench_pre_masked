
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct rockchip_gem_object {int dma_attrs; int dma_addr; int kvaddr; int num_pages; scalar_t__ pages; } ;
struct drm_gem_object {int size; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct sg_table* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct sg_table*,int ,int ,int ,int ) ;
 struct sg_table* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct sg_table*) ;
 struct sg_table* FUNC_5 (int,int ) ;
 struct rockchip_gem_object* FUNC_6 (struct drm_gem_object*) ;

struct sg_table *FUNC_7(struct drm_gem_object *VAR_2)
{
 struct rockchip_gem_object *VAR_3 = FUNC_6(VAR_2);
 struct drm_device *VAR_4 = VAR_2->dev;
 struct sg_table *VAR_5;
 int VAR_6;

 if (VAR_3->pages)
  return FUNC_3(VAR_3->pages, VAR_3->num_pages);

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_2(VAR_4->dev, VAR_5, VAR_3->kvaddr,
        VAR_3->dma_addr, VAR_2->size,
        VAR_3->dma_attrs);
 if (VAR_6) {
  FUNC_0("failed to allocate sgt, %d\n", VAR_6);
  FUNC_4(VAR_5);
  return FUNC_1(VAR_6);
 }

 return VAR_5;
}
