
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct TYPE_7__ {struct drm_device* drm; struct drm_connector* connector; } ;
struct seiko_panel {TYPE_5__* desc; TYPE_1__ base; } ;
struct drm_display_mode {int type; int vrefresh; int vdisplay; int hdisplay; } ;
struct drm_device {int dev; } ;
struct TYPE_12__ {int bus_flags; int height_mm; int width_mm; int bpc; } ;
struct drm_connector {TYPE_6__ display_info; } ;
struct TYPE_9__ {int typ; } ;
struct TYPE_8__ {int typ; } ;
struct display_timing {TYPE_3__ vactive; TYPE_2__ hactive; } ;
struct TYPE_10__ {int height; int width; } ;
struct TYPE_11__ {unsigned int num_timings; unsigned int num_modes; int bus_flags; int bus_format; TYPE_4__ size; int bpc; struct drm_display_mode* modes; struct display_timing* timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (TYPE_6__*,int *,int) ;
 int FUNC_2 (struct videomode*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_3 (struct drm_device*) ;
 struct drm_display_mode* FUNC_4 (struct drm_device*,struct drm_display_mode const*) ;
 int FUNC_5 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_6 (struct drm_display_mode*) ;
 int FUNC_7 (struct display_timing const*,struct videomode*) ;

__attribute__((used)) static int FUNC_8(struct seiko_panel *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->base.connector;
 struct drm_device *VAR_4 = VAR_2->base.drm;
 struct drm_display_mode *VAR_5;
 unsigned int VAR_6, VAR_7 = 0;

 if (!VAR_2->desc)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->desc->num_timings; VAR_6++) {
  const struct display_timing *VAR_8 = &VAR_2->desc->timings[VAR_6];
  struct videomode VAR_9;

  FUNC_7(VAR_8, &VAR_9);
  VAR_5 = FUNC_3(VAR_4);
  if (!VAR_5) {
   FUNC_0(VAR_4->dev, "failed to add mode %ux%u\n",
    VAR_8->hactive.typ, VAR_8->vactive.typ);
   continue;
  }

  FUNC_2(&VAR_9, VAR_5);

  VAR_5->type |= VAR_0;

  if (VAR_2->desc->num_timings == 1)
   VAR_5->type |= VAR_1;

  FUNC_5(VAR_3, VAR_5);
  VAR_7++;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->desc->num_modes; VAR_6++) {
  const struct drm_display_mode *VAR_10 = &VAR_2->desc->modes[VAR_6];

  VAR_5 = FUNC_4(VAR_4, VAR_10);
  if (!VAR_5) {
   FUNC_0(VAR_4->dev, "failed to add mode %ux%u@%u\n",
    VAR_10->hdisplay, VAR_10->vdisplay, VAR_10->vrefresh);
   continue;
  }

  VAR_5->type |= VAR_0;

  if (VAR_2->desc->num_modes == 1)
   VAR_5->type |= VAR_1;

  FUNC_6(VAR_5);

  FUNC_5(VAR_3, VAR_5);
  VAR_7++;
 }

 VAR_3->display_info.bpc = VAR_2->desc->bpc;
 VAR_3->display_info.width_mm = VAR_2->desc->size.width;
 VAR_3->display_info.height_mm = VAR_2->desc->size.height;
 if (VAR_2->desc->bus_format)
  FUNC_1(&VAR_3->display_info,
       &VAR_2->desc->bus_format, 1);
 VAR_3->display_info.bus_flags = VAR_2->desc->bus_flags;

 return VAR_7;
}
