
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_0(uint8_t *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 if(VAR_4 < 0)
 {
  for(VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  {
   if(VAR_2[VAR_5])
    return VAR_1;
  }

  return VAR_0;
 }

 VAR_5 = VAR_4 >> 3;

 if(VAR_5 < VAR_3)
  return (VAR_2[VAR_5] & (1 << (VAR_4 & 0x07)));

 return VAR_0;
}
