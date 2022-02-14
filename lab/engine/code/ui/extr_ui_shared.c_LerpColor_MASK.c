
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec4_t ;



void FUNC_0(vec4_t VAR_0, vec4_t VAR_1, vec4_t VAR_2, float VAR_3)
{
 int VAR_4;


 for (VAR_4=0; VAR_4<4; VAR_4++)
 {
  VAR_2[VAR_4] = VAR_0[VAR_4] + VAR_3*(VAR_1[VAR_4]-VAR_0[VAR_4]);
  if (VAR_2[VAR_4] < 0)
   VAR_2[VAR_4] = 0;
  else if (VAR_2[VAR_4] > 1.0)
   VAR_2[VAR_4] = 1.0;
 }
}
