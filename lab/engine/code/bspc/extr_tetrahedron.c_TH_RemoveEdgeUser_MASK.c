
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t* v; int usercount; } ;
typedef TYPE_2__ th_edge_t ;
struct TYPE_6__ {TYPE_1__* vertexes; TYPE_2__* edges; } ;
struct TYPE_4__ {int usercount; } ;


 size_t FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;

void FUNC_1(int VAR_1)
{
 th_edge_t *VAR_2;

 VAR_2 = &VAR_0.edges[FUNC_0(VAR_1)];

 VAR_2->usercount--;

 VAR_0.vertexes[VAR_2->v[0]].usercount--;
 VAR_0.vertexes[VAR_2->v[1]].usercount--;
}
