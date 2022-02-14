
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct malidp_plane_state {scalar_t__ format; int n_planes; int rotmem_size; } ;
struct malidp_plane {TYPE_3__* hwdev; TYPE_1__* layer; } ;
struct drm_plane_state {int rotation; scalar_t__ pixel_blend_mode; int src_x; int src_y; scalar_t__ crtc_w; scalar_t__ crtc_h; scalar_t__ alpha; struct drm_framebuffer* fb; int crtc; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int* pitches; unsigned int width; unsigned int height; TYPE_5__* format; scalar_t__ modifier; } ;
struct TYPE_10__ {scalar_t__ format; int num_planes; scalar_t__ has_alpha; } ;
struct TYPE_9__ {scalar_t__ max_line_size; scalar_t__ min_line_size; TYPE_2__* hw; } ;
struct TYPE_8__ {int features; int (* rotmem_required ) (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,int) ;int map; } ;
struct TYPE_7__ {scalar_t__ id; scalar_t__ rot; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_5__*,int) ;
 unsigned int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (struct malidp_plane*,struct malidp_plane_state*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (struct malidp_plane*,struct drm_plane_state*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,int) ;
 struct malidp_plane* FUNC_9 (struct drm_plane*) ;
 struct malidp_plane_state* FUNC_10 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_11(struct drm_plane *VAR_12,
     struct drm_plane_state *VAR_13)
{
 struct malidp_plane *VAR_14 = FUNC_9(VAR_12);
 struct malidp_plane_state *VAR_15 = FUNC_10(VAR_13);
 bool VAR_16 = VAR_13->rotation & VAR_9;
 struct drm_framebuffer *VAR_17;
 u16 VAR_18 = VAR_13->pixel_blend_mode;
 int VAR_19, VAR_20;
 unsigned int VAR_21, VAR_22;

 if (!VAR_13->crtc || !VAR_13->fb)
  return 0;

 VAR_17 = VAR_13->fb;

 VAR_15->format = FUNC_5(&VAR_14->hwdev->hw->map,
          VAR_14->layer->id, VAR_17->format->format,
          !!VAR_17->modifier);
 if (VAR_15->format == VAR_8)
  return -VAR_6;

 VAR_15->n_planes = VAR_17->format->num_planes;
 for (VAR_19 = 0; VAR_19 < VAR_15->n_planes; VAR_19++) {
  u8 VAR_23 = FUNC_6(VAR_14->hwdev, VAR_16);

  if (((VAR_17->pitches[VAR_19] * FUNC_2(VAR_17->format, VAR_19))
    & (VAR_23 - 1)) && !(VAR_17->modifier)) {
   FUNC_0("Invalid pitch %u for plane %d\n",
          VAR_17->pitches[VAR_19], VAR_19);
   return -VAR_6;
  }
 }

 VAR_21 = FUNC_3(VAR_17->format, 0);
 VAR_22 = FUNC_2(VAR_17->format, 0);
 if (VAR_17->width % VAR_21 || VAR_17->height % VAR_22) {
  FUNC_0("Buffer width/height needs to be a multiple of tile sizes");
  return -VAR_6;
 }
 if ((VAR_13->src_x >> 16) % VAR_21 || (VAR_13->src_y >> 16) % VAR_22) {
  FUNC_0("Plane src_x/src_y needs to be a multiple of tile sizes");
  return -VAR_6;
 }

 if ((VAR_13->crtc_w > VAR_14->hwdev->max_line_size) ||
     (VAR_13->crtc_h > VAR_14->hwdev->max_line_size) ||
     (VAR_13->crtc_w < VAR_14->hwdev->min_line_size) ||
     (VAR_13->crtc_h < VAR_14->hwdev->min_line_size))
  return -VAR_6;






 if (VAR_15->n_planes == 3 &&
     !(VAR_14->hwdev->hw->features & VAR_7) &&
     (VAR_13->fb->pitches[1] != VAR_13->fb->pitches[2]))
  return -VAR_6;

 VAR_20 = FUNC_7(VAR_14, VAR_13);
 if (VAR_20)
  return VAR_20;


 if (VAR_13->rotation != VAR_5) {
  if (VAR_14->layer->rot == VAR_11)
   return -VAR_6;
  if ((VAR_14->layer->rot == VAR_10) && !(VAR_17->modifier))
   return -VAR_6;




  if ((VAR_17->format->format == VAR_3 ||
       VAR_17->format->format == VAR_2) && !(VAR_17->modifier))
   return -VAR_6;
 }


 if (VAR_14->layer->id == VAR_0 && VAR_17->modifier) {
  FUNC_1("AFBC framebuffer not supported in SMART layer");
  return -VAR_6;
 }

 VAR_15->rotmem_size = 0;
 if (VAR_13->rotation & VAR_9) {
  int VAR_24;

  VAR_24 = VAR_14->hwdev->hw->rotmem_required(VAR_14->hwdev, VAR_13->crtc_w,
           VAR_13->crtc_h,
           VAR_17->format->format,
           !!(VAR_17->modifier));
  if (VAR_24 < 0)
   return VAR_24;

  VAR_15->rotmem_size = VAR_24;
 }


 if ((VAR_13->alpha != VAR_1) &&
     (VAR_18 != VAR_4) &&
     VAR_17->format->has_alpha)
  return -VAR_6;

 FUNC_4(VAR_14, VAR_15);

 return 0;
}
