
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
typedef int off_t ;
typedef int buf ;


 int FUNC_0 (int,int*,int) ;

int
FUNC_1(int VAR_0, uint32_t *VAR_1, off_t *VAR_2)
{
 int VAR_3;
 u_int VAR_4;
 off_t VAR_5;
 u_char *VAR_6;
 u_char VAR_7[8192];





 VAR_4 = VAR_5 = 0;
 while ((VAR_3 = FUNC_0(VAR_0, VAR_7, sizeof(VAR_7))) > 0)
  for (VAR_5 += VAR_3, VAR_6 = VAR_7; VAR_3--; ++VAR_6) {
   if (VAR_4 & 1)
    VAR_4 |= 0x10000;
   VAR_4 = ((VAR_4 >> 1) + *VAR_6) & 0xffff;
  }
 if (VAR_3 < 0)
  return (1);

 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;
 return (0);
}
