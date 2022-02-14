
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* edges; size_t planenum; int planes; int maxs; int mins; scalar_t__ back; scalar_t__ front; } ;
typedef TYPE_2__ th_triangle_t ;
typedef int th_plane_t ;
struct TYPE_6__ {int numtriangles; int * planes; TYPE_1__* edges; TYPE_2__* triangles; } ;
struct TYPE_4__ {int* v; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int,int *,int ) ;
 scalar_t__ FUNC_2 (int,int,int ,int ) ;
 size_t FUNC_3 (scalar_t__) ;
 TYPE_3__ VAR_0 ;

int FUNC_4(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 th_plane_t *VAR_6;
 th_triangle_t *VAR_7;


 if (FUNC_0(VAR_1, VAR_2)) return 1;

 for (VAR_3 = 1; VAR_3 < VAR_0.numtriangles; VAR_3++)
 {
  VAR_7 = &VAR_0.triangles[VAR_3];



  if (VAR_7->front && VAR_7->back) continue;

  if (FUNC_2(VAR_1, VAR_2, VAR_7->mins, VAR_7->maxs)) continue;

  for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  {
   VAR_5 = VAR_0.edges[FUNC_3(VAR_7->edges[VAR_4])].v[VAR_7->edges[VAR_4] < 0];
   if (VAR_5 == VAR_1 || VAR_5 == VAR_2) break;
  }
  if (VAR_4 < 3) continue;

  VAR_6 = &VAR_0.planes[VAR_7->planenum];

  if (FUNC_1(VAR_1, VAR_2, VAR_6, VAR_7->planes)) return 0;
 }
 return 1;
}
