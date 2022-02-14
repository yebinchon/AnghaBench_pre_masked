
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int scan_mode; int colorimetry; scalar_t__ colorspace; } ;
union hdmi_infoframe {TYPE_2__ avi; } ;
struct TYPE_3__ {scalar_t__ enc_out_format; int colorimetry; } ;
struct rk3066_hdmi {TYPE_1__ hdmi_data; int connector; } ;
struct drm_display_mode {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *,struct drm_display_mode*) ;
 int FUNC_1 (struct rk3066_hdmi*,int,union hdmi_infoframe*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rk3066_hdmi *VAR_5,
      struct drm_display_mode *VAR_6)
{
 union hdmi_infoframe VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_7.avi,
            &VAR_5->connector, VAR_6);

 if (VAR_5->hdmi_data.enc_out_format == VAR_2)
  VAR_7.avi.colorspace = VAR_2;
 else if (VAR_5->hdmi_data.enc_out_format == VAR_1)
  VAR_7.avi.colorspace = VAR_1;
 else
  VAR_7.avi.colorspace = VAR_0;

 VAR_7.avi.colorimetry = VAR_5->hdmi_data.colorimetry;
 VAR_7.avi.scan_mode = VAR_4;

 return FUNC_1(VAR_5, VAR_8, &VAR_7,
     VAR_3, 0, 0, 0);
}
