
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_8__ {int planenum; struct TYPE_8__** next; TYPE_2__* backarea; TYPE_2__* frontarea; int * winding; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_9__ {TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_10__ {int normal; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 TYPE_3__* VAR_0 ;

void FUNC_4(tmp_area_t *VAR_1, int VAR_2)
{
 tmp_face_t *VAR_3, *VAR_4, *VAR_5;
 winding_t *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_3 = VAR_1->tmpfaces; VAR_3; VAR_3 = VAR_3->next[VAR_7])
 {
  VAR_7 = VAR_3->frontarea != VAR_1;
  if (VAR_3->planenum != VAR_2) continue;

  for (VAR_4 = VAR_3->next[VAR_7]; VAR_4; VAR_4 = VAR_5)
  {
   VAR_8 = VAR_4->frontarea != VAR_1;
   VAR_5 = VAR_4->next[VAR_8];

   if ((VAR_4->planenum & ~1) != (VAR_2 & ~1)) continue;

   VAR_6 = FUNC_3(VAR_3->winding, VAR_4->winding,
        VAR_0[VAR_3->planenum].normal);
   FUNC_2(VAR_3->winding);
   VAR_3->winding = VAR_6;
   if (VAR_4->frontarea) FUNC_1(VAR_4, VAR_4->frontarea);
   if (VAR_4->backarea) FUNC_1(VAR_4, VAR_4->backarea);
   FUNC_0(VAR_4);

   VAR_5 = VAR_3->next[VAR_7];
  }
 }
}
