
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
struct vmw_surface {scalar_t__ format; int* mip_levels; int quality_level; int multisample_pattern; scalar_t__ multisample_count; scalar_t__ flags; TYPE_1__ base_size; } ;
struct vmw_private {int capabilities; } ;
struct vmw_plane_state {scalar_t__ pinned; int content_fb_type; int cpp; TYPE_3__* surf; } ;
struct vmw_framebuffer_surface {struct vmw_surface* surface; } ;
struct vmw_framebuffer {scalar_t__ bo; } ;
struct drm_vmw_size {scalar_t__ width; scalar_t__ height; int depth; int member_0; } ;
struct drm_plane_state {scalar_t__ crtc_w; scalar_t__ crtc_h; struct drm_crtc* crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {int dev; } ;
struct drm_framebuffer {int* pitches; int width; TYPE_2__* format; } ;
struct drm_crtc {int dev; } ;
typedef enum stdu_content_type { ____Placeholder_stdu_content_type } stdu_content_type ;
struct TYPE_8__ {scalar_t__ format; int res; struct drm_vmw_size base_size; } ;
struct TYPE_7__ {int* cpp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 struct vmw_framebuffer* FUNC_2 (struct drm_framebuffer*) ;
 struct vmw_framebuffer_surface* FUNC_3 (struct drm_framebuffer*) ;
 struct vmw_plane_state* FUNC_4 (struct drm_plane_state*) ;
 struct vmw_private* FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__,int,int,scalar_t__,int ,struct drm_vmw_size,int ,int ,TYPE_3__**) ;
 TYPE_3__* FUNC_8 (struct vmw_surface*) ;
 int FUNC_9 (TYPE_3__**) ;

__attribute__((used)) static int
FUNC_10(struct drm_plane *VAR_10,
      struct drm_plane_state *VAR_11)
{
 struct vmw_private *VAR_12 = FUNC_5(VAR_10->dev);
 struct drm_framebuffer *VAR_13 = VAR_11->fb;
 struct vmw_framebuffer *VAR_14;
 struct vmw_plane_state *VAR_15 = FUNC_4(VAR_11);
 enum stdu_content_type VAR_16;
 struct vmw_framebuffer_surface *VAR_17;
 struct drm_crtc *VAR_18 = VAR_11->crtc;
 uint32_t VAR_19 = VAR_11->crtc_w, VAR_20 = VAR_11->crtc_h;
 int VAR_21;


 if (!VAR_13) {
  if (VAR_15->surf) {
   FUNC_1(VAR_15->pinned != 0);
   FUNC_9(&VAR_15->surf);
  }

  return 0;
 }

 VAR_14 = FUNC_2(VAR_13);
 VAR_17 = (VAR_14->bo) ? ((void*)0) : FUNC_3(VAR_13);

 if (VAR_17 && VAR_17->surface->base_size.width == VAR_19 &&
     VAR_17->surface->base_size.height == VAR_20)
  VAR_16 = VAR_1;
 else if (VAR_14->bo)
  VAR_16 = VAR_2;
 else
  VAR_16 = VAR_3;

 if (VAR_16 != VAR_1) {
  struct vmw_surface VAR_22;
  struct drm_vmw_size VAR_23 = {0};

  VAR_23.width = VAR_19;
  VAR_23.height = VAR_20;
  VAR_23.depth = 1;





  if (VAR_16 == VAR_2) {

   switch (VAR_13->format->cpp[0]*8) {
   case 32:
    VAR_22.format = VAR_8;
    break;

   case 16:
    VAR_22.format = VAR_7;
    break;

   case 8:
    VAR_22.format = VAR_6;
    break;

   default:
    FUNC_0("Invalid format\n");
    return -VAR_0;
   }

   VAR_22.flags = 0;
   VAR_22.mip_levels[0] = 1;
   VAR_22.multisample_count = 0;
   VAR_22.multisample_pattern =
    VAR_4;
   VAR_22.quality_level = VAR_5;
  } else {
   VAR_22 = *VAR_17->surface;
  }

  if (VAR_15->surf) {
   struct drm_vmw_size VAR_24 = VAR_15->surf->base_size;

   if (VAR_24.width != VAR_23.width ||
       VAR_24.height != VAR_23.height ||
       VAR_15->surf->format != VAR_22.format) {
    FUNC_1(VAR_15->pinned != 0);
    FUNC_9(&VAR_15->surf);
   }

  }

  if (!VAR_15->surf) {
   VAR_21 = FUNC_7
    (VAR_18->dev,

     0,
     VAR_22.flags,
     VAR_22.format,
     1,
     VAR_22.mip_levels[0],
     VAR_22.multisample_count,
     0,
     VAR_23,
     VAR_22.multisample_pattern,
     VAR_22.quality_level,
     &VAR_15->surf);
   if (VAR_21 != 0) {
    FUNC_0("Couldn't allocate STDU surface.\n");
    return VAR_21;
   }
  }
 } else {






  if (VAR_15->surf) {
   FUNC_1(VAR_15->pinned != 0);
   FUNC_9(&VAR_15->surf);
  }

  VAR_15->surf = FUNC_8(VAR_17->surface);
 }

 if (VAR_15->surf) {


  VAR_21 = FUNC_6(&VAR_15->surf->res, 0);
  if (VAR_21)
   goto out_srf_unref;

  VAR_15->pinned++;
 }

 VAR_15->content_fb_type = VAR_16;







 if (VAR_15->content_fb_type == VAR_2 &&
     !(VAR_12->capabilities & VAR_9))
  VAR_15->cpp = VAR_13->pitches[0] / VAR_13->width;

 return 0;

out_srf_unref:
 FUNC_9(&VAR_15->surf);
 return VAR_21;
}
