
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_hdmi {int dummy; } ;
typedef enum hdmi_aud_i2s_fmt { ____Placeholder_hdmi_aud_i2s_fmt } hdmi_aud_i2s_fmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (struct mtk_hdmi*,int ) ;
 int FUNC_1 (struct mtk_hdmi*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mtk_hdmi *VAR_8,
     enum hdmi_aud_i2s_fmt VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_7);
 VAR_10 &= ~(VAR_6 | VAR_2);

 switch (VAR_9) {
 case 128:
  VAR_10 |= VAR_3 | VAR_5;
  break;
 case 129:
  VAR_10 |= VAR_3 | VAR_4;
  break;
 case 130:
 default:
  VAR_10 |= VAR_1 | VAR_5;
  break;
 case 131:
  VAR_10 |= VAR_1 | VAR_4;
  break;
 case 132:
  VAR_10 |= VAR_0 | VAR_5;
  break;
 case 133:
  VAR_10 |= VAR_0 | VAR_4;
  break;
 }
 FUNC_1(VAR_8, VAR_7, VAR_10);
}
