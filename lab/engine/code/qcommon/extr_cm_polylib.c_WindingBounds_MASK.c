
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;


 scalar_t__ VAR_0 ;

void FUNC_0 (winding_t *VAR_1, vec3_t VAR_2, vec3_t VAR_3)
{
 vec_t VAR_4;
 int VAR_5,VAR_6;

 VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_0;
 VAR_3[0] = VAR_3[1] = VAR_3[2] = -VAR_0;

 for (VAR_5=0 ; VAR_5<VAR_1->numpoints ; VAR_5++)
 {
  for (VAR_6=0 ; VAR_6<3 ; VAR_6++)
  {
   VAR_4 = VAR_1->p[VAR_5][VAR_6];
   if (VAR_4 < VAR_2[VAR_6])
    VAR_2[VAR_6] = VAR_4;
   if (VAR_4 > VAR_3[VAR_6])
    VAR_3[VAR_6] = VAR_4;
  }
 }
}
