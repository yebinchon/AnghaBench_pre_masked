
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct ipuv3_channel*,int ,int) ;

void FUNC_1(struct ipuv3_channel *VAR_4, int VAR_5,
          u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 if (VAR_5 < 0) {
  VAR_5 = -VAR_5;
  VAR_7 = 0x100000 - (VAR_5 / 8);
 } else {
  VAR_7 = VAR_5 / 8;
 }

 VAR_8 = (VAR_5 * 2) - 1;

 switch (VAR_6) {
 case 130:
 case 128:
  VAR_9 = VAR_5 / 2 - 1;
  break;
 case 132:
  VAR_9 = VAR_5 - 1;
  break;
 case 129:
  VAR_9 = VAR_5 - 1;
  break;
 case 131:
  VAR_9 = VAR_5 * 2 - 1;
  break;
 default:
  VAR_9 = 0;
  break;
 }

 FUNC_0(VAR_4, VAR_3, 1);
 FUNC_0(VAR_4, VAR_0, VAR_7);
 FUNC_0(VAR_4, VAR_2, VAR_8);
 if (VAR_9)
  FUNC_0(VAR_4, VAR_1, VAR_9);
}
