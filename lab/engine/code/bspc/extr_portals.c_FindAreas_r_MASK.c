
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ planenum; int contents; int occupied; scalar_t__ area; struct TYPE_4__** children; } ;
typedef TYPE_1__ node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_1 (node_t *VAR_4)
{
 if (VAR_4->planenum != VAR_2)
 {
  FUNC_1 (VAR_4->children[0]);
  FUNC_1 (VAR_4->children[1]);
  return;
 }

 if (VAR_4->area)
  return;

 if (VAR_4->contents & VAR_1)
  return;

 if (!VAR_4->occupied)
  return;



 if (VAR_4->contents == VAR_0)
  return;

 VAR_3++;
 FUNC_0 (VAR_4);
}
