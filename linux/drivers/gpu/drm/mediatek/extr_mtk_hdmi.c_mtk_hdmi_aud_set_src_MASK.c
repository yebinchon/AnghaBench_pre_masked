
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int sample_rate; } ;
struct TYPE_4__ {scalar_t__ aud_input_type; int aud_mclk; TYPE_1__ codec_params; } ;
struct mtk_hdmi {TYPE_2__ aud_param; } ;
struct drm_display_mode {int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtk_hdmi*,int) ;
 int FUNC_1 (struct mtk_hdmi*,int ,int ) ;
 int FUNC_2 (struct mtk_hdmi*,int ) ;
 int FUNC_3 (struct mtk_hdmi*,unsigned int,int ) ;
 int FUNC_4 (struct mtk_hdmi*) ;
 int FUNC_5 (struct mtk_hdmi*) ;

__attribute__((used)) static int FUNC_6(struct mtk_hdmi *VAR_5,
    struct drm_display_mode *VAR_6)
{
 unsigned int VAR_7 = VAR_5->aud_param.codec_params.sample_rate;

 FUNC_0(VAR_5, 0);
 FUNC_4(VAR_5);
 FUNC_1(VAR_5, VAR_2, VAR_0);

 if (VAR_5->aud_param.aud_input_type == VAR_3) {
  switch (VAR_7) {
  case 32000:
  case 44100:
  case 48000:
  case 88200:
  case 96000:
   break;
  default:
   return -VAR_1;
  }
  FUNC_2(VAR_5, VAR_5->aud_param.aud_mclk);
 } else {
  switch (VAR_7) {
  case 32000:
  case 44100:
  case 48000:
   break;
  default:
   return -VAR_1;
  }
  FUNC_2(VAR_5, VAR_4);
 }

 FUNC_3(VAR_5, VAR_7, VAR_6->clock);

 FUNC_5(VAR_5);
 return 0;
}
