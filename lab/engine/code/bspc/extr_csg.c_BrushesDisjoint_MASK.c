
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__* mins; scalar_t__* maxs; int numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_5__ {int planenum; } ;



qboolean FUNC_0 (bspbrush_t *VAR_0, bspbrush_t *VAR_1)
{
 int VAR_2, VAR_3;


 for (VAR_2=0 ; VAR_2<3 ; VAR_2++)
  if (VAR_0->mins[VAR_2] >= VAR_1->maxs[VAR_2]
  || VAR_0->maxs[VAR_2] <= VAR_1->mins[VAR_2])
   return 1;


 for (VAR_2=0 ; VAR_2<VAR_0->numsides ; VAR_2++)
 {
  for (VAR_3=0 ; VAR_3<VAR_1->numsides ; VAR_3++)
  {
   if (VAR_0->sides[VAR_2].planenum ==
   (VAR_1->sides[VAR_3].planenum^1) )
    return 1;
  }
 }

 return 0;
}
