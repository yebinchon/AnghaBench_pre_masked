
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int*,int**,int) ;
 int FUNC_3 (int*,int*) ;
 float FUNC_4 (int*) ;
 int FUNC_5 (int*,int*,int*) ;

int FUNC_6(vec3_t VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6[10], VAR_7, VAR_8, VAR_9;
 float VAR_10, VAR_11;
 vec3_t VAR_12[10], VAR_13, VAR_14;

 VAR_1 = 0;
 VAR_8 = FUNC_1(VAR_0);
 if (VAR_8)
 {
  VAR_1 = VAR_8;
  if (FUNC_0(VAR_8)) return VAR_8;
 }
 FUNC_3(VAR_0, VAR_14);
 VAR_14[2] += 4;
 VAR_7 = FUNC_2(VAR_0, VAR_14, VAR_6, VAR_12, 10);
 for (VAR_2 = 0; VAR_2 < VAR_7; VAR_2++)
 {
  if (FUNC_0(VAR_6[VAR_2])) return VAR_6[VAR_2];
 }
 VAR_11 = 999999;
 VAR_9 = 0;
 for (VAR_5 = 1; VAR_5 >= -1; VAR_5 -= 1)
 {
  for (VAR_3 = 1; VAR_3 >= -1; VAR_3 -= 1)
  {
   for (VAR_4 = 1; VAR_4 >= -1; VAR_4 -= 1)
   {
    FUNC_3(VAR_0, VAR_14);
    VAR_14[0] += VAR_3 * 8;
    VAR_14[1] += VAR_4 * 8;
    VAR_14[2] += VAR_5 * 12;
    VAR_7 = FUNC_2(VAR_0, VAR_14, VAR_6, VAR_12, 10);
    for (VAR_2 = 0; VAR_2 < VAR_7; VAR_2++)
    {
     if (FUNC_0(VAR_6[VAR_2]))
     {
      FUNC_5(VAR_12[VAR_2], VAR_0, VAR_13);
      VAR_10 = FUNC_4(VAR_13);
      if (VAR_10 < VAR_11)
      {
       VAR_9 = VAR_6[VAR_2];
       VAR_11 = VAR_10;
      }
     }
     if (!VAR_1) VAR_1 = VAR_6[VAR_2];
    }
   }
  }
  if (VAR_9) return VAR_9;
 }
 return VAR_1;
}
