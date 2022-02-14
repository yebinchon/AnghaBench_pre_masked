
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channels; } ;
struct vc4_hdmi {TYPE_1__ audio; struct drm_encoder* encoder; } ;
struct vc4_dev {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 struct vc4_hdmi* FUNC_4 (struct snd_soc_dai*) ;
 struct vc4_dev* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_8, int VAR_9,
      struct snd_soc_dai *VAR_10)
{
 struct vc4_hdmi *VAR_11 = FUNC_4(VAR_10);
 struct drm_encoder *VAR_12 = VAR_11->encoder;
 struct drm_device *VAR_13 = VAR_12->dev;
 struct vc4_dev *VAR_14 = FUNC_5(VAR_13);

 switch (VAR_9) {
 case 129:
  FUNC_6(VAR_12);
  FUNC_1(VAR_0,
      FUNC_0(VAR_0) &
      ~VAR_1);
  FUNC_2(VAR_2,
    FUNC_3(VAR_11->audio.channels,
           VAR_3) |
    VAR_5);
  break;
 case 128:
  FUNC_2(VAR_2,
    VAR_4 |
    VAR_6 |
    VAR_7);
  FUNC_1(VAR_0,
      FUNC_0(VAR_0) |
      VAR_1);
  break;
 default:
  break;
 }

 return 0;
}
