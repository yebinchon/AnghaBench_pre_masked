
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dw_hdmi_i2s_audio_data {int (* write ) (struct dw_hdmi*,int ,int) ;struct dw_hdmi* hdmi; } ;
struct dw_hdmi {int dummy; } ;


 int FUNC_0 (struct dw_hdmi*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct dw_hdmi_i2s_audio_data *VAR_0,
         u8 VAR_1, int VAR_2)
{
 struct dw_hdmi *VAR_3 = VAR_0->hdmi;

 VAR_0->write(VAR_3, VAR_1, VAR_2);
}
