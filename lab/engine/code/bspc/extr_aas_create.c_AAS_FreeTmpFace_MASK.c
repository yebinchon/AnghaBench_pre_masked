
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ winding; TYPE_2__* l_next; TYPE_1__* l_prev; } ;
typedef TYPE_3__ tmp_face_t ;
struct TYPE_10__ {int numfaces; TYPE_2__* faces; } ;
struct TYPE_8__ {TYPE_1__* l_prev; } ;
struct TYPE_7__ {TYPE_2__* l_next; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_4__ VAR_0 ;

void FUNC_2(tmp_face_t *VAR_1)
{
 if (VAR_1->l_next) VAR_1->l_next->l_prev = VAR_1->l_prev;
 if (VAR_1->l_prev) VAR_1->l_prev->l_next = VAR_1->l_next;
 else VAR_0.faces = VAR_1->l_next;

 if (VAR_1->winding) FUNC_1(VAR_1->winding);

 FUNC_0(VAR_1);
 VAR_0.numfaces--;
}
