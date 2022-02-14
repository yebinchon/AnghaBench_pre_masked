
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* settings; struct TYPE_6__* l_next; scalar_t__ winding; } ;
typedef TYPE_1__ tmp_nodebuf_t ;
typedef TYPE_1__ tmp_face_t ;
typedef TYPE_1__ tmp_area_t ;
struct TYPE_7__ {TYPE_1__* nodebuffer; TYPE_1__* areas; TYPE_1__* faces; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_4__ VAR_0 ;

void FUNC_2(void)
{
 tmp_face_t *VAR_1, *VAR_2;
 tmp_area_t *VAR_3, *VAR_4;
 tmp_nodebuf_t *VAR_5, *VAR_6;


 for (VAR_1 = VAR_0.faces; VAR_1; VAR_1 = VAR_2)
 {
  VAR_2 = VAR_1->l_next;
  if (VAR_1->winding) FUNC_1(VAR_1->winding);
  FUNC_0(VAR_1);
 }

 for (VAR_3 = VAR_0.areas; VAR_3; VAR_3 = VAR_4)
 {
  VAR_4 = VAR_3->l_next;
  if (VAR_3->settings) FUNC_0(VAR_3->settings);
  FUNC_0(VAR_3);
 }

 for (VAR_5 = VAR_0.nodebuffer; VAR_5; VAR_5 = VAR_6)
 {
  VAR_6 = VAR_5->next;
  FUNC_0(VAR_5);
 }
}
