
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdmi; } ;
union hdmi_infoframe {TYPE_1__ vendor; } ;
struct zx_hdmi {int dev; int connector; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,struct drm_display_mode*) ;
 int FUNC_2 (struct zx_hdmi*,union hdmi_infoframe*,int ) ;

__attribute__((used)) static int FUNC_3(struct zx_hdmi *VAR_1,
        struct drm_display_mode *VAR_2)
{
 union hdmi_infoframe VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3.vendor.hdmi,
         &VAR_1->connector,
         VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_1->dev, "failed to get vendor infoframe: %d\n",
         VAR_4);
  return VAR_4;
 }

 return FUNC_2(VAR_1, &VAR_3, VAR_0);
}
