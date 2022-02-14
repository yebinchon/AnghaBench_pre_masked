
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_rcl_setup {int msaa_zs_write; int msaa_color_write; int zs_write; int color_write; int zs_read; int color_read; int member_0; } ;
struct vc4_exec_info {scalar_t__ bin_tiles_x; scalar_t__ bin_tiles_y; struct drm_vc4_submit_cl* args; } ;
struct drm_vc4_submit_cl {scalar_t__ bin_cl_size; scalar_t__ min_x_tile; scalar_t__ max_x_tile; scalar_t__ min_y_tile; scalar_t__ max_y_tile; int msaa_zs_write; int msaa_color_write; int zs_write; int zs_read; int color_read; int color_write; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct vc4_exec_info*,struct vc4_rcl_setup*) ;
 int FUNC_2 (struct vc4_exec_info*,int *,int *) ;
 int FUNC_3 (struct vc4_exec_info*,struct vc4_rcl_setup*,int *,int *) ;
 int FUNC_4 (struct vc4_exec_info*,int *,int *,int) ;

int FUNC_5(struct drm_device *VAR_1, struct vc4_exec_info *VAR_2)
{
 struct vc4_rcl_setup VAR_3 = {0};
 struct drm_vc4_submit_cl *VAR_4 = VAR_2->args;
 bool VAR_5 = VAR_4->bin_cl_size != 0;
 int VAR_6;

 if (VAR_4->min_x_tile > VAR_4->max_x_tile ||
     VAR_4->min_y_tile > VAR_4->max_y_tile) {
  FUNC_0("Bad render tile set (%d,%d)-(%d,%d)\n",
     VAR_4->min_x_tile, VAR_4->min_y_tile,
     VAR_4->max_x_tile, VAR_4->max_y_tile);
  return -VAR_0;
 }

 if (VAR_5 &&
     (VAR_4->max_x_tile > VAR_2->bin_tiles_x ||
      VAR_4->max_y_tile > VAR_2->bin_tiles_y)) {
  FUNC_0("Render tiles (%d,%d) outside of bin config "
     "(%d,%d)\n",
     VAR_4->max_x_tile, VAR_4->max_y_tile,
     VAR_2->bin_tiles_x, VAR_2->bin_tiles_y);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_2, &VAR_3,
        &VAR_3.color_write,
        &VAR_4->color_write);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2, &VAR_3.color_read, &VAR_4->color_read,
        0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2, &VAR_3.zs_read, &VAR_4->zs_read,
        0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2, &VAR_3.zs_write, &VAR_4->zs_write,
        1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_3.msaa_color_write,
      &VAR_4->msaa_color_write);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_3.msaa_zs_write,
      &VAR_4->msaa_zs_write);
 if (VAR_6)
  return VAR_6;




 if (!VAR_3.color_write && !VAR_3.zs_write &&
     !VAR_3.msaa_color_write && !VAR_3.msaa_zs_write) {
  FUNC_0("RCL requires color or Z/S write\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_2, &VAR_3);
}
