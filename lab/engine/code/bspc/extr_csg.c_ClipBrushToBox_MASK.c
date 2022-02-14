
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {scalar_t__* maxs; scalar_t__* mins; int numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_9__ {int planenum; int flags; int texinfo; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int,TYPE_2__**,TYPE_2__**) ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

bspbrush_t *FUNC_2(bspbrush_t *VAR_4, vec3_t VAR_5, vec3_t VAR_6)
{
 int VAR_7, VAR_8;
 bspbrush_t *VAR_9, *VAR_10;
 int VAR_11;

 for (VAR_8=0 ; VAR_8<2 ; VAR_8++)
 {
  if (VAR_4->maxs[VAR_8] > VAR_6[VAR_8])
  {
   FUNC_1 (VAR_4, VAR_2[VAR_8], &VAR_9, &VAR_10);
   if (VAR_9)
    FUNC_0 (VAR_9);
   VAR_4 = VAR_10;
   if (!VAR_4)
    return ((void*)0);
  }
  if (VAR_4->mins[VAR_8] < VAR_5[VAR_8])
  {
   FUNC_1 (VAR_4, VAR_3[VAR_8], &VAR_9, &VAR_10);
   if (VAR_10)
    FUNC_0 (VAR_10);
   VAR_4 = VAR_9;
   if (!VAR_4)
    return ((void*)0);
  }
 }



 for (VAR_7=0 ; VAR_7<VAR_4->numsides ; VAR_7++)
 {
  VAR_11 = VAR_4->sides[VAR_7].planenum & ~1;
  if (VAR_11 == VAR_2[0] || VAR_11 == VAR_2[1]
   || VAR_11 == VAR_3[0] || VAR_11 == VAR_3[1])
  {
   VAR_4->sides[VAR_7].texinfo = VAR_1;
   VAR_4->sides[VAR_7].flags &= ~VAR_0;
  }
 }
 return VAR_4;
}
