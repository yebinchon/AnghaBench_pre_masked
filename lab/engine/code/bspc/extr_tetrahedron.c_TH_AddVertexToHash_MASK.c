
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* hashnext; int v; } ;
typedef TYPE_1__ th_vertex_t ;
struct TYPE_5__ {TYPE_1__** vertexhash; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(th_vertex_t *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->v);
 VAR_1->hashnext = VAR_0.vertexhash[VAR_2];
 VAR_0.vertexhash[VAR_2] = VAR_1;
}
