
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__** prev; struct TYPE_5__** next; TYPE_2__* frontarea; TYPE_2__* backarea; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_6__ {TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;


 int FUNC_0 (char*) ;

void FUNC_1(tmp_face_t *VAR_0, int VAR_1, tmp_area_t *VAR_2)
{
 int VAR_3;

 if (VAR_1)
 {
  if (VAR_0->backarea) FUNC_0("AAS_AddFaceSideToArea: already a back area\n");
 }
 else
 {
  if (VAR_0->frontarea) FUNC_0("AAS_AddFaceSideToArea: already a front area\n");
 }

 if (VAR_1) VAR_0->backarea = VAR_2;
 else VAR_0->frontarea = VAR_2;

 if (VAR_2->tmpfaces)
 {
  VAR_3 = VAR_2->tmpfaces->frontarea != VAR_2;
  VAR_2->tmpfaces->prev[VAR_3] = VAR_0;
 }
 VAR_0->next[VAR_1] = VAR_2->tmpfaces;
 VAR_0->prev[VAR_1] = ((void*)0);
 VAR_2->tmpfaces = VAR_0;
}
