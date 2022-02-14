
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct snd_pcm_substream* substream; } ;
struct vc4_hdmi {TYPE_1__* connector; TYPE_2__ audio; struct drm_encoder* encoder; } ;
struct vc4_dev {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct drm_encoder {int crtc; int dev; } ;
struct TYPE_3__ {int eld; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct vc4_hdmi* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int ,int ) ;
 struct vc4_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
      struct snd_soc_dai *VAR_5)
{
 struct vc4_hdmi *VAR_6 = FUNC_1(VAR_5);
 struct drm_encoder *VAR_7 = VAR_6->encoder;
 struct vc4_dev *VAR_8 = FUNC_3(VAR_7->dev);
 int VAR_9;

 if (VAR_6->audio.substream && VAR_6->audio.substream != VAR_4)
  return -VAR_0;

 VAR_6->audio.substream = VAR_4;





 if (!VAR_7->crtc || !(FUNC_0(VAR_2) &
    VAR_3))
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_4->runtime,
     VAR_6->connector->eld);
 if (VAR_9)
  return VAR_9;

 return 0;
}
