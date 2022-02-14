
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;


 int VAR_0 ;
 int* VAR_1 ;

u_short
FUNC_0(u_char *VAR_2, size_t VAR_3)
{
  u_short VAR_4 = VAR_0;

  while (VAR_3--)
    VAR_4 = (VAR_4 >> 8) ^ VAR_1[(VAR_4 ^ *VAR_2++) & 0xff];

  return VAR_4;
}
