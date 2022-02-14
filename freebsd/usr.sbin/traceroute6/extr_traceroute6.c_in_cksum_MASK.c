
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef scalar_t__ u_char ;



u_int16_t
FUNC_0(u_int16_t *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1;
 u_int16_t *VAR_3 = VAR_0;
 u_int16_t VAR_4;
 int VAR_5 = 0;







 while (VAR_2 > 1) {
  VAR_5 += *VAR_3++;
  VAR_2 -= 2;
 }


 if (VAR_2 == 1)
  VAR_5 += *(u_char *)VAR_3;




 VAR_5 = (VAR_5 >> 16) + (VAR_5 & 0xffff);
 VAR_5 += (VAR_5 >> 16);
 VAR_4 = ~VAR_5;
 return (VAR_4);
}
