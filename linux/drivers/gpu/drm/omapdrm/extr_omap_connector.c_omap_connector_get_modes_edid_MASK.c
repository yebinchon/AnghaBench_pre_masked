
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; } ;
struct omap_connector {int hdmi_mode; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {scalar_t__ (* read_edid ) (struct omap_dss_device*,void*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_connector*,void*) ;
 int FUNC_1 (struct drm_connector*,void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct drm_connector*,int) ;
 scalar_t__ FUNC_7 (struct omap_dss_device*,void*,int ) ;
 struct omap_connector* FUNC_8 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_9(struct drm_connector *VAR_3,
      struct omap_dss_device *VAR_4)
{
 struct omap_connector *VAR_5 = FUNC_8(VAR_3);
 enum drm_connector_status VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(VAR_3, 0);
 if (VAR_6 != VAR_2)
  goto no_edid;

 VAR_7 = FUNC_5(VAR_1, VAR_0);
 if (!VAR_7)
  goto no_edid;

 if (VAR_4->ops->read_edid(VAR_4, VAR_7, VAR_1) <= 0 ||
     !FUNC_3(VAR_7)) {
  FUNC_4(VAR_7);
  goto no_edid;
 }

 FUNC_1(VAR_3, VAR_7);
 VAR_8 = FUNC_0(VAR_3, VAR_7);

 VAR_5->hdmi_mode = FUNC_2(VAR_7);

 FUNC_4(VAR_7);
 return VAR_8;

no_edid:
 FUNC_1(VAR_3, ((void*)0));
 return 0;
}
