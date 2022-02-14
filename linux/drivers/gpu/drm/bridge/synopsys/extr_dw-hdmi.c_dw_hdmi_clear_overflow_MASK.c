
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dw_hdmi {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dw_hdmi*,int ) ;
 int FUNC_1 (struct dw_hdmi*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dw_hdmi *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 u8 VAR_6;
 switch (VAR_3->version) {
 case 0x130a:
  VAR_4 = 4;
  break;
 case 0x131a:
 case 0x132a:
 case 0x200a:
 case 0x201a:
 case 0x211a:
 case 0x212a:
  VAR_4 = 1;
  break;
 default:
  return;
 }


 FUNC_1(VAR_3, (u8)~VAR_2, VAR_1);

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(VAR_3, VAR_6, VAR_0);
}
