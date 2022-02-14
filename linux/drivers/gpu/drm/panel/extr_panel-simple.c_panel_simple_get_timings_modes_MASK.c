
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct TYPE_5__ {struct drm_device* drm; struct drm_connector* connector; } ;
struct panel_simple {TYPE_4__* desc; TYPE_1__ base; } ;
struct drm_display_mode {int type; } ;
struct drm_device {int dev; } ;
struct drm_connector {int dummy; } ;
struct TYPE_7__ {int typ; } ;
struct TYPE_6__ {int typ; } ;
struct display_timing {TYPE_3__ vactive; TYPE_2__ hactive; } ;
struct TYPE_8__ {unsigned int num_timings; struct display_timing* timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct videomode*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_4 (struct display_timing const*,struct videomode*) ;

__attribute__((used)) static unsigned int FUNC_5(struct panel_simple *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->base.connector;
 struct drm_device *VAR_4 = VAR_2->base.drm;
 struct drm_display_mode *VAR_5;
 unsigned int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->desc->num_timings; VAR_6++) {
  const struct display_timing *VAR_8 = &VAR_2->desc->timings[VAR_6];
  struct videomode VAR_9;

  FUNC_4(VAR_8, &VAR_9);
  VAR_5 = FUNC_2(VAR_4);
  if (!VAR_5) {
   FUNC_0(VAR_4->dev, "failed to add mode %ux%u\n",
    VAR_8->hactive.typ, VAR_8->vactive.typ);
   continue;
  }

  FUNC_1(&VAR_9, VAR_5);

  VAR_5->type |= VAR_0;

  if (VAR_2->desc->num_timings == 1)
   VAR_5->type |= VAR_1;

  FUNC_3(VAR_3, VAR_5);
  VAR_7++;
 }

 return VAR_7;
}
