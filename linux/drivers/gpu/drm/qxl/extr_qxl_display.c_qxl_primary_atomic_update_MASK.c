
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct qxl_device {TYPE_2__* dumb_heads; scalar_t__ primary_bo; } ;
struct qxl_bo {scalar_t__ is_dumb; int is_primary; struct qxl_bo* shadow; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_4__* state; TYPE_1__* dev; } ;
struct drm_clip_rect {int y2; int x2; int y1; int x1; } ;
struct TYPE_10__ {int height; int width; int * obj; } ;
struct TYPE_9__ {TYPE_5__* fb; TYPE_3__* crtc; } ;
struct TYPE_8__ {size_t index; } ;
struct TYPE_7__ {int x; } ;
struct TYPE_6__ {struct qxl_device* dev_private; } ;


 struct qxl_bo* FUNC_0 (int ) ;
 int FUNC_1 (struct qxl_device*,TYPE_5__*,struct qxl_bo*,int ,int ,struct drm_clip_rect*,int,int,int ) ;
 int FUNC_2 (struct qxl_device*,struct qxl_bo*) ;
 int FUNC_3 (struct qxl_device*) ;
 int FUNC_4 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_0,
          struct drm_plane_state *VAR_1)
{
 struct qxl_device *VAR_2 = VAR_0->dev->dev_private;
 struct qxl_bo *VAR_3 = FUNC_0(VAR_0->state->fb->obj[0]);
 struct qxl_bo *VAR_4;
 struct drm_clip_rect VAR_5 = {
     .x1 = 0,
     .y1 = 0,
     .x2 = VAR_0->state->fb->width,
     .y2 = VAR_0->state->fb->height
 };
 uint32_t VAR_6 = 0;

 VAR_4 = VAR_3->shadow ? VAR_3->shadow : VAR_3;

 if (!VAR_4->is_primary) {
  if (VAR_2->primary_bo)
   FUNC_3(VAR_2);
  FUNC_2(VAR_2, VAR_4);
  FUNC_4(VAR_0);
 }

 if (VAR_3->is_dumb)
  VAR_6 =
   VAR_2->dumb_heads[VAR_0->state->crtc->index].x;

 FUNC_1(VAR_2, VAR_0->state->fb, VAR_3, 0, 0, &VAR_5, 1, 1,
     VAR_6);
}
