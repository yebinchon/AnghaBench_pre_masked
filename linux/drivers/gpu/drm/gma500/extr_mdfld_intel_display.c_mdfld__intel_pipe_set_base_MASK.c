
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct psb_offset {int surf; int linoff; int cntr; int stride; } ;
struct gma_crtc {int pipe; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_framebuffer {int* pitches; TYPE_2__* format; int * obj; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {TYPE_1__* primary; struct drm_device* dev; } ;
struct TYPE_6__ {unsigned long offset; } ;
struct TYPE_5__ {int* cpp; int depth; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct drm_framebuffer*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int *,struct drm_device*,int) ;
 struct gma_crtc* FUNC_8 (struct drm_crtc*) ;
 TYPE_3__* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct drm_crtc *VAR_7, int VAR_8, int VAR_9,
    struct drm_framebuffer *VAR_10)
{
 struct drm_device *VAR_11 = VAR_7->dev;
 struct drm_psb_private *VAR_12 = VAR_11->dev_private;
 struct drm_framebuffer *VAR_13 = VAR_7->primary->fb;
 struct gma_crtc *VAR_14 = FUNC_8(VAR_7);
 int VAR_15 = VAR_14->pipe;
 const struct psb_offset *VAR_16 = &VAR_12->regmap[VAR_15];
 unsigned long VAR_17, VAR_18;
 u32 VAR_19;
 int VAR_20;

 FUNC_7(&VAR_6, VAR_11, sizeof(struct drm_device));

 FUNC_4(VAR_11->dev, "pipe = 0x%x.\n", VAR_15);


 if (!VAR_13) {
  FUNC_4(VAR_11->dev, "No FB bound\n");
  return 0;
 }

 VAR_20 = FUNC_3(VAR_13);
 if (VAR_20)
  return VAR_20;

 if (VAR_15 > 2) {
  FUNC_0("Illegal Pipe Number.\n");
  return -VAR_5;
 }

 if (!FUNC_5(VAR_11, 1))
  return 0;

 VAR_17 = FUNC_9(VAR_13->obj[0])->offset;
 VAR_18 = VAR_9 * VAR_13->pitches[0] + VAR_8 * VAR_13->format->cpp[0];

 FUNC_2(VAR_16->stride, VAR_13->pitches[0]);
 VAR_19 = FUNC_1(VAR_16->cntr);
 VAR_19 &= ~VAR_4;

 switch (VAR_13->format->cpp[0] * 8) {
 case 8:
  VAR_19 |= VAR_3;
  break;
 case 16:
  if (VAR_13->format->depth == 15)
   VAR_19 |= VAR_0;
  else
   VAR_19 |= VAR_1;
  break;
 case 24:
 case 32:
  VAR_19 |= VAR_2;
  break;
 }
 FUNC_2(VAR_16->cntr, VAR_19);

 FUNC_4(VAR_11->dev, "Writing base %08lX %08lX %d %d\n",
      VAR_17, VAR_18, VAR_8, VAR_9);
 FUNC_2(VAR_16->linoff, VAR_18);
 FUNC_1(VAR_16->linoff);
 FUNC_2(VAR_16->surf, VAR_17);
 FUNC_1(VAR_16->surf);

 FUNC_6(VAR_11);

 return 0;
}
