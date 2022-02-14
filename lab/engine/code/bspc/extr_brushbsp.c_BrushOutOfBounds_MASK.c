
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_6__ {TYPE_1__* winding; } ;
typedef TYPE_2__ side_t ;
struct TYPE_7__ {int numsides; TYPE_2__* sides; } ;
typedef TYPE_3__ bspbrush_t ;



int FUNC_0(bspbrush_t *VAR_0, vec3_t VAR_1, vec3_t VAR_2, float VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 winding_t *VAR_7;
 side_t *VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_0->numsides; VAR_4++)
 {
  VAR_8 = &VAR_0->sides[VAR_4];
  VAR_7 = VAR_8->winding;
  for (VAR_5 = 0; VAR_5 < VAR_7->numpoints; VAR_5++)
  {
   for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
   {
    if (VAR_7->p[VAR_5][VAR_6] < (VAR_1[VAR_6] + VAR_3) || VAR_7->p[VAR_5][VAR_6] > (VAR_2[VAR_6] - VAR_3)) return 1;
   }
  }
 }
 return 0;
}
