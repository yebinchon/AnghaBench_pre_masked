
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ planenum; struct TYPE_4__** children; scalar_t__ detail_seperator; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void FUNC_1 (node_t *VAR_1)
{
 if (VAR_1->planenum == VAR_0)
  return;

 if (VAR_1->detail_seperator)
 {
  FUNC_0 (VAR_1);
  return;
 }

 FUNC_1 (VAR_1->children[0]);
 FUNC_1 (VAR_1->children[1]);
}
