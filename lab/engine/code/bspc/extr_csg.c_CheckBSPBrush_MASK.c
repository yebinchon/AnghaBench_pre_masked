
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_9__ {int numsides; int * maxs; int * mins; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_7__ {size_t planenum; int winding; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_1 ;

void FUNC_3(bspbrush_t *VAR_2)
{
 int VAR_3, VAR_4;
 plane_t *VAR_5, *VAR_6;


 for (VAR_3 = 0; VAR_3 < VAR_2->numsides; VAR_3++)
 {
  for (VAR_4 = 0; VAR_4 < VAR_2->numsides; VAR_4++)
  {
   if (VAR_3 == VAR_4) continue;
   VAR_5 = &VAR_1[VAR_2->sides[VAR_3].planenum];
   VAR_6 = &VAR_1[VAR_2->sides[VAR_4].planenum];

   if (FUNC_2(VAR_2->sides[VAR_3].winding,
         VAR_2->sides[VAR_4].winding,
         VAR_5->normal, VAR_6->normal,
         VAR_5->dist, VAR_6->dist))
   {
    FUNC_1("non convex brush");
    break;
   }
  }
 }
 FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
 {
  if (VAR_2->mins[VAR_3] < -VAR_0 || VAR_2->maxs[VAR_3] > VAR_0)
  {
   FUNC_1("brush: bounds out of range\n");
   FUNC_1("ob->mins[%d] = %f, ob->maxs[%d] = %f\n", VAR_3, VAR_2->mins[VAR_3], VAR_3, VAR_2->maxs[VAR_3]);
   break;
  }
  if (VAR_2->mins[VAR_3] > VAR_0 || VAR_2->maxs[VAR_3] < -VAR_0)
  {
   FUNC_1("brush: no visible sides on brush\n");
   FUNC_1("ob->mins[%d] = %f, ob->maxs[%d] = %f\n", VAR_3, VAR_2->mins[VAR_3], VAR_3, VAR_2->maxs[VAR_3]);
   break;
  }
 }
}
