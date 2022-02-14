
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int * vec3_t ;
struct TYPE_6__ {int normal; } ;
typedef TYPE_2__ dplane_t ;


 int FUNC_0 (int ,int *,int *) ;
 float FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 float VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_4(winding_t *VAR_2, vec3_t VAR_3, int VAR_4)
{
 int VAR_5;
 float VAR_6;
 vec_t *VAR_7, *VAR_8;
 vec3_t VAR_9, VAR_10;
 dplane_t *VAR_11;

 for (VAR_5 = 1; VAR_5 <= VAR_2->numpoints; VAR_5++)
 {
  VAR_7 = VAR_2->p[VAR_5 % VAR_2->numpoints];
  VAR_8 = VAR_2->p[(VAR_5 + 1) % VAR_2->numpoints];

  FUNC_3(VAR_8, VAR_7, VAR_10);
  VAR_11 = &VAR_1[VAR_4];
  FUNC_0(VAR_11->normal, VAR_10, VAR_9);
  FUNC_2(VAR_9);
  VAR_6 = FUNC_1(VAR_9, VAR_7);

  if (FUNC_1(VAR_9, VAR_3) - VAR_6 > VAR_0) return 0;
 }
 return 1;
}
