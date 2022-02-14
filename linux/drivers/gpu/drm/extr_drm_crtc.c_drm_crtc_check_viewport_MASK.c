
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_2__* primary; scalar_t__ state; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct TYPE_3__ {int rotation; } ;


 int FUNC_0 (int,int,int,int,struct drm_framebuffer const*) ;
 int FUNC_1 (struct drm_display_mode const*,int*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

int FUNC_4(const struct drm_crtc *VAR_0,
       int VAR_1, int VAR_2,
       const struct drm_display_mode *VAR_3,
       const struct drm_framebuffer *VAR_4)

{
 int VAR_5, VAR_6;

 FUNC_1(VAR_3, &VAR_5, &VAR_6);

 if (VAR_0->state &&
     FUNC_2(VAR_0->primary->state->rotation))
  FUNC_3(VAR_5, VAR_6);

 return FUNC_0(VAR_1 << 16, VAR_2 << 16,
      VAR_5 << 16, VAR_6 << 16,
      VAR_4);
}
