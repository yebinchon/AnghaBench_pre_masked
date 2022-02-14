
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_12__ {size_t planenum; TYPE_1__* winding; int num; } ;
typedef TYPE_2__ tmp_face_t ;
struct TYPE_13__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int ,int*) ;
 TYPE_3__* VAR_0 ;

int FUNC_4(tmp_face_t *VAR_1, tmp_face_t *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 0;
 winding_t *VAR_6, *VAR_7;
 plane_t *VAR_8;





 VAR_6 = VAR_2->winding;
 VAR_8 = &VAR_0[VAR_1->planenum];
 for (VAR_3 = 0; VAR_3 < VAR_6->numpoints; VAR_3++)
 {
  if (FUNC_3(VAR_1->winding, VAR_8->normal, VAR_8->dist, VAR_6->p[VAR_3], &VAR_4))
  {
   VAR_7 = FUNC_0(VAR_1->winding, VAR_6->p[VAR_3], VAR_4);
   FUNC_2(VAR_1->winding);
   VAR_1->winding = VAR_7;

   VAR_5++;
  }
 }
 return VAR_5;
}
