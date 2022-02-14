
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_hdmi {int dummy; } ;
typedef enum hdmi_aud_input_type { ____Placeholder_hdmi_aud_input_type } hdmi_aud_input_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtk_hdmi*,int ) ;
 int FUNC_1 (struct mtk_hdmi*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mtk_hdmi *VAR_4,
        enum hdmi_aud_input_type VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 == VAR_2 &&
     (VAR_6 & VAR_0) == VAR_0) {
  VAR_6 &= ~VAR_0;
 } else if (VAR_5 == VAR_3 &&
  (VAR_6 & VAR_0) == 0) {
  VAR_6 |= VAR_0;
 }
 FUNC_1(VAR_4, VAR_1, VAR_6);
}
