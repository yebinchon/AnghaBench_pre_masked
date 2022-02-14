
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int rotation; int src; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_4__ {int format; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct intel_plane_state *VAR_4)
{
 const struct drm_framebuffer *VAR_5 = VAR_4->base.fb;
 unsigned int VAR_6 = VAR_4->base.rotation;
 int VAR_7 = FUNC_1(&VAR_4->base.src) >> 16;


 if (FUNC_2(VAR_5->format->format) && VAR_7 & 3 &&
     (VAR_6 == VAR_1 ||
      VAR_6 == (VAR_0 | VAR_2))) {
  FUNC_0("src width must be multiple of 4 for rotated planar YUV\n");
  return -VAR_3;
 }

 return 0;
}
