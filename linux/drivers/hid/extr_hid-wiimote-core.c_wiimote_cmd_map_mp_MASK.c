
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wmem ;
struct wiimote_data {int dummy; } ;
typedef int __u8 ;






 int FUNC_0 (struct wiimote_data*,int,int*,int) ;

__attribute__((used)) static bool FUNC_1(struct wiimote_data *VAR_0, __u8 VAR_1)
{
 __u8 VAR_2;


 switch (VAR_1) {
 case 131:
 case 130:
 case 129:
  VAR_2 = 0x07;
  break;
 case 128:
  VAR_2 = 0x05;
  break;
 default:
  VAR_2 = 0x04;
  break;
 }

 return FUNC_0(VAR_0, 0xa600fe, &VAR_2, sizeof(VAR_2));
}
