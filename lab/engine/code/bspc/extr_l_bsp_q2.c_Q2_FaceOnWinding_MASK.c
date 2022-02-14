
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_7__ {int normal; int dist; } ;
typedef TYPE_1__ q2_dplane_t ;
struct TYPE_8__ {size_t planenum; int numedges; int firstedge; scalar_t__ side; } ;
typedef TYPE_2__ q2_dface_t ;
struct TYPE_10__ {size_t* v; } ;
struct TYPE_9__ {int * point; } ;


 int FUNC_0 (int **,int ,float,double) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 float FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ) ;
 float FUNC_8 (int *) ;
 size_t FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,int *,int) ;
 TYPE_4__* VAR_0 ;
 int * VAR_1 ;
 int* VAR_2 ;
 TYPE_3__* VAR_3 ;

float FUNC_11(q2_dface_t *VAR_4, winding_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 float VAR_9, VAR_10;
 q2_dplane_t VAR_11;
 vec_t *VAR_12, *VAR_13;
 vec3_t VAR_14, VAR_15;
 winding_t *VAR_16;


 VAR_16 = FUNC_1(VAR_5);
 FUNC_10(&VAR_11, &VAR_1[VAR_4->planenum], sizeof(q2_dplane_t));

 if (VAR_4->side)
 {
  FUNC_5(VAR_11.normal, VAR_11.normal);
  VAR_11.dist = -VAR_11.dist;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->numedges && VAR_16; VAR_6++)
 {

  VAR_7 = VAR_2[VAR_4->firstedge + VAR_6];
  VAR_8 = VAR_7 > 0;

  VAR_12 = VAR_3[VAR_0[FUNC_9(VAR_7)].v[VAR_8]].point;
  VAR_13 = VAR_3[VAR_0[FUNC_9(VAR_7)].v[!VAR_8]].point;


  FUNC_7(VAR_12, VAR_13, VAR_15);
  FUNC_2(VAR_15, VAR_11.normal, VAR_14);
  FUNC_6(VAR_14);
  VAR_9 = FUNC_3(VAR_14, VAR_12);

  FUNC_0(&VAR_16, VAR_14, VAR_9, -0.1);
 }
 if (VAR_16)
 {
  VAR_10 = FUNC_8(VAR_16);
  FUNC_4(VAR_16);
  return VAR_10;
 }
 return 0;
}
