
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct rcar_du_vsp {int vsp; struct rcar_du_device* dev; } ;
struct rcar_du_device {int dev; } ;
struct TYPE_4__ {int size; } ;
struct drm_gem_cma_object {TYPE_2__ base; int paddr; int vaddr; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_3__ {unsigned int num_planes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sg_table*,int ,int ,int ) ;
 struct drm_gem_cma_object* FUNC_1 (struct drm_framebuffer*,unsigned int) ;
 int FUNC_2 (struct sg_table*) ;
 int FUNC_3 (int ,struct sg_table*) ;
 int FUNC_4 (int ,struct sg_table*) ;

int FUNC_5(struct rcar_du_vsp *VAR_1, struct drm_framebuffer *VAR_2,
         struct sg_table VAR_3[3])
{
 struct rcar_du_device *VAR_4 = VAR_1->dev;
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->format->num_planes; ++VAR_5) {
  struct drm_gem_cma_object *VAR_7 = FUNC_1(VAR_2, VAR_5);
  struct sg_table *VAR_8 = &VAR_3[VAR_5];

  VAR_6 = FUNC_0(VAR_4->dev, VAR_8, VAR_7->vaddr, VAR_7->paddr,
          VAR_7->base.size);
  if (VAR_6)
   goto fail;

  VAR_6 = FUNC_3(VAR_1->vsp, VAR_8);
  if (!VAR_6) {
   FUNC_2(VAR_8);
   VAR_6 = -VAR_0;
   goto fail;
  }
 }

 return 0;

fail:
 while (VAR_5--) {
  struct sg_table *VAR_9 = &VAR_3[VAR_5];

  FUNC_4(VAR_1->vsp, VAR_9);
  FUNC_2(VAR_9);
 }

 return VAR_6;
}
