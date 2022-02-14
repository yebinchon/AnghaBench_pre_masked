
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* v; } ;
typedef TYPE_1__ th_edge_t ;
struct TYPE_5__ {int numedges; TYPE_1__* edges; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;

int FUNC_2(int VAR_2, int VAR_3)
{
 th_edge_t *VAR_4;

 if (VAR_1.numedges == 0) VAR_1.numedges = 1;
 if (VAR_1.numedges >= VAR_0)
  FUNC_0("MAX_TH_EDGES");
 VAR_4 = &VAR_1.edges[VAR_1.numedges++];
 VAR_4->v[0] = VAR_2;
 VAR_4->v[1] = VAR_3;
 FUNC_1(VAR_4);
 return VAR_1.numedges-1;
}
