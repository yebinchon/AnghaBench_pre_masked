
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int numsides; struct TYPE_8__* next; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_7__ {int flags; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;

bspbrush_t *FUNC_1 (bspbrush_t *VAR_1)
{
 bspbrush_t *VAR_2;
 bspbrush_t *VAR_3, *VAR_4;
 int VAR_5;


 VAR_3 = ((void*)0);
 for (VAR_2=VAR_1 ; VAR_2 ; VAR_2=VAR_2->next)
 {
  for (VAR_5=0 ; VAR_5<VAR_2->numsides ; VAR_5++)
   if (VAR_2->sides[VAR_5].flags & VAR_0)
    break;
  if (VAR_5 == VAR_2->numsides)
   continue;
  VAR_4 = FUNC_0 (VAR_2);
  VAR_4->next = VAR_3;
  VAR_3 = VAR_4;
 }


 return VAR_3;
}
