
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dw_hdmi_i2s_audio_data {int (* read ) (struct dw_hdmi*,int) ;struct dw_hdmi* hdmi; } ;
struct dw_hdmi {int dummy; } ;


 int FUNC_0 (struct dw_hdmi*,int) ;

__attribute__((used)) static inline u8 FUNC_1(struct dw_hdmi_i2s_audio_data *VAR_0, int VAR_1)
{
 struct dw_hdmi *VAR_2 = VAR_0->hdmi;

 return VAR_0->read(VAR_2, VAR_1);
}
