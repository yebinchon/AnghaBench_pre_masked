
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct rcar_du_vsp {int vsp; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {unsigned int num_planes; } ;


 int FUNC_0 (struct sg_table*) ;
 int FUNC_1 (int ,struct sg_table*) ;

void FUNC_2(struct rcar_du_vsp *VAR_0, struct drm_framebuffer *VAR_1,
     struct sg_table VAR_2[3])
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->format->num_planes; ++VAR_3) {
  struct sg_table *VAR_4 = &VAR_2[VAR_3];

  FUNC_1(VAR_0->vsp, VAR_4);
  FUNC_0(VAR_4);
 }
}
