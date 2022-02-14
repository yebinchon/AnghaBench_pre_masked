
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_25__ {int scale; int blend; int point; int image; } ;
struct TYPE_16__ {int sx; int sy; int sw; int sh; int k1; int src_color; int dst_color; int y; int x; scalar_t__ depth; int dh; int dw; } ;
struct TYPE_15__ {int src_x; int src_y; int src_w; int src_h; int alpha; int pixel_blend_mode; int crtc_y; int crtc_x; scalar_t__ normalized_zpos; int crtc_h; int crtc_w; int fb; } ;
struct TYPE_24__ {int layout; int blockh; int* blocks; int* pitch; int interval; int mode; int kind; int h; int w; } ;
struct nv50_wndw_atom {TYPE_9__ set; TYPE_12__ point; TYPE_11__ state; TYPE_12__ blend; TYPE_12__ scale; TYPE_8__ image; int visible; } ;
struct TYPE_17__ {int name; int dev; } ;
struct nv50_wndw {TYPE_10__* func; scalar_t__ immd; TYPE_1__ plane; } ;
struct TYPE_23__ {int async_flip; } ;
struct nv50_head_atom {TYPE_7__ state; } ;
struct TYPE_22__ {int* pitches; int height; int width; } ;
struct nouveau_framebuffer {TYPE_6__ base; TYPE_5__* nvbo; } ;
struct TYPE_18__ {int chipset; } ;
struct TYPE_19__ {TYPE_2__ info; } ;
struct TYPE_20__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_4__ client; } ;
struct TYPE_21__ {int mode; int kind; } ;
struct TYPE_14__ {int (* acquire ) (struct nv50_wndw*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;scalar_t__ blend_set; scalar_t__ scale_set; int * image_set; } ;





 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_12__*,TYPE_12__*,int) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 struct nouveau_framebuffer* FUNC_3 (int ) ;
 int FUNC_4 (struct nv50_wndw_atom*) ;
 int FUNC_5 (struct nv50_wndw_atom*) ;
 int FUNC_6 (struct nv50_wndw*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;

__attribute__((used)) static int
FUNC_7(struct nv50_wndw *VAR_0, bool VAR_1,
          struct nv50_wndw_atom *VAR_2,
          struct nv50_wndw_atom *VAR_3,
          struct nv50_head_atom *VAR_4)
{
 struct nouveau_framebuffer *VAR_5 = FUNC_3(VAR_3->state.fb);
 struct nouveau_drm *VAR_6 = FUNC_2(VAR_0->plane.dev);
 int VAR_7;

 FUNC_0(VAR_6, "%s acquire\n", VAR_0->plane.name);

 if (VAR_3->state.fb != VAR_2->state.fb || !VAR_2->visible || VAR_1) {
  VAR_3->image.w = VAR_5->base.width;
  VAR_3->image.h = VAR_5->base.height;
  VAR_3->image.kind = VAR_5->nvbo->kind;

  VAR_7 = FUNC_4(VAR_3);
  if (VAR_7) {
   VAR_7 = FUNC_5(VAR_3);
   if (VAR_7)
    return VAR_7;
  }

  if (VAR_3->image.kind) {
   VAR_3->image.layout = 0;
   if (VAR_6->client.device.info.chipset >= 0xc0)
    VAR_3->image.blockh = VAR_5->nvbo->mode >> 4;
   else
    VAR_3->image.blockh = VAR_5->nvbo->mode;
   VAR_3->image.blocks[0] = VAR_5->base.pitches[0] / 64;
   VAR_3->image.pitch[0] = 0;
  } else {
   VAR_3->image.layout = 1;
   VAR_3->image.blockh = 0;
   VAR_3->image.blocks[0] = 0;
   VAR_3->image.pitch[0] = VAR_5->base.pitches[0];
  }

  if (!VAR_4->state.async_flip)
   VAR_3->image.interval = 1;
  else
   VAR_3->image.interval = 0;
  VAR_3->image.mode = VAR_3->image.interval ? 0 : 1;
  VAR_3->set.image = VAR_0->func->image_set != ((void*)0);
 }

 if (VAR_0->func->scale_set) {
  VAR_3->scale.sx = VAR_3->state.src_x >> 16;
  VAR_3->scale.sy = VAR_3->state.src_y >> 16;
  VAR_3->scale.sw = VAR_3->state.src_w >> 16;
  VAR_3->scale.sh = VAR_3->state.src_h >> 16;
  VAR_3->scale.dw = VAR_3->state.crtc_w;
  VAR_3->scale.dh = VAR_3->state.crtc_h;
  if (FUNC_1(&VAR_2->scale, &VAR_3->scale, sizeof(VAR_3->scale)))
   VAR_3->set.scale = 1;
 }

 if (VAR_0->func->blend_set) {
  VAR_3->blend.depth = 255 - VAR_3->state.normalized_zpos;
  VAR_3->blend.k1 = VAR_3->state.alpha >> 8;
  switch (VAR_3->state.pixel_blend_mode) {
  case 128:
   VAR_3->blend.src_color = 2;
   VAR_3->blend.dst_color = 7;
   break;
  case 130:
   VAR_3->blend.src_color = 5;
   VAR_3->blend.dst_color = 7;
   break;
  case 129:
  default:
   VAR_3->blend.src_color = 2;
   VAR_3->blend.dst_color = 4;
   break;
  }
  if (FUNC_1(&VAR_2->blend, &VAR_3->blend, sizeof(VAR_3->blend)))
   VAR_3->set.blend = 1;
 }

 if (VAR_0->immd) {
  VAR_3->point.x = VAR_3->state.crtc_x;
  VAR_3->point.y = VAR_3->state.crtc_y;
  if (FUNC_1(&VAR_2->point, &VAR_3->point, sizeof(VAR_3->point)))
   VAR_3->set.point = 1;
 }

 return VAR_0->func->acquire(VAR_0, VAR_3, VAR_4);
}
