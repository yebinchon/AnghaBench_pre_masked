
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_device* drm; struct drm_connector* connector; } ;
struct panel_simple {TYPE_2__* desc; TYPE_1__ base; } ;
struct drm_display_mode {int type; int vrefresh; int vdisplay; int hdisplay; } ;
struct drm_device {int dev; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {unsigned int num_modes; struct drm_display_mode* modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,struct drm_display_mode const*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;

__attribute__((used)) static unsigned int FUNC_4(struct panel_simple *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->base.connector;
 struct drm_device *VAR_4 = VAR_2->base.drm;
 struct drm_display_mode *VAR_5;
 unsigned int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->desc->num_modes; VAR_6++) {
  const struct drm_display_mode *VAR_8 = &VAR_2->desc->modes[VAR_6];

  VAR_5 = FUNC_1(VAR_4, VAR_8);
  if (!VAR_5) {
   FUNC_0(VAR_4->dev, "failed to add mode %ux%u@%u\n",
    VAR_8->hdisplay, VAR_8->vdisplay, VAR_8->vrefresh);
   continue;
  }

  VAR_5->type |= VAR_0;

  if (VAR_2->desc->num_modes == 1)
   VAR_5->type |= VAR_1;

  FUNC_3(VAR_5);

  FUNC_2(VAR_3, VAR_5);
  VAR_7++;
 }

 return VAR_7;
}
