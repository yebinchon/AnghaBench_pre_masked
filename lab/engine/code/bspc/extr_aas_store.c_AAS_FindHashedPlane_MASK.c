
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;
typedef int qboolean ;


 scalar_t__ FUNC_0 (int ,float,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_1 (float) ;

qboolean FUNC_2(vec3_t VAR_3, float VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = (int)FUNC_1(VAR_4) / 8;
 VAR_8 &= (VAR_0-1);


 for (VAR_6 = -1; VAR_6 <= 1; VAR_6++)
 {
  VAR_9 = (VAR_8+VAR_6)&(VAR_0-1);
  for (VAR_7 = VAR_1[VAR_9]; VAR_7 >= 0; VAR_7 = VAR_2[VAR_7])
  {
   if (FUNC_0(VAR_3, VAR_4, VAR_7))
   {
    *VAR_5 = VAR_7;
    return 1;
   }
  }
 }
 return 0;
}
