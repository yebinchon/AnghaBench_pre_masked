
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct plane {int dummy; } ;
struct omap_overlay_info {int width; int height; scalar_t__ rotation_type; int rotation; void* p_uv_addr; int screen_width; void* paddr; int out_height; int out_width; int pos_y; int pos_x; int fourcc; } ;
struct omap_framebuffer {struct plane* planes; struct drm_format_info* format; } ;
struct drm_plane_state {int src_w; int src_h; int rotation; int src_x; int src_y; int crtc_h; int crtc_w; int crtc_y; int crtc_x; } ;
struct drm_framebuffer {int * obj; TYPE_2__* format; int * pitches; TYPE_1__* dev; } ;
struct drm_format_info {int * cpp; } ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (struct drm_framebuffer*,struct drm_format_info const*,int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int,int,void**) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int) ;
 struct omap_framebuffer* FUNC_9 (struct drm_framebuffer*) ;

void FUNC_10(struct drm_framebuffer *VAR_9,
  struct drm_plane_state *VAR_10, struct omap_overlay_info *VAR_11)
{
 struct omap_framebuffer *VAR_12 = FUNC_9(VAR_9);
 const struct drm_format_info *VAR_13 = VAR_12->format;
 struct plane *VAR_14 = &VAR_12->planes[0];
 u32 VAR_15, VAR_16, VAR_17 = 0;

 VAR_11->fourcc = VAR_9->format->format;

 VAR_11->pos_x = VAR_10->crtc_x;
 VAR_11->pos_y = VAR_10->crtc_y;
 VAR_11->out_width = VAR_10->crtc_w;
 VAR_11->out_height = VAR_10->crtc_h;
 VAR_11->width = VAR_10->src_w >> 16;
 VAR_11->height = VAR_10->src_h >> 16;


 if (FUNC_2(VAR_10->rotation))
  FUNC_8(VAR_11->width, VAR_11->height);

 VAR_15 = VAR_10->src_x >> 16;
 VAR_16 = VAR_10->src_y >> 16;

 if (FUNC_5(VAR_9->obj[0]) & VAR_6) {
  u32 VAR_18 = VAR_10->src_w >> 16;
  u32 VAR_19 = VAR_10->src_h >> 16;

  VAR_17 = FUNC_3(VAR_10->rotation);







  if (VAR_9->format->format == VAR_1 ||
    VAR_9->format->format == VAR_2) {
   VAR_15 /= 2;
   VAR_18 /= 2;
  }


  if (VAR_17 & VAR_5)
   VAR_16 += VAR_19 - 1;
  if (VAR_17 & VAR_4)
   VAR_15 += VAR_18 - 1;


  FUNC_6(VAR_9->obj[0], VAR_17, VAR_15, VAR_16,
       &VAR_11->paddr);
  VAR_11->rotation_type = VAR_8;
  VAR_11->rotation = VAR_10->rotation ?: 128;

  VAR_11->screen_width = FUNC_7(VAR_9->obj[0], VAR_17);
 } else {
  switch (VAR_10->rotation & VAR_3) {
  case 0:
  case 128:

   break;

  default:
   FUNC_1(VAR_9->dev->dev,
    "rotation '%d' ignored for non-tiled fb\n",
    VAR_10->rotation);
   break;
  }

  VAR_11->paddr = FUNC_4(VAR_9, VAR_13, 0, VAR_15, VAR_16);
  VAR_11->rotation_type = VAR_7;
  VAR_11->rotation = 128;
  VAR_11->screen_width = VAR_9->pitches[0];
 }


 VAR_11->screen_width /= VAR_13->cpp[0];

 if (VAR_9->format->format == VAR_0) {
  VAR_14 = &VAR_12->planes[1];

  if (VAR_11->rotation_type == VAR_8) {
   FUNC_0(!(FUNC_5(VAR_9->obj[1]) & VAR_6));
   FUNC_6(VAR_9->obj[1], VAR_17, VAR_15/2, VAR_16/2,
        &VAR_11->p_uv_addr);
  } else {
   VAR_11->p_uv_addr = FUNC_4(VAR_9, VAR_13, 1, VAR_15, VAR_16);
  }
 } else {
  VAR_11->p_uv_addr = 0;
 }
}
