
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct drm_simple_display_pipe {TYPE_2__ plane; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_framebuffer {int* pitches; TYPE_3__* format; } ;
struct drm_display_mode {int hdisplay; } ;
struct drm_crtc_state {int mode_changed; struct drm_display_mode mode; } ;
struct TYPE_6__ {int* cpp; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_framebuffer*,struct drm_plane_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_simple_display_pipe *VAR_1,
         struct drm_plane_state *VAR_2,
         struct drm_crtc_state *VAR_3)
{
 const struct drm_display_mode *VAR_4 = &VAR_3->mode;
 struct drm_framebuffer *VAR_5 = VAR_1->plane.state->fb;
 struct drm_framebuffer *VAR_6 = VAR_2->fb;

 if (VAR_6) {
  u32 VAR_7 = FUNC_1(VAR_6, VAR_2, 0);


  if (VAR_7 & 3) {
   FUNC_0("FB not 32-bit aligned\n");
   return -VAR_0;
  }





  if (VAR_6->pitches[0] != VAR_4->hdisplay * VAR_6->format->cpp[0]) {
   FUNC_0("can't handle pitches\n");
   return -VAR_0;
  }





  if (VAR_5 && VAR_5->format != VAR_6->format)
   VAR_3->mode_changed = 1;
 }

 return 0;
}
