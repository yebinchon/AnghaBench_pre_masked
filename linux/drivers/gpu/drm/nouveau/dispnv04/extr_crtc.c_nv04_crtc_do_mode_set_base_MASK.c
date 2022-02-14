
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct nv04_crtc_reg {int* CRTC; int fb_start; int ramdac_gen_ctrl; } ;
struct nouveau_framebuffer {TYPE_4__* nvbo; } ;
struct TYPE_24__ {scalar_t__ family; } ;
struct TYPE_13__ {TYPE_9__ info; } ;
struct TYPE_14__ {TYPE_10__ device; } ;
struct nouveau_drm {TYPE_11__ client; } ;
struct TYPE_21__ {int offset; } ;
struct TYPE_20__ {int depth; } ;
struct nouveau_crtc {size_t index; TYPE_6__ fb; TYPE_5__ lut; } ;
struct drm_framebuffer {int* pitches; TYPE_8__* format; } ;
struct drm_device {int dummy; } ;
struct TYPE_22__ {int clock; } ;
struct drm_crtc {TYPE_7__ mode; TYPE_2__* primary; struct drm_device* dev; } ;
struct TYPE_23__ {int depth; int* cpp; } ;
struct TYPE_18__ {int offset; } ;
struct TYPE_19__ {TYPE_3__ bo; } ;
struct TYPE_17__ {struct drm_framebuffer* fb; } ;
struct TYPE_16__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_15__ {TYPE_1__ mode_reg; } ;


 int FUNC_0 (struct drm_device*,size_t,int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct nouveau_drm*,char*,...) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct drm_crtc*,struct nv04_crtc_reg*,size_t) ;
 int FUNC_4 (struct drm_device*,int ,int,int*,int*) ;
 struct nouveau_crtc* FUNC_5 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 struct nouveau_framebuffer* FUNC_7 (struct drm_framebuffer*) ;
 TYPE_12__* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_crtc*) ;
 int FUNC_10 (struct drm_device*,size_t,int) ;

__attribute__((used)) static int
FUNC_11(struct drm_crtc *VAR_12,
      struct drm_framebuffer *VAR_13,
      int VAR_14, int VAR_15, bool VAR_16)
{
 struct nouveau_crtc *VAR_17 = FUNC_5(VAR_12);
 struct drm_device *VAR_18 = VAR_12->dev;
 struct nouveau_drm *VAR_19 = FUNC_6(VAR_18);
 struct nv04_crtc_reg *VAR_20 = &FUNC_8(VAR_18)->mode_reg.crtc_reg[VAR_17->index];
 struct drm_framebuffer *VAR_21;
 struct nouveau_framebuffer *VAR_22;
 int VAR_23, VAR_24;

 FUNC_1(VAR_19, "index %d\n", VAR_17->index);


 if (!VAR_16 && !VAR_12->primary->fb) {
  FUNC_1(VAR_19, "No FB bound\n");
  return 0;
 }




 if (VAR_16) {
  VAR_21 = VAR_13;
  VAR_22 = FUNC_7(VAR_13);
 } else {
  VAR_21 = VAR_12->primary->fb;
  VAR_22 = FUNC_7(VAR_12->primary->fb);
 }

 VAR_17->fb.offset = VAR_22->nvbo->bo.offset;

 if (VAR_17->lut.depth != VAR_21->format->depth) {
  VAR_17->lut.depth = VAR_21->format->depth;
  FUNC_9(VAR_12);
 }


 VAR_20->CRTC[VAR_5] &= ~3;
 VAR_20->CRTC[VAR_5] |= (VAR_21->format->depth + 1) / 8;
 VAR_20->ramdac_gen_ctrl &= ~VAR_11;
 if (VAR_21->format->depth == 16)
  VAR_20->ramdac_gen_ctrl |= VAR_11;
 FUNC_3(VAR_12, VAR_20, VAR_5);
 FUNC_0(VAR_18, VAR_17->index, VAR_10,
        VAR_20->ramdac_gen_ctrl);

 VAR_20->CRTC[VAR_8] = VAR_21->pitches[0] >> 3;
 VAR_20->CRTC[VAR_6] =
  FUNC_2(VAR_21->pitches[0] >> 3, 8, VAR_7);
 VAR_20->CRTC[VAR_0] =
  FUNC_2(VAR_21->pitches[0] / 8, 11, VAR_1);
 FUNC_3(VAR_12, VAR_20, VAR_6);
 FUNC_3(VAR_12, VAR_20, VAR_8);
 FUNC_3(VAR_12, VAR_20, VAR_0);


 VAR_20->fb_start = VAR_17->fb.offset & ~3;
 VAR_20->fb_start += (VAR_15 * VAR_21->pitches[0]) + (VAR_14 * VAR_21->format->cpp[0]);
 FUNC_10(VAR_18, VAR_17->index, VAR_20->fb_start);


 FUNC_4(VAR_18, VAR_12->mode.clock, VAR_21->format->cpp[0] * 8,
    &VAR_23, &VAR_24);

 VAR_20->CRTC[VAR_4] = VAR_23;
 VAR_20->CRTC[VAR_3] = VAR_24 & 0xff;
 FUNC_3(VAR_12, VAR_20, VAR_4);
 FUNC_3(VAR_12, VAR_20, VAR_3);

 if (VAR_19->client.device.info.family >= VAR_9) {
  VAR_20->CRTC[VAR_2] = VAR_24 >> 8;
  FUNC_3(VAR_12, VAR_20, VAR_2);
 }

 return 0;
}
