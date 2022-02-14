
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int regs; } ;
struct sun4i_backend {TYPE_5__ engine; } ;
struct drm_plane_state {int alpha; TYPE_3__* crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_framebuffer {TYPE_4__* format; } ;
struct TYPE_9__ {int format; scalar_t__ is_yuv; } ;
struct TYPE_8__ {TYPE_2__* state; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ adjusted_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (struct sun4i_backend*,int,struct drm_plane*) ;

int FUNC_7(struct sun4i_backend *VAR_8,
           int VAR_9, struct drm_plane *VAR_10)
{
 struct drm_plane_state *VAR_11 = VAR_10->state;
 struct drm_framebuffer *VAR_12 = VAR_11->fb;
 bool VAR_13 = 0;
 u32 VAR_14;
 int VAR_15;


 FUNC_4(VAR_8->engine.regs, FUNC_1(VAR_9),
      VAR_4, 0);

 if (VAR_10->state->crtc)
  VAR_13 = VAR_10->state->crtc->state->adjusted_mode.flags
   & VAR_1;

 FUNC_4(VAR_8->engine.regs, VAR_7,
      VAR_6,
      VAR_13 ? VAR_6 : 0);

 FUNC_0("Switching display backend interlaced mode %s\n",
    VAR_13 ? "on" : "off");

 VAR_14 = FUNC_2(VAR_11->alpha >> 8);
 if (VAR_11->alpha != VAR_0)
  VAR_14 |= VAR_2;
 FUNC_4(VAR_8->engine.regs,
      FUNC_1(VAR_9),
      VAR_3 |
      VAR_2,
      VAR_14);

 if (VAR_12->format->is_yuv)
  return FUNC_6(VAR_8, VAR_9, VAR_10);

 VAR_15 = FUNC_5(VAR_12->format->format, &VAR_14);
 if (VAR_15) {
  FUNC_0("Invalid format\n");
  return VAR_15;
 }

 FUNC_4(VAR_8->engine.regs,
      FUNC_3(VAR_9),
      VAR_5, VAR_14);

 return 0;
}
