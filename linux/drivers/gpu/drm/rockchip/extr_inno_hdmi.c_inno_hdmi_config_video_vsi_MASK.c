
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdmi; } ;
union hdmi_infoframe {TYPE_1__ vendor; } ;
struct inno_hdmi {int connector; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct drm_display_mode*) ;
 int FUNC_1 (struct inno_hdmi*,int,union hdmi_infoframe*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct inno_hdmi *VAR_2,
          struct drm_display_mode *VAR_3)
{
 union hdmi_infoframe VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4.vendor.hdmi,
        &VAR_2->connector,
        VAR_3);

 return FUNC_1(VAR_2, VAR_5, &VAR_4, VAR_0,
  VAR_1, FUNC_2(0), FUNC_2(1));
}
