
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct edid {int extensions; } ;
struct TYPE_4__ {int edid_property; int non_desktop_property; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_3__ {int non_desktop; } ;
struct drm_connector {int base; int edid_blob_ptr; TYPE_1__ display_info; scalar_t__ override_edid; struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct edid const*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct drm_device*,int *,size_t,struct edid const*,int *,int ) ;
 int FUNC_4 (struct drm_connector*) ;

int FUNC_5(struct drm_connector *VAR_1,
           const struct edid *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 size_t VAR_4 = 0;
 int VAR_5;


 if (VAR_1->override_edid)
  return 0;

 if (VAR_2)
  VAR_4 = VAR_0 * (1 + VAR_2->extensions);
 if (VAR_2)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_4(VAR_1);

 FUNC_2(&VAR_1->base,
          VAR_3->mode_config.non_desktop_property,
          VAR_1->display_info.non_desktop);

 VAR_5 = FUNC_3(VAR_3,
            &VAR_1->edid_blob_ptr,
                                        VAR_4,
                                        VAR_2,
                                        &VAR_1->base,
                                        VAR_3->mode_config.edid_property);
 if (VAR_5)
  return VAR_5;
 return FUNC_1(VAR_1);
}
