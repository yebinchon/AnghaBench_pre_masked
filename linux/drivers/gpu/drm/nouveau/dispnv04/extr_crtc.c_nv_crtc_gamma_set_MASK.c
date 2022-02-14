
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ depth; } ;
struct TYPE_5__ {TYPE_1__* primary; } ;
struct nouveau_crtc {TYPE_3__ lut; TYPE_2__ base; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_4__ {int fb; } ;


 struct nouveau_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static int
FUNC_2(struct drm_crtc *VAR_0, u16 *VAR_1, u16 *VAR_2, u16 *VAR_3,
    uint32_t VAR_4,
    struct drm_modeset_acquire_ctx *VAR_5)
{
 struct nouveau_crtc *VAR_6 = FUNC_0(VAR_0);






 if (!VAR_6->base.primary->fb) {
  VAR_6->lut.depth = 0;
  return 0;
 }

 FUNC_1(VAR_0);

 return 0;
}
