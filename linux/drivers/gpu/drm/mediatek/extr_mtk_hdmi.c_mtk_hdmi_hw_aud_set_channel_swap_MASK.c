
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_hdmi {int dummy; } ;
typedef enum hdmi_aud_channel_swap_type { ____Placeholder_hdmi_aud_channel_swap_type } hdmi_aud_channel_swap_type ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtk_hdmi*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mtk_hdmi *VAR_6,
     enum hdmi_aud_channel_swap_type VAR_7)
{
 u8 VAR_8;

 switch (VAR_7) {
 case 131:
  VAR_8 = VAR_3;
  break;
 case 132:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_4;
  break;
 case 128:
  VAR_8 = VAR_5;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 default:
  VAR_8 = VAR_1;
  break;
 }
 FUNC_0(VAR_6, VAR_0, VAR_8, 0xff);
}
