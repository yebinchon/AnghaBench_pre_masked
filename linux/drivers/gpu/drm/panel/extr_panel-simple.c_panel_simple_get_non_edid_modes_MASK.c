
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
struct TYPE_6__ {struct drm_device* drm; struct drm_connector* connector; } ;
struct panel_simple {TYPE_3__* desc; TYPE_4__ override_mode; TYPE_1__ base; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dev; } ;
struct TYPE_10__ {int bus_flags; int height_mm; int width_mm; int bpc; } ;
struct drm_connector {TYPE_5__ display_info; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_8__ {int bus_flags; int bus_format; TYPE_2__ size; int bpc; scalar_t__ num_modes; scalar_t__ num_timings; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_5__*,int *,int) ;
 struct drm_display_mode* FUNC_3 (struct drm_device*,TYPE_4__*) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;
 unsigned int FUNC_5 (struct panel_simple*) ;
 unsigned int FUNC_6 (struct panel_simple*) ;

__attribute__((used)) static int FUNC_7(struct panel_simple *VAR_0)
{
 struct drm_connector *VAR_1 = VAR_0->base.connector;
 struct drm_device *VAR_2 = VAR_0->base.drm;
 struct drm_display_mode *VAR_3;
 bool VAR_4 = VAR_0->override_mode.type;
 unsigned int VAR_5 = 0;

 if (!VAR_0->desc)
  return 0;

 if (VAR_4) {
  VAR_3 = FUNC_3(VAR_2, &VAR_0->override_mode);
  if (VAR_3) {
   FUNC_4(VAR_1, VAR_3);
   VAR_5 = 1;
  } else {
   FUNC_1(VAR_2->dev, "failed to add override mode\n");
  }
 }


 if (VAR_5 == 0 && VAR_0->desc->num_timings)
  VAR_5 = FUNC_6(VAR_0);







 FUNC_0(VAR_0->desc->num_timings && VAR_0->desc->num_modes);
 if (VAR_5 == 0)
  VAR_5 = FUNC_5(VAR_0);

 VAR_1->display_info.bpc = VAR_0->desc->bpc;
 VAR_1->display_info.width_mm = VAR_0->desc->size.width;
 VAR_1->display_info.height_mm = VAR_0->desc->size.height;
 if (VAR_0->desc->bus_format)
  FUNC_2(&VAR_1->display_info,
       &VAR_0->desc->bus_format, 1);
 VAR_1->display_info.bus_flags = VAR_0->desc->bus_flags;

 return VAR_5;
}
