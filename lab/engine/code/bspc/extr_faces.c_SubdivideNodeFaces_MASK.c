
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* faces; } ;
typedef TYPE_1__ node_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ face_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

void FUNC_1 (node_t *VAR_0)
{
 face_t *VAR_1;

 for (VAR_1 = VAR_0->faces ; VAR_1 ; VAR_1=VAR_1->next)
 {
  FUNC_0 (VAR_0, VAR_1);
 }
}
