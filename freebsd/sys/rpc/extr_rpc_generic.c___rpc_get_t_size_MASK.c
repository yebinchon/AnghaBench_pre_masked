
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u_int

FUNC_0(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_6 = 64 * 1024;
  break;
 case 128:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }
 if (VAR_5 == 0)
  return VAR_6;


 return (VAR_5 > VAR_2 ? (u_int)VAR_2 : (u_int)VAR_5);
}
