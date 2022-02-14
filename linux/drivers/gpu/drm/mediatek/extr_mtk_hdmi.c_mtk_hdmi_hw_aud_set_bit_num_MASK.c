
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_hdmi {int dummy; } ;
typedef enum hdmi_audio_sample_size { ____Placeholder_hdmi_audio_sample_size } hdmi_audio_sample_size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct mtk_hdmi*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_hdmi *VAR_5,
     enum hdmi_audio_sample_size VAR_6)
{
 u32 VAR_7;

 switch (VAR_6) {
 case 131:
  VAR_7 = VAR_0;
  break;
 case 130:
  VAR_7 = VAR_1;
  break;
 case 129:
 case 128:
  VAR_7 = VAR_2;
  break;
 }

 FUNC_0(VAR_5, VAR_4, VAR_7, VAR_3);
}
