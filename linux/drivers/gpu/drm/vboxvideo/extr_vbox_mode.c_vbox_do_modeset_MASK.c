
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct vbox_private {int guest_pool; scalar_t__ single_framebuffer; } ;
struct vbox_crtc {int width; int height; int x; int x_hint; int y; int y_hint; scalar_t__ crtc_id; int fb_offset; scalar_t__ disconnected; } ;
struct drm_framebuffer {int* pitches; TYPE_4__* format; } ;
struct drm_crtc {int y; TYPE_5__* state; TYPE_3__* dev; TYPE_2__* primary; } ;
typedef int s32 ;
struct TYPE_10__ {scalar_t__ enable; } ;
struct TYPE_9__ {int* cpp; } ;
struct TYPE_8__ {struct vbox_private* dev_private; } ;
struct TYPE_7__ {TYPE_1__* state; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,scalar_t__,int,int,int,int,int,int,int,int ) ;
 struct vbox_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_11)
{
 struct drm_framebuffer *VAR_12 = VAR_11->primary->state->fb;
 struct vbox_crtc *VAR_13 = FUNC_1(VAR_11);
 struct vbox_private *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 u16 VAR_19;
 s32 VAR_20, VAR_21;

 VAR_14 = VAR_11->dev->dev_private;
 VAR_15 = VAR_13->width ? VAR_13->width : 640;
 VAR_16 = VAR_13->height ? VAR_13->height : 480;
 VAR_17 = VAR_12 ? VAR_12->format->cpp[0] * 8 : 32;
 VAR_18 = VAR_12 ? VAR_12->pitches[0] : VAR_15 * VAR_17 / 8;
 VAR_20 = VAR_14->single_framebuffer ? VAR_13->x : VAR_13->x_hint;
 VAR_21 = VAR_14->single_framebuffer ? VAR_13->y : VAR_13->y_hint;







 if (VAR_13->crtc_id == 0 && VAR_12 &&
     VAR_13->fb_offset / VAR_18 < 0xffff - VAR_11->y &&
     VAR_13->fb_offset % (VAR_17 / 8) == 0) {
  FUNC_2(VAR_4, VAR_15);
  FUNC_2(VAR_6, VAR_16);
  FUNC_2(VAR_3, VAR_18 * 8 / VAR_17);
  FUNC_2(VAR_1, VAR_17);
  FUNC_2(VAR_2, VAR_0);
  FUNC_2(VAR_5,
   VAR_13->fb_offset % VAR_18 / VAR_17 * 8 + VAR_13->x);
  FUNC_2(VAR_7,
      VAR_13->fb_offset / VAR_18 + VAR_13->y);
 }

 VAR_19 = VAR_8;
 VAR_19 |= (VAR_12 && VAR_11->state->enable) ? 0 : VAR_9;
 VAR_19 |= VAR_13->disconnected ? VAR_10 : 0;
 FUNC_0(VAR_14->guest_pool, VAR_13->crtc_id,
       VAR_20, VAR_21,
       VAR_13->x * VAR_17 / 8 +
       VAR_13->y * VAR_18,
       VAR_18, VAR_15, VAR_16, VAR_17, VAR_19);
}
