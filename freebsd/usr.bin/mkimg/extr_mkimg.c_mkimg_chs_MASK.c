
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int lba_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(lba_t VAR_2, u_int VAR_3, u_int *VAR_4, u_int *VAR_5, u_int *VAR_6)
{
 u_int VAR_7, VAR_8;

 *VAR_4 = *VAR_5 = *VAR_6 = ~0U;
 if (VAR_1 == 1 || VAR_0 == 1)
  return;

 VAR_8 = VAR_2 % VAR_1 + 1;
 VAR_2 /= VAR_1;
 VAR_7 = VAR_2 % VAR_0;
 VAR_2 /= VAR_0;
 if (VAR_2 > VAR_3)
  return;

 *VAR_4 = VAR_2;
 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;
}
