
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int planenum; struct TYPE_3__* parent; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (char*) ;

void FUNC_1 (int VAR_0, node_t *VAR_1)
{
 node_t *VAR_2;

 for (VAR_2 = VAR_1->parent; VAR_2; VAR_2 = VAR_2->parent)
 {
  if (VAR_2->planenum == VAR_0) FUNC_0("Tried parent");
 }
}
