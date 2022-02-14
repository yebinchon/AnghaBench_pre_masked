
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ aud_input_type; scalar_t__ aud_codec; scalar_t__ aud_i2s_fmt; int aud_input_chan_type; } ;
struct mtk_hdmi {TYPE_1__ aud_param; } ;
typedef enum hdmi_aud_channel_type { ____Placeholder_hdmi_aud_channel_type } hdmi_aud_channel_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mtk_hdmi*,int ) ;
 int FUNC_2 (struct mtk_hdmi*,int ) ;
 int FUNC_3 (struct mtk_hdmi*,int,int ) ;
 int FUNC_4 (struct mtk_hdmi*,scalar_t__) ;
 int FUNC_5 (struct mtk_hdmi*,scalar_t__) ;
 int FUNC_6 (struct mtk_hdmi*,int) ;
 int FUNC_7 (struct mtk_hdmi*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct mtk_hdmi *VAR_9)
{
 enum hdmi_aud_channel_type VAR_10;
 u8 VAR_11;
 bool VAR_12;

 FUNC_2(VAR_9, VAR_5);
 FUNC_7(VAR_9, VAR_0, VAR_8);

 if (VAR_9->aud_param.aud_input_type == VAR_4 &&
     VAR_9->aud_param.aud_codec == VAR_1) {
  FUNC_1(VAR_9, VAR_2);
 } else if (VAR_9->aud_param.aud_i2s_fmt == VAR_7) {
  VAR_9->aud_param.aud_i2s_fmt = VAR_6;
 }

 FUNC_4(VAR_9, VAR_9->aud_param.aud_i2s_fmt);
 FUNC_1(VAR_9, VAR_2);

 VAR_12 = ((VAR_9->aud_param.aud_input_type == VAR_4) &&
        (VAR_9->aud_param.aud_codec == VAR_1));
 FUNC_6(VAR_9, VAR_12);

 if (VAR_9->aud_param.aud_input_type == VAR_4)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_9->aud_param.aud_input_chan_type;
 VAR_11 = FUNC_0(VAR_10);
 FUNC_3(VAR_9, VAR_10, VAR_11);
 FUNC_5(VAR_9, VAR_9->aud_param.aud_input_type);

 return 0;
}
