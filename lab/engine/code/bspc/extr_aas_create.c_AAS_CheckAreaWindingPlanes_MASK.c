
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* frontarea; struct TYPE_5__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_6__ {TYPE_1__* tmpfaces; scalar_t__ invalid; struct TYPE_6__* l_next; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_7__ {TYPE_2__* areas; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_0 ;

void FUNC_2(void)
{
 int VAR_1;
 tmp_area_t *VAR_2;
 tmp_face_t *VAR_3;

 FUNC_1("AAS_CheckAreaWindingPlanes:\r\n");
 for (VAR_2 = VAR_0.areas; VAR_2; VAR_2 = VAR_2->l_next)
 {
  if (VAR_2->invalid) continue;
  for (VAR_3 = VAR_2->tmpfaces; VAR_3; VAR_3 = VAR_3->next[VAR_1])
  {
   VAR_1 = VAR_3->frontarea != VAR_2;
   FUNC_0(VAR_3);
  }
 }
}
