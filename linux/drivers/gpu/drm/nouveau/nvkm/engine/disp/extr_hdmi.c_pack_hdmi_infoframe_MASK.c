
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct packed_hdmi_infoframe {int header; int subpack0_low; int subpack0_high; int subpack1_low; int subpack1_high; } ;
typedef int ssize_t ;



void FUNC_0(struct packed_hdmi_infoframe *VAR_0,
    u8 *VAR_1, ssize_t VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;

 switch (VAR_2) {




 default:





 case 17:
  VAR_7 = (VAR_1[16] << 16);

 case 16:
  VAR_7 |= (VAR_1[15] << 8);

 case 15:
  VAR_7 |= VAR_1[14];

 case 14:
  VAR_6 = (VAR_1[13] << 24);

 case 13:
  VAR_6 |= (VAR_1[12] << 16);

 case 12:
  VAR_6 |= (VAR_1[11] << 8);

 case 11:
  VAR_6 |= VAR_1[10];

 case 10:
  VAR_5 = (VAR_1[9] << 16);

 case 9:
  VAR_5 |= (VAR_1[8] << 8);

 case 8:
  VAR_5 |= VAR_1[7];

 case 7:
  VAR_4 = (VAR_1[6] << 24);

 case 6:
  VAR_4 |= (VAR_1[5] << 16);

 case 5:
  VAR_4 |= (VAR_1[4] << 8);

 case 4:
  VAR_4 |= VAR_1[3];

 case 3:
  VAR_3 = (VAR_1[2] << 16);

 case 2:
  VAR_3 |= (VAR_1[1] << 8);

 case 1:
  VAR_3 |= VAR_1[0];

 case 0:
  break;
 }

 VAR_0->header = VAR_3;
 VAR_0->subpack0_low = VAR_4;
 VAR_0->subpack0_high = VAR_5;
 VAR_0->subpack1_low = VAR_6;
 VAR_0->subpack1_high = VAR_7;
}
