
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct omap_overlay_info {int rotation_type; int global_alpha; int pre_mult_alpha; int zorder; int rotation; int fourcc; int out_height; int out_width; int height; int width; int pos_y; int pos_x; int screen_width; int p_uv_addr; int paddr; } ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int* overlay_caps; } ;


 int FUNC_0 (char*,int,int *,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int const) ;
 int FUNC_1 (struct dispc_device*,int,int) ;
 int FUNC_2 (struct dispc_device*,int,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int const,struct videomode const*,int) ;

__attribute__((used)) static int FUNC_3(struct dispc_device *VAR_0,
      enum omap_plane_id VAR_1,
      const struct omap_overlay_info *VAR_2,
      const struct videomode *VAR_3, bool VAR_4,
      enum omap_channel VAR_5)
{
 int VAR_6;
 enum omap_overlay_caps VAR_7 = VAR_0->feat->overlay_caps[VAR_1];
 const bool VAR_8 = 1;

 FUNC_0("dispc_ovl_setup %d, pa %pad, pa_uv %pad, sw %d, %d,%d, %dx%d ->"
  " %dx%d, cmode %x, rot %d, chan %d repl %d\n",
  VAR_1, &VAR_2->paddr, &VAR_2->p_uv_addr, VAR_2->screen_width, VAR_2->pos_x,
  VAR_2->pos_y, VAR_2->width, VAR_2->height, VAR_2->out_width, VAR_2->out_height,
  VAR_2->fourcc, VAR_2->rotation, VAR_5, VAR_8);

 FUNC_1(VAR_0, VAR_1, VAR_5);

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_7, VAR_2->paddr, VAR_2->p_uv_addr,
  VAR_2->screen_width, VAR_2->pos_x, VAR_2->pos_y, VAR_2->width, VAR_2->height,
  VAR_2->out_width, VAR_2->out_height, VAR_2->fourcc, VAR_2->rotation,
  VAR_2->zorder, VAR_2->pre_mult_alpha, VAR_2->global_alpha,
  VAR_2->rotation_type, VAR_8, VAR_3, VAR_4);

 return VAR_6;
}
