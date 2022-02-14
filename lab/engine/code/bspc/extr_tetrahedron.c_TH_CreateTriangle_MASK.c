
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t planenum; int maxs; int mins; int planes; int * hashnext; int * next; int * prev; scalar_t__ back; scalar_t__ front; int * edges; } ;
typedef TYPE_2__ th_triangle_t ;
struct TYPE_7__ {int numtriangles; TYPE_1__* vertexes; int * planes; TYPE_2__* triangles; } ;
struct TYPE_5__ {int v; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int*,int *,int ) ;
 int FUNC_6 (int,int) ;
 size_t FUNC_7 (int,int,int) ;
 int FUNC_8 (int ) ;
 TYPE_3__ VAR_1 ;

int FUNC_9(int VAR_2[3])
{
 th_triangle_t *VAR_3;
 int VAR_4;

 if (VAR_1.numtriangles == 0) VAR_1.numtriangles = 1;
 if (VAR_1.numtriangles >= VAR_0)
  FUNC_2("MAX_TH_TRIANGLES");
 VAR_3 = &VAR_1.triangles[VAR_1.numtriangles++];
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
 {
  VAR_3->edges[VAR_4] = FUNC_6(VAR_2[VAR_4], VAR_2[(VAR_4+1)%3]);
  FUNC_3(FUNC_8(VAR_3->edges[VAR_4]));
 }
 VAR_3->front = 0;
 VAR_3->back = 0;
 VAR_3->planenum = FUNC_7(VAR_2[0], VAR_2[1], VAR_2[2]);
 VAR_3->prev = ((void*)0);
 VAR_3->next = ((void*)0);
 VAR_3->hashnext = ((void*)0);
 FUNC_5(VAR_2, &VAR_1.planes[VAR_3->planenum], VAR_3->planes);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3->mins, VAR_3->maxs);
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
 {
  FUNC_0(VAR_1.vertexes[VAR_2[VAR_4]].v, VAR_3->mins, VAR_3->maxs);
 }
 return VAR_1.numtriangles-1;
}
