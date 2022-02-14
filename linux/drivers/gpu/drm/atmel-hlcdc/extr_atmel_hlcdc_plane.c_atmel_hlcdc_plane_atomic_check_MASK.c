
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int x1; int y1; } ;
struct drm_plane_state {TYPE_5__ dst; TYPE_5__ src; int visible; int crtc; int state; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int* pitches; TYPE_4__* format; scalar_t__* offsets; } ;
struct drm_display_mode {int hdisplay; unsigned int vdisplay; } ;
struct drm_crtc_state {struct drm_display_mode adjusted_mode; } ;
struct TYPE_9__ {int rotation; struct drm_framebuffer* fb; int crtc; } ;
struct atmel_hlcdc_plane_state {int src_x; int src_y; int src_w; int src_h; int crtc_x; int crtc_y; int crtc_w; unsigned int crtc_h; int nplanes; int* bpp; int* xstride; int* pstride; TYPE_3__ base; scalar_t__* offsets; } ;
struct TYPE_8__ {struct atmel_hlcdc_layer_desc* desc; } ;
struct atmel_hlcdc_plane {TYPE_2__ layer; } ;
struct TYPE_7__ {int memsize; int size; } ;
struct atmel_hlcdc_layer_desc {TYPE_1__ layout; } ;
struct TYPE_10__ {int num_planes; int hsub; int vsub; int* cpp; scalar_t__ has_alpha; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_crtc_state* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_plane_state*,struct drm_crtc_state*,int,int ,int,int) ;
 struct atmel_hlcdc_plane_state* FUNC_2 (struct drm_plane_state*) ;
 struct atmel_hlcdc_plane* FUNC_3 (struct drm_plane*) ;
 void* FUNC_4 (TYPE_5__*) ;
 void* FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct drm_plane *VAR_5,
       struct drm_plane_state *VAR_6)
{
 struct atmel_hlcdc_plane *VAR_7 = FUNC_3(VAR_5);
 struct atmel_hlcdc_plane_state *VAR_8 =
    FUNC_2(VAR_6);
 const struct atmel_hlcdc_layer_desc *VAR_9 = VAR_7->layer.desc;
 struct drm_framebuffer *VAR_10 = VAR_8->base.fb;
 const struct drm_display_mode *VAR_11;
 struct drm_crtc_state *VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 int VAR_15;

 if (!VAR_8->base.crtc || !VAR_10)
  return 0;

 VAR_12 = FUNC_0(VAR_6->state, VAR_6->crtc);
 VAR_11 = &VAR_12->adjusted_mode;

 VAR_14 = FUNC_1(VAR_6, VAR_12,
        (1 << 16) / 2048,
        VAR_3, 1, 1);
 if (VAR_14 || !VAR_6->visible)
  return VAR_14;

 VAR_8->src_x = VAR_6->src.x1;
 VAR_8->src_y = VAR_6->src.y1;
 VAR_8->src_w = FUNC_5(&VAR_6->src);
 VAR_8->src_h = FUNC_4(&VAR_6->src);
 VAR_8->crtc_x = VAR_6->dst.x1;
 VAR_8->crtc_y = VAR_6->dst.y1;
 VAR_8->crtc_w = FUNC_5(&VAR_6->dst);
 VAR_8->crtc_h = FUNC_4(&VAR_6->dst);

 if ((VAR_8->src_x | VAR_8->src_y | VAR_8->src_w | VAR_8->src_h) &
     VAR_4)
  return -VAR_2;

 VAR_8->src_x >>= 16;
 VAR_8->src_y >>= 16;
 VAR_8->src_w >>= 16;
 VAR_8->src_h >>= 16;

 VAR_8->nplanes = VAR_10->format->num_planes;
 if (VAR_8->nplanes > VAR_0)
  return -VAR_2;

 for (VAR_15 = 0; VAR_15 < VAR_8->nplanes; VAR_15++) {
  unsigned int VAR_16 = 0;
  int VAR_17 = VAR_15 ? VAR_10->format->hsub : 1;
  int VAR_18 = VAR_15 ? VAR_10->format->vsub : 1;

  VAR_8->bpp[VAR_15] = VAR_10->format->cpp[VAR_15];
  if (!VAR_8->bpp[VAR_15])
   return -VAR_2;

  switch (VAR_8->base.rotation & VAR_1) {
  case 128:
   VAR_16 = (VAR_8->src_y / VAR_18) *
     VAR_10->pitches[VAR_15];
   VAR_16 += ((VAR_8->src_x + VAR_8->src_w - 1) /
       VAR_17) * VAR_8->bpp[VAR_15];
   VAR_8->xstride[VAR_15] = -(((VAR_8->src_h - 1) / VAR_18) *
         VAR_10->pitches[VAR_15]) -
       (2 * VAR_8->bpp[VAR_15]);
   VAR_8->pstride[VAR_15] = VAR_10->pitches[VAR_15] - VAR_8->bpp[VAR_15];
   break;
  case 130:
   VAR_16 = ((VAR_8->src_y + VAR_8->src_h - 1) /
      VAR_18) * VAR_10->pitches[VAR_15];
   VAR_16 += ((VAR_8->src_x + VAR_8->src_w - 1) /
       VAR_17) * VAR_8->bpp[VAR_15];
   VAR_8->xstride[VAR_15] = ((((VAR_8->src_w - 1) / VAR_17) - 1) *
        VAR_8->bpp[VAR_15]) - VAR_10->pitches[VAR_15];
   VAR_8->pstride[VAR_15] = -2 * VAR_8->bpp[VAR_15];
   break;
  case 129:
   VAR_16 = ((VAR_8->src_y + VAR_8->src_h - 1) /
      VAR_18) * VAR_10->pitches[VAR_15];
   VAR_16 += (VAR_8->src_x / VAR_17) * VAR_8->bpp[VAR_15];
   VAR_8->xstride[VAR_15] = ((VAR_8->src_h - 1) / VAR_18) *
       VAR_10->pitches[VAR_15];
   VAR_8->pstride[VAR_15] = -VAR_10->pitches[VAR_15] - VAR_8->bpp[VAR_15];
   break;
  case 131:
  default:
   VAR_16 = (VAR_8->src_y / VAR_18) * VAR_10->pitches[VAR_15];
   VAR_16 += (VAR_8->src_x / VAR_17) * VAR_8->bpp[VAR_15];
   VAR_8->xstride[VAR_15] = VAR_10->pitches[VAR_15] -
       ((VAR_8->src_w / VAR_17) *
        VAR_8->bpp[VAR_15]);
   VAR_8->pstride[VAR_15] = 0;
   break;
  }

  VAR_8->offsets[VAR_15] = VAR_16 + VAR_10->offsets[VAR_15];
 }




 if (FUNC_6(VAR_8->base.rotation)) {
  VAR_13 = VAR_8->src_w;
  VAR_8->src_w = VAR_8->src_h;
  VAR_8->src_h = VAR_13;
 }

 if (!VAR_9->layout.size &&
     (VAR_11->hdisplay != VAR_8->crtc_w ||
      VAR_11->vdisplay != VAR_8->crtc_h))
  return -VAR_2;

 if ((VAR_8->crtc_h != VAR_8->src_h || VAR_8->crtc_w != VAR_8->src_w) &&
     (!VAR_9->layout.memsize ||
      VAR_8->base.fb->format->has_alpha))
  return -VAR_2;

 return 0;
}
