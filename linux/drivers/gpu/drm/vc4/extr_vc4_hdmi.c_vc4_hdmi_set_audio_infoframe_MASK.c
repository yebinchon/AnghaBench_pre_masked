
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channels; int sample_size; int sample_frequency; int coding_type; } ;
union hdmi_infoframe {TYPE_2__ audio; } ;
struct TYPE_3__ {int channels; } ;
struct vc4_hdmi {TYPE_1__ audio; } ;
struct vc4_dev {struct vc4_hdmi* hdmi; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct vc4_dev* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct drm_encoder*,union hdmi_infoframe*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct vc4_dev *VAR_5 = VAR_4->dev_private;
 struct vc4_hdmi *VAR_6 = VAR_5->hdmi;
 union hdmi_infoframe VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_7.audio);

 VAR_7.audio.coding_type = VAR_0;
 VAR_7.audio.sample_frequency = VAR_1;
 VAR_7.audio.sample_size = VAR_2;
 VAR_7.audio.channels = VAR_6->audio.channels;

 FUNC_1(VAR_3, &VAR_7);
}
