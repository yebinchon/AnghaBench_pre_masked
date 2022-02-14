
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_7__ {int numsides; int maxs; int mins; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_5__ {TYPE_2__* winding; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2 (bspbrush_t *VAR_0)
{
 int VAR_1, VAR_2;
 winding_t *VAR_3;

 FUNC_1 (VAR_0->mins, VAR_0->maxs);
 for (VAR_1=0 ; VAR_1<VAR_0->numsides ; VAR_1++)
 {
  VAR_3 = VAR_0->sides[VAR_1].winding;
  if (!VAR_3)
   continue;
  for (VAR_2=0 ; VAR_2<VAR_3->numpoints ; VAR_2++)
   FUNC_0 (VAR_3->p[VAR_2], VAR_0->mins, VAR_0->maxs);
 }
}
