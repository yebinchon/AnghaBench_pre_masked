
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {size_t planenum; int flags; int * winding; } ;
typedef TYPE_1__ side_t ;
struct TYPE_8__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_9__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int **,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_3 (bspbrush_t *VAR_2)
{
 int VAR_3, VAR_4;
 winding_t *VAR_5;
 side_t *VAR_6;
 plane_t *VAR_7;

 for (VAR_3=0 ; VAR_3<VAR_2->numsides ; VAR_3++)
 {
  VAR_6 = &VAR_2->sides[VAR_3];
  VAR_7 = &VAR_1[VAR_6->planenum];
  VAR_5 = FUNC_0 (VAR_7->normal, VAR_7->dist);
  for (VAR_4=0 ; VAR_4<VAR_2->numsides && VAR_5; VAR_4++)
  {
   if (VAR_3 == VAR_4)
    continue;
   if (VAR_2->sides[VAR_4].flags & VAR_0)
    continue;
   VAR_7 = &VAR_1[VAR_2->sides[VAR_4].planenum^1];
   FUNC_2 (&VAR_5, VAR_7->normal, VAR_7->dist, 0);
  }

  VAR_6->winding = VAR_5;
 }

 FUNC_1 (VAR_2);
}
