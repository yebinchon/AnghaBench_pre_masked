
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
typedef int p ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int *,int) ;

void FUNC_5(winding_t *VAR_1, float VAR_2)
{
 int VAR_3, VAR_4;
 vec3_t VAR_5;
 vec3_t VAR_6[VAR_0];

 FUNC_1(VAR_1->p[0], VAR_6[0]);
 VAR_4 = 1;
 for (VAR_3 = 1; VAR_3 < VAR_1->numpoints; VAR_3++)
 {
  FUNC_3(VAR_1->p[VAR_3], VAR_6[VAR_4-1], VAR_5);
  if (FUNC_2(VAR_5) > VAR_2)
  {
   if (VAR_4 >= VAR_0)
    FUNC_0("RemoveColinearPoints: MAX_POINTS_ON_WINDING");
   FUNC_1 (VAR_1->p[VAR_3], VAR_6[VAR_4]);
   VAR_4++;
  }
 }

 if (VAR_4 == VAR_1->numpoints)
  return;

 VAR_1->numpoints = VAR_4;
 FUNC_4(VAR_1->p, VAR_6, VAR_4 * sizeof(VAR_6[0]));
}
