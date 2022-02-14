
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u32 *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1) {
 case 1:
  *VAR_2 = 0;
  break;
 case 2:
  *VAR_2 = 1;
  break;
 case 4:
  *VAR_2 = 2;
  break;
 case 8:
  *VAR_2 = 3;
  break;
 case 16:
  *VAR_2 = 4;
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
