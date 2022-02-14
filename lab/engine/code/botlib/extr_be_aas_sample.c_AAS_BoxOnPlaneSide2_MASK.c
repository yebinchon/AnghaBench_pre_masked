
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_3__ {scalar_t__* normal; float dist; } ;
typedef TYPE_1__ aas_plane_t ;


 float FUNC_0 (scalar_t__*,int *) ;

int FUNC_1(vec3_t VAR_0, vec3_t VAR_1, aas_plane_t *VAR_2)
{
 int VAR_3, VAR_4;
 float VAR_5, VAR_6;
 vec3_t VAR_7[2];

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
 {
  if (VAR_2->normal[VAR_3] < 0)
  {
   VAR_7[0][VAR_3] = VAR_0[VAR_3];
   VAR_7[1][VAR_3] = VAR_1[VAR_3];
  }
  else
  {
   VAR_7[1][VAR_3] = VAR_0[VAR_3];
   VAR_7[0][VAR_3] = VAR_1[VAR_3];
  }
 }
 VAR_5 = FUNC_0(VAR_2->normal, VAR_7[0]) - VAR_2->dist;
 VAR_6 = FUNC_0(VAR_2->normal, VAR_7[1]) - VAR_2->dist;
 VAR_4 = 0;
 if (VAR_5 >= 0) VAR_4 = 1;
 if (VAR_6 < 0) VAR_4 |= 2;

 return VAR_4;
}
