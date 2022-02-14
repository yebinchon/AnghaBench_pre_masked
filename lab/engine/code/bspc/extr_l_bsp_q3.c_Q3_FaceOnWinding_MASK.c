
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_6__ {int numVerts; int firstVert; } ;
typedef TYPE_1__ q3_dsurface_t ;
struct TYPE_7__ {int normal; int dist; } ;
typedef TYPE_2__ q3_dplane_t ;
struct TYPE_8__ {int * xyz; } ;


 int FUNC_0 (int **,int ,float,double) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 float FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ) ;
 float FUNC_8 (int *) ;
 TYPE_3__* VAR_0 ;

float FUNC_9(q3_dsurface_t *VAR_1, winding_t *VAR_2)
{
 int VAR_3;
 float VAR_4, VAR_5;
 q3_dplane_t VAR_6;
 vec_t *VAR_7, *VAR_8;
 vec3_t VAR_9, VAR_10;
 winding_t *VAR_11;


 VAR_11 = FUNC_1(VAR_2);

 FUNC_5(VAR_1, VAR_6.normal, &VAR_6.dist);

 for (VAR_3 = 0; VAR_3 < VAR_1->numVerts && VAR_11; VAR_3++)
 {
  VAR_7 = VAR_0[VAR_1->firstVert + ((VAR_3) % VAR_1->numVerts)].xyz;
  VAR_8 = VAR_0[VAR_1->firstVert + ((VAR_3+1) % VAR_1->numVerts)].xyz;


  FUNC_7(VAR_8, VAR_7, VAR_10);
  FUNC_2(VAR_10, VAR_6.normal, VAR_9);
  FUNC_6(VAR_9);
  VAR_4 = FUNC_3(VAR_9, VAR_7);

  FUNC_0(&VAR_11, VAR_9, VAR_4, -0.1);
 }
 if (VAR_11)
 {
  VAR_5 = FUNC_8(VAR_11);
  FUNC_4(VAR_11);
  return VAR_5;
 }
 return 0;
}
