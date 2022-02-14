
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct psb_offset {int surf; int base; int cntr; int stride; } ;
struct gtt_range {unsigned long offset; } ;
struct gma_crtc {int pipe; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_framebuffer {int* pitches; int * obj; TYPE_2__* format; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {TYPE_1__* primary; struct drm_device* dev; } ;
struct TYPE_4__ {int* cpp; int depth; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,char*,unsigned long,unsigned long,int,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct gtt_range*) ;
 int FUNC_8 (struct gtt_range*) ;
 struct gma_crtc* FUNC_9 (struct drm_crtc*) ;
 struct gtt_range* FUNC_10 (int ) ;

int FUNC_11(struct drm_crtc *VAR_6, int VAR_7, int VAR_8,
        struct drm_framebuffer *VAR_9)
{
 struct drm_device *VAR_10 = VAR_6->dev;
 struct drm_psb_private *VAR_11 = VAR_10->dev_private;
 struct gma_crtc *VAR_12 = FUNC_9(VAR_6);
 struct drm_framebuffer *VAR_13 = VAR_6->primary->fb;
 struct gtt_range *VAR_14;
 int VAR_15 = VAR_12->pipe;
 const struct psb_offset *VAR_16 = &VAR_11->regmap[VAR_15];
 unsigned long VAR_17, VAR_18;
 u32 VAR_19;
 int VAR_20 = 0;

 if (!FUNC_5(VAR_10, 1))
  return 0;


 if (!VAR_13) {
  FUNC_4(VAR_10->dev, "No FB bound\n");
  goto gma_pipe_cleaner;
 }

 VAR_14 = FUNC_10(VAR_13->obj[0]);



 VAR_20 = FUNC_7(VAR_14);
 if (VAR_20 < 0)
  goto gma_pipe_set_base_exit;
 VAR_17 = VAR_14->offset;
 VAR_18 = VAR_8 * VAR_13->pitches[0] + VAR_7 * VAR_13->format->cpp[0];

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
 default:
  FUNC_4(VAR_10->dev, "Unknown color depth\n");
  VAR_20 = -VAR_5;
  goto gma_pipe_set_base_exit;
 }
 FUNC_2(VAR_16->cntr, VAR_19);

 FUNC_3(VAR_10->dev,
  "Writing base %08lX %08lX %d %d\n", VAR_17, VAR_18, VAR_7, VAR_8);




 if (FUNC_0(VAR_10)) {
  FUNC_2(VAR_16->base, VAR_18 + VAR_17);
  FUNC_1(VAR_16->base);
 } else {
  FUNC_2(VAR_16->base, VAR_18);
  FUNC_1(VAR_16->base);
  FUNC_2(VAR_16->surf, VAR_17);
  FUNC_1(VAR_16->surf);
 }

gma_pipe_cleaner:

 if (VAR_9)
  FUNC_8(FUNC_10(VAR_9->obj[0]));

gma_pipe_set_base_exit:
 FUNC_6(VAR_10);
 return VAR_20;
}
