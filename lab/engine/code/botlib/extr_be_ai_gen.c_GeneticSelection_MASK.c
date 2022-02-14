
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

int FUNC_1(int VAR_0, float *VAR_1)
{
 float VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_1[VAR_3] < 0) continue;
  VAR_2 += VAR_1[VAR_3];
 }
 if (VAR_2 > 0)
 {



  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  {
   if (VAR_1[VAR_3] < 0) continue;
   VAR_2 -= VAR_1[VAR_3];
   if (VAR_2 <= 0) return VAR_3;
  }
 }

 VAR_4 = FUNC_0() * VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_1[VAR_4] >= 0) return VAR_4;
  VAR_4 = (VAR_4 + 1) % VAR_0;
 }
 return 0;
}
