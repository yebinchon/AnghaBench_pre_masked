
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* v; struct TYPE_4__* hashnext; } ;
typedef TYPE_1__ th_edge_t ;
struct TYPE_5__ {TYPE_1__** edgehash; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(th_edge_t *VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_2->v[0] + VAR_2->v[1]) & (VAR_0-1);
 VAR_2->hashnext = VAR_1.edgehash[VAR_3];
 VAR_1.edgehash[VAR_3] = VAR_2;
}
