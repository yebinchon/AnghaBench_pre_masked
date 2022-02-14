
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct videomode {int hactive; int vactive; int flags; int vsync_len; int vback_porch; int vfront_porch; } ;
struct omap_dss_writeback_info {int fourcc; int rotation_type; int pre_mult_alpha; int rotation; int height; int width; int buf_width; int p_uv_addr; int paddr; } ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum dss_writeback_channel { ____Placeholder_dss_writeback_channel } dss_writeback_channel ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ,int,int,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct dispc_device*,int ,int,int,int ) ;
 int FUNC_5 (struct dispc_device*,int,int,int ,int ,int ,int const,int const,int,int,int ,int ,int ,int ,int const,int ,int const,int ,int const,struct videomode const*,int) ;
 int FUNC_6 (struct dispc_device*,int ) ;
 int FUNC_7 (struct dispc_device*,int ,int) ;
 int FUNC_8 (int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct dispc_device *VAR_5,
     const struct omap_dss_writeback_info *VAR_6,
     bool VAR_7, const struct videomode *VAR_8,
     enum dss_writeback_channel VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 enum omap_plane_id VAR_12 = VAR_4;
 const int VAR_13 = 0, VAR_14 = 0;
 const u8 VAR_15 = 0, VAR_16 = 0;
 const bool VAR_17 = 1;
 bool VAR_18;
 int VAR_19 = VAR_8->hactive;
 int VAR_20 = VAR_8->vactive;
 enum omap_overlay_caps VAR_21 =
  VAR_3 | VAR_2;

 if (VAR_8->flags & VAR_0)
  VAR_20 /= 2;

 FUNC_2("dispc_wb_setup, pa %x, pa_uv %x, %d,%d -> %dx%d, cmode %x, "
  "rot %d\n", VAR_6->paddr, VAR_6->p_uv_addr, VAR_19,
  VAR_20, VAR_6->width, VAR_6->height, VAR_6->fourcc, VAR_6->rotation);

 VAR_10 = FUNC_5(VAR_5, VAR_12, VAR_21, VAR_6->paddr, VAR_6->p_uv_addr,
  VAR_6->buf_width, VAR_13, VAR_14, VAR_19, VAR_20, VAR_6->width,
  VAR_6->height, VAR_6->fourcc, VAR_6->rotation, VAR_15,
  VAR_6->pre_mult_alpha, VAR_16, VAR_6->rotation_type,
  VAR_17, VAR_8, VAR_7);
 if (VAR_10)
  return VAR_10;

 switch (VAR_6->fourcc) {
 case 133:
 case 132:
 case 134:
 case 131:
 case 130:
 case 135:
 case 129:
 case 128:
  VAR_18 = 1;
  break;
 default:
  VAR_18 = 0;
  break;
 }


 VAR_11 = FUNC_6(VAR_5, FUNC_0(VAR_12));
 VAR_11 = FUNC_3(VAR_11, VAR_18, 10, 10);
 VAR_11 = FUNC_3(VAR_11, VAR_9, 18, 16);
 VAR_11 = FUNC_3(VAR_11, VAR_7, 19, 19);
 if (VAR_7)
  VAR_11 = FUNC_3(VAR_11, 1, 26, 24);
 else
  VAR_11 = FUNC_3(VAR_11, 0, 26, 24);
 FUNC_7(VAR_5, FUNC_0(VAR_12), VAR_11);

 if (VAR_7) {

  FUNC_4(VAR_5, FUNC_1(VAR_12), 0, 7, 0);
 } else {
  u32 VAR_22;

  if (VAR_9 == VAR_1)
   VAR_22 = VAR_8->vsync_len + VAR_8->vback_porch;
  else
   VAR_22 = VAR_8->vfront_porch + VAR_8->vsync_len +
    VAR_8->vback_porch;

  if (VAR_8->flags & VAR_0)
   VAR_22 /= 2;

  VAR_22 = FUNC_8(VAR_22, 255u);


  FUNC_4(VAR_5, FUNC_1(VAR_12), VAR_22, 7, 0);
 }

 return 0;
}
