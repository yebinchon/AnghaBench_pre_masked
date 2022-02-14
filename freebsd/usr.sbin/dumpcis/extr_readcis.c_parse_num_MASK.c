
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u_int
FUNC_3(int VAR_0, u_char *VAR_1, u_char **VAR_2, int VAR_3)
{
 u_int VAR_4 = 0;

 switch (VAR_0) {
 case 0:
 case 0x10:
  break;
 case 1:
 case 0x11:
  VAR_4 = (*VAR_1++) + VAR_3;
  break;
 case 2:
 case 0x12:
  VAR_4 = FUNC_0(VAR_1) + VAR_3;
  VAR_1 += 2;
  break;
 case 0x13:
  VAR_4 = FUNC_1(VAR_1) + VAR_3;
  VAR_1 += 3;
  break;
 case 3:
 case 0x14:
  VAR_4 = FUNC_2(VAR_1) + VAR_3;
  VAR_1 += 4;
  break;
 }
 if (VAR_2)
  *VAR_2 = VAR_1;
 return VAR_4;
}
