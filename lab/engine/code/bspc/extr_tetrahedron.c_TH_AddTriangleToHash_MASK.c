
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* hashnext; int * edges; } ;
typedef TYPE_1__ th_triangle_t ;
struct TYPE_5__ {TYPE_1__** trianglehash; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(th_triangle_t *VAR_2)
{
 int VAR_3;

 VAR_3 = (FUNC_0(VAR_2->edges[0]) + FUNC_0(VAR_2->edges[1]) + FUNC_0(VAR_2->edges[2])) & (VAR_0-1);
 VAR_2->hashnext = VAR_1.trianglehash[VAR_3];
 VAR_1.trianglehash[VAR_3] = VAR_2;
}
