
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_8__ {int planenum; int num; int winding; TYPE_1__* backarea; TYPE_3__* frontarea; struct TYPE_8__** next; } ;
typedef TYPE_2__ tmp_face_t ;
struct TYPE_9__ {int areanum; TYPE_2__* tmpfaces; } ;
typedef TYPE_3__ tmp_area_t ;
struct TYPE_10__ {scalar_t__* normal; scalar_t__ dist; } ;
typedef TYPE_4__ plane_t ;
struct TYPE_7__ {int areanum; } ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,float,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__*,float*) ;
 double FUNC_8 (scalar_t__) ;
 TYPE_4__* VAR_0 ;

void FUNC_9(tmp_area_t *VAR_1)
{
 int VAR_2;
 tmp_face_t *VAR_3;
 plane_t *VAR_4;
 vec3_t VAR_5, VAR_6 = {0, 0, 0};

 float VAR_7;

 for (VAR_7 = 0, VAR_3 = VAR_1->tmpfaces; VAR_3; VAR_3 = VAR_3->next[VAR_2])
 {
  if (!VAR_3->frontarea) FUNC_1("face %d has no front area\n", VAR_3->num);

  VAR_2 = VAR_3->frontarea != VAR_1;
  FUNC_6(VAR_3->winding, VAR_5);
  FUNC_4(VAR_6, VAR_5, VAR_6);
  VAR_7++;
 }
 VAR_7 = 1 / VAR_7;
 FUNC_5(VAR_6, VAR_7, VAR_6);
 for (VAR_3 = VAR_1->tmpfaces; VAR_3; VAR_3 = VAR_3->next[VAR_2])
 {

  VAR_2 = VAR_3->frontarea != VAR_1;

  VAR_4 = &VAR_0[VAR_3->planenum ^ VAR_2];

  if (FUNC_0(VAR_4->normal, VAR_6) - VAR_4->dist < 0)
  {
   FUNC_2("area %d face %d flipped: front area %d, back area %d\n", VAR_1->areanum, VAR_3->num,
     VAR_3->frontarea ? VAR_3->frontarea->areanum : 0,
     VAR_3->backarea ? VAR_3->backarea->areanum : 0);






  }
 }
}
