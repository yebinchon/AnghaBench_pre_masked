
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ planenum; struct TYPE_4__** children; int cluster; } ;
typedef TYPE_1__ node_t ;
struct TYPE_5__ {int cluster; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_0 (node_t *VAR_3)
{
 if (VAR_3->planenum == VAR_0)
 {
  VAR_2[VAR_1++].cluster = VAR_3->cluster;
  return;
 }
 FUNC_0 (VAR_3->children[0]);
 FUNC_0 (VAR_3->children[1]);
}
