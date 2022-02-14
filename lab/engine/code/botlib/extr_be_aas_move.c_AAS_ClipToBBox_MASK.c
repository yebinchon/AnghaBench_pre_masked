
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {float* endpos; int fraction; int startsolid; scalar_t__ lastarea; scalar_t__ area; scalar_t__ planenum; scalar_t__ ent; } ;
typedef TYPE_1__ aas_trace_t ;


 int FUNC_0 (int,float*,float*) ;
 int FUNC_1 (float*,float*) ;
 int FUNC_2 (float*,float*,float*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(aas_trace_t *VAR_2, vec3_t VAR_3, vec3_t VAR_4, int VAR_5, vec3_t VAR_6, vec3_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 float VAR_11, VAR_12, VAR_13, VAR_14;
 vec3_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_0(VAR_5, VAR_15, VAR_16);
 FUNC_2(VAR_6, VAR_16, VAR_17);
 FUNC_2(VAR_7, VAR_15, VAR_18);

 FUNC_1(VAR_4, VAR_2->endpos);
 VAR_2->fraction = 1;
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
 {
  if (VAR_3[VAR_8] < VAR_17[VAR_8] && VAR_4[VAR_8] < VAR_17[VAR_8]) return VAR_0;
  if (VAR_3[VAR_8] > VAR_18[VAR_8] && VAR_4[VAR_8] > VAR_18[VAR_8]) return VAR_0;
 }

 FUNC_2(VAR_4, VAR_3, VAR_19);
 VAR_13 = 1;
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
 {

  if (VAR_19[VAR_8] > 0) VAR_14 = VAR_17[VAR_8];
  else VAR_14 = VAR_18[VAR_8];

  VAR_11 = VAR_3[VAR_8] - VAR_14;
  VAR_12 = VAR_4[VAR_8] - VAR_14;
  VAR_13 = VAR_11 / (VAR_11-VAR_12);

  VAR_10 = VAR_8 + 1;
  if (VAR_10 > 2) VAR_10 = 0;
  VAR_20[VAR_10] = VAR_3[VAR_10] + VAR_19[VAR_10] * VAR_13;
  if (VAR_20[VAR_10] > VAR_17[VAR_10] && VAR_20[VAR_10] < VAR_18[VAR_10])
  {

   VAR_10++;
   if (VAR_10 > 2) VAR_10 = 0;
   VAR_20[VAR_10] = VAR_3[VAR_10] + VAR_19[VAR_10] * VAR_13;
   if (VAR_20[VAR_10] > VAR_17[VAR_10] && VAR_20[VAR_10] < VAR_18[VAR_10])
   {
    VAR_20[VAR_8] = VAR_14;
    break;
   }
  }
 }

 if (VAR_8 != 3)
 {
  VAR_2->startsolid = VAR_0;
  VAR_2->fraction = VAR_13;
  VAR_2->ent = 0;
  VAR_2->planenum = 0;
  VAR_2->area = 0;
  VAR_2->lastarea = 0;

  for (VAR_9 = 0; VAR_9 < 3; VAR_9++) VAR_2->endpos[VAR_9] = VAR_3[VAR_9] + VAR_19[VAR_9] * VAR_13;
  return VAR_1;
 }
 return VAR_0;
}
