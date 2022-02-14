
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ colorspace; } ;
union hdmi_infoframe {TYPE_2__ avi; } ;
struct TYPE_3__ {scalar_t__ enc_out_format; } ;
struct inno_hdmi {TYPE_1__ hdmi_data; int connector; } ;
struct drm_display_mode {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,struct drm_display_mode*) ;
 int FUNC_1 (struct inno_hdmi*,int,union hdmi_infoframe*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct inno_hdmi *VAR_4,
          struct drm_display_mode *VAR_5)
{
 union hdmi_infoframe VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_6.avi,
            &VAR_4->connector,
            VAR_5);

 if (VAR_4->hdmi_data.enc_out_format == VAR_2)
  VAR_6.avi.colorspace = VAR_2;
 else if (VAR_4->hdmi_data.enc_out_format == VAR_1)
  VAR_6.avi.colorspace = VAR_1;
 else
  VAR_6.avi.colorspace = VAR_0;

 return FUNC_1(VAR_4, VAR_7, &VAR_6, VAR_3, 0, 0, 0);
}
