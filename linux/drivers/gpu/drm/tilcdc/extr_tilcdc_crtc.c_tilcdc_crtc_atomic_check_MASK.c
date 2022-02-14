
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_crtc_state {TYPE_4__* state; int active; } ;
struct drm_crtc {scalar_t__ primary; TYPE_2__* dev; } ;
struct TYPE_8__ {TYPE_3__* planes; } ;
struct TYPE_7__ {scalar_t__ ptr; TYPE_1__* state; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct drm_crtc *VAR_1,
        struct drm_crtc_state *VAR_2)
{

 if (!VAR_2->active)
  return 0;

 if (VAR_2->state->planes[0].ptr != VAR_1->primary ||
     VAR_2->state->planes[0].state == ((void*)0) ||
     VAR_2->state->planes[0].state->crtc != VAR_1) {
  FUNC_0(VAR_1->dev->dev, "CRTC primary plane must be present");
  return -VAR_0;
 }

 return 0;
}
