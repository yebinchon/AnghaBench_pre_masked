
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int enc_in_bus_format; } ;
struct dw_hdmi {TYPE_1__ hdmi_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct dw_hdmi*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_hdmi *VAR_14)
{
 int VAR_15 = 0;
 u8 VAR_16;

 switch (VAR_14->hdmi_data.enc_in_bus_format) {
 case 139:
  VAR_15 = 0x01;
  break;
 case 142:
  VAR_15 = 0x03;
  break;
 case 141:
  VAR_15 = 0x05;
  break;
 case 140:
  VAR_15 = 0x07;
  break;

 case 128:
 case 132:
  VAR_15 = 0x09;
  break;
 case 131:
 case 135:
  VAR_15 = 0x0B;
  break;
 case 130:
 case 134:
  VAR_15 = 0x0D;
  break;
 case 129:
 case 133:
  VAR_15 = 0x0F;
  break;

 case 136:
  VAR_15 = 0x16;
  break;
 case 138:
  VAR_15 = 0x14;
  break;
 case 137:
  VAR_15 = 0x12;
  break;

 default:
  return;
 }

 VAR_16 = VAR_9 |
  ((VAR_15 << VAR_11) &
  VAR_10);
 FUNC_0(VAR_14, VAR_16, VAR_8);


 VAR_16 = VAR_5 |
  VAR_7 |
  VAR_6;
 FUNC_0(VAR_14, VAR_16, VAR_4);
 FUNC_0(VAR_14, 0x0, VAR_2);
 FUNC_0(VAR_14, 0x0, VAR_3);
 FUNC_0(VAR_14, 0x0, VAR_12);
 FUNC_0(VAR_14, 0x0, VAR_13);
 FUNC_0(VAR_14, 0x0, VAR_0);
 FUNC_0(VAR_14, 0x0, VAR_1);
}
