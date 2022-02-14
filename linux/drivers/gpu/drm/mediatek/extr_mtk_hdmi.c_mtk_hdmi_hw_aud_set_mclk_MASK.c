
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_hdmi {int dummy; } ;
typedef enum hdmi_aud_mclk { ____Placeholder_hdmi_aud_mclk } hdmi_aud_mclk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 (struct mtk_hdmi*,int ) ;
 int FUNC_1 (struct mtk_hdmi*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_hdmi *VAR_7,
         enum hdmi_aud_mclk VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_6);
 VAR_9 &= VAR_0;

 switch (VAR_8) {
 case 132:
  VAR_9 |= VAR_1;
  break;
 case 131:
  VAR_9 |= VAR_2;
  break;
 case 130:
  VAR_9 |= VAR_3;
  break;
 case 129:
  VAR_9 |= VAR_4;
  break;
 case 128:
  VAR_9 |= VAR_5;
  break;
 default:
  VAR_9 |= VAR_2;
  break;
 }
 FUNC_1(VAR_7, VAR_6, VAR_9);
}
