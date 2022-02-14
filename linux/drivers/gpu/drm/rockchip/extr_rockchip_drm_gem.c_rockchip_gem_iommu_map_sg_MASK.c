
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct rockchip_gem_object {struct sg_table* sgt; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {int dummy; } ;


 int FUNC_0 (struct rockchip_gem_object*) ;

__attribute__((used)) static int
FUNC_1(struct drm_device *VAR_0,
     struct dma_buf_attachment *VAR_1,
     struct sg_table *VAR_2,
     struct rockchip_gem_object *VAR_3)
{
 VAR_3->sgt = VAR_2;
 return FUNC_0(VAR_3);
}
