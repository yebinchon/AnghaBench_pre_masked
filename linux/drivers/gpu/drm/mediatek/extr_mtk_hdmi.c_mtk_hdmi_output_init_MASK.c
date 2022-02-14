
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_audio_param {int aud_input_chan_type; int aud_mclk; int aud_i2s_fmt; int aud_input_type; int aud_sampe_size; int aud_codec; } ;
struct mtk_hdmi {int csp; struct hdmi_audio_param aud_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct mtk_hdmi *VAR_7)
{
 struct hdmi_audio_param *VAR_8 = &VAR_7->aud_param;

 VAR_7->csp = VAR_5;
 VAR_8->aud_codec = VAR_0;
 VAR_8->aud_sampe_size = VAR_1;
 VAR_8->aud_input_type = VAR_3;
 VAR_8->aud_i2s_fmt = VAR_6;
 VAR_8->aud_mclk = VAR_4;
 VAR_8->aud_input_chan_type = VAR_2;

 return 0;
}
