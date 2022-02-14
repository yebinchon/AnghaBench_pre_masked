
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* l_prev; struct TYPE_4__* l_next; scalar_t__ num; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_5__ {int numfaces; TYPE_1__* faces; int facenum; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

tmp_face_t *FUNC_1(void)
{
 tmp_face_t *VAR_1;

 VAR_1 = (tmp_face_t *) FUNC_0(sizeof(tmp_face_t));
 VAR_1->num = VAR_0.facenum++;
 VAR_1->l_prev = ((void*)0);
 VAR_1->l_next = VAR_0.faces;
 if (VAR_0.faces) VAR_0.faces->l_prev = VAR_1;
 VAR_0.faces = VAR_1;
 VAR_0.numfaces++;
 return VAR_1;
}
