
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct psb_offset {int surf; int base; int cntr; int stride; } ;
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
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (struct drm_device*) ;
 struct gma_crtc* FUNC_6 (struct drm_crtc*) ;
 TYPE_3__* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct drm_crtc *VAR_6,
       int VAR_7, int VAR_8, struct drm_framebuffer *VAR_9)
{
 struct drm_device *VAR_10 = VAR_6->dev;
 struct drm_psb_private *VAR_11 = VAR_10->dev_private;
 struct gma_crtc *VAR_12 = FUNC_6(VAR_6);
 struct drm_framebuffer *VAR_13 = VAR_6->primary->fb;
 int VAR_14 = VAR_12->pipe;
 const struct psb_offset *VAR_15 = &VAR_11->regmap[VAR_14];
 unsigned long VAR_16, VAR_17;

 u32 VAR_18;
 int VAR_19 = 0;


 if (!VAR_13) {
  FUNC_2(VAR_10->dev, "No FB bound\n");
  return 0;
 }

 if (!FUNC_4(VAR_10, 1))
  return 0;

 VAR_16 = FUNC_7(VAR_13->obj[0])->offset;
 VAR_17 = VAR_8 * VAR_13->pitches[0] + VAR_7 * VAR_13->format->cpp[0];

 FUNC_1(VAR_15->stride, VAR_13->pitches[0]);

 VAR_18 = FUNC_0(VAR_15->cntr);
 VAR_18 &= ~VAR_4;

 switch (VAR_13->format->cpp[0] * 8) {
 case 8:
  VAR_18 |= VAR_3;
  break;
 case 16:
  if (VAR_13->format->depth == 15)
   VAR_18 |= VAR_0;
  else
   VAR_18 |= VAR_1;
  break;
 case 24:
 case 32:
  VAR_18 |= VAR_2;
  break;
 default:
  FUNC_3(VAR_10->dev, "Unknown color depth\n");
  VAR_19 = -VAR_5;
  goto pipe_set_base_exit;
 }
 FUNC_1(VAR_15->cntr, VAR_18);

 FUNC_1(VAR_15->base, VAR_17);
 FUNC_0(VAR_15->base);
 FUNC_1(VAR_15->surf, VAR_16);
 FUNC_0(VAR_15->surf);

pipe_set_base_exit:
 FUNC_5(VAR_10);
 return VAR_19;
}
