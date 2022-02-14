
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec_t ;
typedef int * vec3_t ;
struct TYPE_7__ {int normal; } ;
typedef TYPE_1__ dplane_t ;
struct TYPE_8__ {int numedges; int firstedge; size_t planenum; } ;
typedef TYPE_2__ dface_t ;
struct TYPE_10__ {size_t* v; } ;
struct TYPE_9__ {int * point; } ;


 int FUNC_0 (int ,int *,int *) ;
 float FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 float VAR_0 ;
 size_t FUNC_4 (int) ;
 TYPE_5__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 TYPE_3__* VAR_4 ;

int FUNC_5(dface_t *VAR_5, vec3_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 float VAR_10;
 vec_t *VAR_11, *VAR_12;
 vec3_t VAR_13, VAR_14;
 dplane_t *VAR_15;

 for (VAR_7 = 0; VAR_7 < VAR_5->numedges; VAR_7++)
 {

  VAR_8 = VAR_3[VAR_5->firstedge + VAR_7];
  VAR_9 = VAR_8 < 0;
  VAR_11 = VAR_4[VAR_1[FUNC_4(VAR_8)].v[VAR_9]].point;
  VAR_12 = VAR_4[VAR_1[FUNC_4(VAR_8)].v[!VAR_9]].point;


  FUNC_3(VAR_11, VAR_12, VAR_14);
  VAR_15 = &VAR_2[VAR_5->planenum];
  FUNC_0(VAR_15->normal, VAR_14, VAR_13);
  FUNC_2(VAR_13);
  VAR_10 = FUNC_1(VAR_13, VAR_11);

  if (FUNC_1(VAR_13, VAR_6) - VAR_10 > VAR_0) return 0;
 }
 return 1;
}
