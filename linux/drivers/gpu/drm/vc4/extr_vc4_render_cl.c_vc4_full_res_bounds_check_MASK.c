
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vc4_exec_info {struct drm_vc4_submit_cl* args; } ;
struct drm_vc4_submit_rcl_surface {scalar_t__ offset; } ;
struct drm_vc4_submit_cl {int max_y_tile; int max_x_tile; int width; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct drm_gem_cma_object {TYPE_1__ base; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct vc4_exec_info *VAR_2,
         struct drm_gem_cma_object *VAR_3,
         struct drm_vc4_submit_rcl_surface *VAR_4)
{
 struct drm_vc4_submit_cl *VAR_5 = VAR_2->args;
 u32 VAR_6 = FUNC_0(VAR_2->args->width, 32);

 if (VAR_4->offset > VAR_3->base.size) {
  FUNC_1("surface offset %d > BO size %zd\n",
     VAR_4->offset, VAR_3->base.size);
  return -VAR_0;
 }

 if ((VAR_3->base.size - VAR_4->offset) / VAR_1 <
     VAR_6 * VAR_5->max_y_tile + VAR_5->max_x_tile) {
  FUNC_1("MSAA tile %d, %d out of bounds "
     "(bo size %zd, offset %d).\n",
     VAR_5->max_x_tile, VAR_5->max_y_tile,
     VAR_3->base.size,
     VAR_4->offset);
  return -VAR_0;
 }

 return 0;
}
