
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_hdmi {int dummy; } ;
typedef enum hdmi_aud_channel_type { ____Placeholder_hdmi_aud_channel_type } hdmi_aud_channel_type ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mtk_hdmi*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mtk_hdmi *VAR_8,
     enum hdmi_aud_channel_type VAR_9,
     u8 VAR_10)
{
 unsigned int VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_0(7, 7) | FUNC_0(6, 6) |
      FUNC_0(5, 5) | FUNC_0(4, 4) |
      FUNC_0(3, 3) | FUNC_0(1, 2) |
      FUNC_0(2, 1) | FUNC_0(0, 0);

 if (VAR_10 == 2) {
  VAR_12 = FUNC_1(0);
 } else if (VAR_10 == 3 || VAR_10 == 4) {
  if (VAR_10 == 4 &&
      (VAR_9 == VAR_4 ||
      VAR_9 == VAR_5))
   VAR_12 = FUNC_1(2) | FUNC_1(0);
  else
   VAR_12 = FUNC_1(3) | FUNC_1(2);
 } else if (VAR_10 == 6 || VAR_10 == 5) {
  if (VAR_10 == 6 &&
      VAR_9 != VAR_7 &&
      VAR_9 != VAR_6) {
   VAR_12 = FUNC_1(3) | FUNC_1(2) |
     FUNC_1(1) | FUNC_1(0);
  } else {
   VAR_12 = FUNC_1(2) | FUNC_1(1) |
     FUNC_1(0);
  }
 } else if (VAR_10 == 8 || VAR_10 == 7) {
  VAR_12 = FUNC_1(3) | FUNC_1(2) |
    FUNC_1(1) | FUNC_1(0);
 } else {
  VAR_12 = FUNC_1(0);
 }

 FUNC_2(VAR_8, VAR_0, VAR_11 & 0xff);
 FUNC_2(VAR_8, VAR_1, (VAR_11 >> 8) & 0xff);
 FUNC_2(VAR_8, VAR_2, (VAR_11 >> 16) & 0xff);
 FUNC_2(VAR_8, VAR_3, VAR_12);
}
