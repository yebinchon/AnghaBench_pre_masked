
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipuv3_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipuv3_channel*,int ,int) ;

int FUNC_1(struct ipuv3_channel *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;

 switch (VAR_5) {
 case 32:
  VAR_6 = 0;
  VAR_7 = 15;
  break;
 case 24:
  VAR_6 = 1;
  VAR_7 = 19;
  break;
 case 16:
  VAR_6 = 3;
  VAR_7 = 31;
  break;
 case 8:
  VAR_6 = 5;
  VAR_7 = 63;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_4, VAR_1, VAR_6);
 FUNC_0(VAR_4, VAR_2, VAR_7);
 FUNC_0(VAR_4, VAR_3, 6);

 return 0;
}
