
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int colorspace; } ;
union hdmi_infoframe {TYPE_1__ avi; } ;
struct zx_hdmi {int dev; int connector; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,struct drm_display_mode*) ;
 int FUNC_2 (struct zx_hdmi*,union hdmi_infoframe*,int ) ;

__attribute__((used)) static int FUNC_3(struct zx_hdmi *VAR_2,
        struct drm_display_mode *VAR_3)
{
 union hdmi_infoframe VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4.avi,
             &VAR_2->connector,
             VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "failed to get avi infoframe: %d\n",
         VAR_5);
  return VAR_5;
 }


 VAR_4.avi.colorspace = VAR_1;

 return FUNC_2(VAR_2, &VAR_4, VAR_0);
}
