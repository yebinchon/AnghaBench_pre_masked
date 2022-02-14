
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {int crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {int format; } ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct drm_plane *VAR_1,
       struct drm_plane_state *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_2->fb;

 if (!VAR_2->fb || !VAR_2->crtc)
  return 0;

 switch (VAR_3->format->format) {
 case 133:
 case 132:
 case 129:
 case 134:
 case 130:
 case 135:
 case 131:
 case 136:
 case 128:
  return 0;
 default:
  return -VAR_0;
 }
}
