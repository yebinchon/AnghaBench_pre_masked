
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_gem_object {int dma_attrs; void* kvaddr; int num_pages; scalar_t__ pages; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct rockchip_gem_object* FUNC_1 (struct drm_gem_object*) ;
 void* FUNC_2 (scalar_t__,int ,int ,int ) ;

void *FUNC_3(struct drm_gem_object *VAR_3)
{
 struct rockchip_gem_object *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->pages)
  return FUNC_2(VAR_4->pages, VAR_4->num_pages, VAR_2,
       FUNC_0(VAR_1));

 if (VAR_4->dma_attrs & VAR_0)
  return ((void*)0);

 return VAR_4->kvaddr;
}
