
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int dummy; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct ib_device *VAR_6, u8 VAR_7,
    u8 *VAR_8)
{
 switch (VAR_7) {
 case 132:
  *VAR_8 = VAR_1;
  break;
 case 131:
  *VAR_8 = VAR_2;
  break;
 case 129:
  *VAR_8 = VAR_4;
  break;
 case 128:
  *VAR_8 = VAR_5;
  break;
 case 130:
  *VAR_8 = VAR_3;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
