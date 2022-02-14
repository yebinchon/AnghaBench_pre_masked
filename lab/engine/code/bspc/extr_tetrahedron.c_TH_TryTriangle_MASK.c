
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {int normal; int dist; } ;
typedef TYPE_3__ th_plane_t ;
struct TYPE_12__ {int numedges; TYPE_2__* edges; TYPE_1__* vertexes; } ;
struct TYPE_10__ {int* v; int usercount; } ;
struct TYPE_9__ {float* v; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (float*,int ) ;
 int FUNC_2 (int*,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (float*,float*,int ) ;
 TYPE_4__ VAR_0 ;

int FUNC_6(int VAR_1[3])
{
 th_plane_t VAR_2[3], VAR_3;
 vec3_t VAR_4, VAR_5;
 float *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = VAR_0.vertexes[VAR_1[0]].v;
 VAR_7 = VAR_0.vertexes[VAR_1[1]].v;
 VAR_8 = VAR_0.vertexes[VAR_1[2]].v;

 FUNC_5(VAR_6, VAR_7, VAR_4);
 FUNC_5(VAR_8, VAR_7, VAR_5);
 FUNC_0(VAR_4, VAR_5, VAR_3.normal);
 FUNC_4(VAR_3.normal);
 VAR_3.dist = FUNC_1(VAR_6, VAR_3.normal);

 FUNC_2(VAR_1, &VAR_3, VAR_2);

 for (VAR_9 = 1; VAR_9 < VAR_0.numedges; VAR_9++)
 {

  if (!VAR_0.edges[VAR_9].usercount) continue;

  for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
  {
   if (VAR_1[VAR_10] == VAR_0.edges[VAR_10].v[0] ||
    VAR_1[VAR_10] == VAR_0.edges[VAR_10].v[1]) break;
  }
  if (VAR_10 < 3) continue;

  if (FUNC_3(VAR_0.edges[VAR_9].v[0], VAR_0.edges[VAR_9].v[1], &VAR_3, VAR_2)) return 0;
 }
 return 1;
}
