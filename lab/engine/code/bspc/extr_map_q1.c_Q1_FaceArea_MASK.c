
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_6__ {size_t firstedge; int numedges; } ;
typedef TYPE_1__ q1_dface_t ;
struct TYPE_7__ {size_t* v; } ;
typedef TYPE_2__ q1_dedge_t ;
struct TYPE_8__ {int * point; } ;


 int FUNC_0 (int ,int ,int ) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_3__* VAR_1 ;

float FUNC_3(q1_dface_t *VAR_2)
{
 int VAR_3;
 float VAR_4;
 vec_t *VAR_5;
 vec3_t VAR_6, VAR_7, VAR_8;
 q1_dedge_t *VAR_9;

 VAR_9 = &VAR_0[VAR_2->firstedge];
 VAR_5 = VAR_1[VAR_9->v[0]].point;

 VAR_4 = 0;
 for (VAR_3 = 1; VAR_3 < VAR_2->numedges - 1; VAR_3++)
 {
  VAR_9 = &VAR_0[VAR_2->firstedge + VAR_3];
  FUNC_2(VAR_1[VAR_9->v[0]].point, VAR_5, VAR_6);
  FUNC_2(VAR_1[VAR_9->v[1]].point, VAR_5, VAR_7);
  FUNC_0(VAR_6, VAR_7, VAR_8);
  VAR_4 += 0.5 * FUNC_1(VAR_8);
 }
 return VAR_4;
}
