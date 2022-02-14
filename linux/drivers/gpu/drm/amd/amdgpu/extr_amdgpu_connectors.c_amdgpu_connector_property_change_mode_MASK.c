
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {struct drm_crtc* crtc; } ;
struct drm_crtc {TYPE_1__* primary; int y; int x; int mode; scalar_t__ enabled; } ;
struct TYPE_2__ {int fb; } ;


 int FUNC_0 (struct drm_crtc*,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_0)
{
 struct drm_crtc *VAR_1 = VAR_0->crtc;

 if (VAR_1 && VAR_1->enabled) {
  FUNC_0(VAR_1, &VAR_1->mode,
      VAR_1->x, VAR_1->y, VAR_1->primary->fb);
 }
}
