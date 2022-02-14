
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_char ;
typedef int off_t ;
typedef int buf ;


 int FUNC_0 (int,scalar_t__*,int) ;

int
FUNC_1(int VAR_0, uint32_t *VAR_1, off_t *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;
 off_t VAR_5;
 u_char *VAR_6;
 u_char VAR_7[8192];
 VAR_3 = VAR_5 = 0;
 while ((VAR_4 = FUNC_0(VAR_0, VAR_7, sizeof(VAR_7))) > 0)
  for (VAR_5 += VAR_4, VAR_6 = VAR_7; VAR_4--; ++VAR_6)
   VAR_3 += *VAR_6;
 if (VAR_4 < 0)
  return (1);

 VAR_3 = (VAR_3 & 0xffff) + (VAR_3 >> 16);
 VAR_3 = (VAR_3 & 0xffff) + (VAR_3 >> 16);

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_5;
 return (0);
}
