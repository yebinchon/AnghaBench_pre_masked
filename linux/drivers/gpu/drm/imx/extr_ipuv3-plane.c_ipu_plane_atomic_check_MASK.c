
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int x1; int y1; } ;
struct drm_plane_state {TYPE_2__ src; int dst; int crtc; int state; struct drm_framebuffer* fb; } ;
struct drm_plane {int type; TYPE_1__* dev; struct drm_plane_state* state; } ;
struct drm_framebuffer {int* pitches; TYPE_3__* format; } ;
struct drm_crtc_state {int mode_changed; int enable; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int format; int vsub; int hsub; } ;
struct TYPE_4__ {struct device* dev; } ;
 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct drm_crtc_state* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;
 unsigned long FUNC_4 (struct drm_plane_state*,int) ;
 unsigned long FUNC_5 (struct drm_plane_state*) ;
 unsigned long FUNC_6 (struct drm_plane_state*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct drm_plane *VAR_2,
      struct drm_plane_state *VAR_3)
{
 struct drm_plane_state *VAR_4 = VAR_2->state;
 struct drm_crtc_state *VAR_5;
 struct device *VAR_6 = VAR_2->dev->dev;
 struct drm_framebuffer *VAR_7 = VAR_3->fb;
 struct drm_framebuffer *VAR_8 = VAR_4->fb;
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 bool VAR_15 = (VAR_2->type == 129);
 int VAR_16;


 if (!VAR_7)
  return 0;

 if (!VAR_3->crtc)
  return -VAR_1;

 VAR_5 =
  FUNC_2(VAR_3->state, VAR_3->crtc);
 if (FUNC_0(!VAR_5))
  return -VAR_1;

 VAR_16 = FUNC_3(VAR_3, VAR_5,
        VAR_0,
        VAR_0,
        VAR_15, 1);
 if (VAR_16)
  return VAR_16;


 if (!VAR_5->enable)
  return 0;

 switch (VAR_2->type) {
 case 128:

  if (FUNC_8(&VAR_3->dst) < 13)
   return -VAR_1;
  break;
 case 129:
  break;
 default:
  FUNC_1(VAR_6, "Unsupported plane type %d\n", VAR_2->type);
  return -VAR_1;
 }

 if (FUNC_7(&VAR_3->dst) < 2)
  return -VAR_1;
 if (VAR_8 &&
     (FUNC_8(&VAR_3->dst) != FUNC_8(&VAR_4->dst) ||
      FUNC_7(&VAR_3->dst) != FUNC_7(&VAR_4->dst) ||
      VAR_7->format != VAR_8->format))
  VAR_5->mode_changed = 1;

 VAR_9 = FUNC_4(VAR_3, 0);

 if (VAR_9 & 0x7)
  return -VAR_1;

 if (VAR_7->pitches[0] < 1 || VAR_7->pitches[0] > 16384)
  return -VAR_1;

 if (VAR_8 && VAR_7->pitches[0] != VAR_8->pitches[0])
  VAR_5->mode_changed = 1;

 switch (VAR_7->format->format) {
 case 135:
 case 132:
 case 134:
 case 131:
 case 133:
 case 130:
  VAR_11 = FUNC_6(VAR_3);

  if (VAR_11 & 0x7 || VAR_11 > 0xfffff8)
   return -VAR_1;

  if (VAR_8 && (VAR_7->format == VAR_8->format)) {
   VAR_13 = FUNC_6(VAR_4);
   if (VAR_11 != VAR_13)
    VAR_5->mode_changed = 1;
  }

  if (VAR_7->pitches[1] != VAR_7->pitches[2])
   return -VAR_1;


 case 140:
 case 139:
  VAR_10 = FUNC_5(VAR_3);

  if (VAR_10 & 0x7 || VAR_10 > 0xfffff8)
   return -VAR_1;

  if (VAR_8 && (VAR_7->format == VAR_8->format)) {
   VAR_12 = FUNC_5(VAR_4);
   if (VAR_10 != VAR_12)
    VAR_5->mode_changed = 1;
  }

  if (VAR_7->pitches[1] < 1 || VAR_7->pitches[1] > 16384)
   return -VAR_1;

  if (VAR_8 && VAR_8->pitches[1] != VAR_7->pitches[1])
   VAR_5->mode_changed = 1;





  if (((VAR_3->src.x1 >> 16) & (VAR_7->format->hsub - 1)) ||
      ((VAR_3->src.y1 >> 16) & (VAR_7->format->vsub - 1)))
   return -VAR_1;
  break;
 case 138:
 case 143:
 case 137:
 case 142:
 case 136:
 case 141:
  VAR_14 = FUNC_4(VAR_3, 1);
  if (VAR_14 & 0x7)
   return -VAR_1;

  if (VAR_7->pitches[1] < 1 || VAR_7->pitches[1] > 16384)
   return -VAR_1;

  if (VAR_8 && VAR_8->pitches[1] != VAR_7->pitches[1])
   VAR_5->mode_changed = 1;
  break;
 }

 return 0;
}
