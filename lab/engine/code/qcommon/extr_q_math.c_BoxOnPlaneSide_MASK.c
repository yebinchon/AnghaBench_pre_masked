
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
struct cplane_s {int type; float dist; int signbits; float* normal; } ;



int FUNC_0(vec3_t VAR_0, vec3_t VAR_1, struct cplane_s *VAR_2)
{
 float VAR_3[2];
 int VAR_4, VAR_5, VAR_6;


 if (VAR_2->type < 3)
 {
  if (VAR_2->dist <= VAR_0[VAR_2->type])
   return 1;
  if (VAR_2->dist >= VAR_1[VAR_2->type])
   return 2;
  return 3;
 }


 VAR_3[0] = VAR_3[1] = 0;
 if (VAR_2->signbits < 8)
 {
  for (VAR_6=0 ; VAR_6<3 ; VAR_6++)
  {
   VAR_5 = (VAR_2->signbits >> VAR_6) & 1;
   VAR_3[ VAR_5] += VAR_2->normal[VAR_6]*VAR_1[VAR_6];
   VAR_3[!VAR_5] += VAR_2->normal[VAR_6]*VAR_0[VAR_6];
  }
 }

 VAR_4 = 0;
 if (VAR_3[0] >= VAR_2->dist)
  VAR_4 = 1;
 if (VAR_3[1] < VAR_2->dist)
  VAR_4 |= 2;

 return VAR_4;
}
