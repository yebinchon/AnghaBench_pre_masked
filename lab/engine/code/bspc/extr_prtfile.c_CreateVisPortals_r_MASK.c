
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ planenum; struct TYPE_5__** children; scalar_t__ detail_seperator; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (node_t *VAR_1)
{


 if (VAR_1->planenum == VAR_0 || VAR_1->detail_seperator )
  return;

 FUNC_0 (VAR_1);
 FUNC_1 (VAR_1);

 FUNC_2 (VAR_1->children[0]);
 FUNC_2 (VAR_1->children[1]);
}
