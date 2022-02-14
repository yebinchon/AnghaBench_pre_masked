
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qxl_head {int id; scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; scalar_t__ flags; } ;
struct qxl_device {scalar_t__ primary_bo; scalar_t__ dumb_shadow_bo; TYPE_3__* monitors_config; TYPE_1__* dumb_heads; } ;
struct qxl_crtc {int index; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct drm_crtc {scalar_t__ x; scalar_t__ y; TYPE_2__* state; struct drm_display_mode mode; struct drm_device* dev; } ;
struct TYPE_6__ {int count; int max_allowed; struct qxl_head* heads; } ;
struct TYPE_5__ {scalar_t__ active; } ;
struct TYPE_4__ {scalar_t__ x; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct qxl_device*) ;
 struct qxl_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1,
         const char *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct qxl_device *VAR_4 = VAR_3->dev_private;
 struct qxl_crtc *VAR_5 = FUNC_2(VAR_1);
 struct qxl_head VAR_6;
 int VAR_7, VAR_8 = VAR_5->index;

 if (!VAR_4->primary_bo) {
  FUNC_0("no primary surface, skip (%s)\n", VAR_2);
  return;
 }

 if (!VAR_4->monitors_config || VAR_0 <= VAR_8)
  return;

 VAR_6.id = VAR_8;
 VAR_6.flags = 0;
 VAR_7 = VAR_4->monitors_config->count;
 if (VAR_1->state->active) {
  struct drm_display_mode *VAR_9 = &VAR_1->mode;

  VAR_6.width = VAR_9->hdisplay;
  VAR_6.height = VAR_9->vdisplay;
  VAR_6.x = VAR_1->x;
  VAR_6.y = VAR_1->y;
  if (VAR_4->monitors_config->count < VAR_8 + 1)
   VAR_4->monitors_config->count = VAR_8 + 1;
  if (VAR_4->primary_bo == VAR_4->dumb_shadow_bo)
   VAR_6.x += VAR_4->dumb_heads[VAR_8].x;
 } else if (VAR_8 > 0) {
  VAR_6.width = 0;
  VAR_6.height = 0;
  VAR_6.x = 0;
  VAR_6.y = 0;
  if (VAR_4->monitors_config->count == VAR_8 + 1)
   VAR_4->monitors_config->count = VAR_8;
 } else {
  FUNC_0("inactive head 0, skip (%s)\n", VAR_2);
  return;
 }

 if (VAR_6.width == VAR_4->monitors_config->heads[VAR_8].width &&
     VAR_6.height == VAR_4->monitors_config->heads[VAR_8].height &&
     VAR_6.x == VAR_4->monitors_config->heads[VAR_8].x &&
     VAR_6.y == VAR_4->monitors_config->heads[VAR_8].y &&
     VAR_7 == VAR_4->monitors_config->count)
  return;

 FUNC_0("head %d, %dx%d, at +%d+%d, %s (%s)\n",
        VAR_8, VAR_6.width, VAR_6.height, VAR_6.x, VAR_6.y,
        VAR_1->state->active ? "on" : "off", VAR_2);
 if (VAR_7 != VAR_4->monitors_config->count)
  FUNC_0("active heads %d -> %d (%d total)\n",
         VAR_7, VAR_4->monitors_config->count,
         VAR_0);

 VAR_4->monitors_config->heads[VAR_8] = VAR_6;
 VAR_4->monitors_config->max_allowed = VAR_0;
 FUNC_1(VAR_4);
}
