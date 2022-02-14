
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int numsides; int * next; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_10__ {int planenum; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_2__**,TYPE_2__**) ;

bspbrush_t *FUNC_2 (bspbrush_t *VAR_0, bspbrush_t *VAR_1)
{
 int VAR_2;
 bspbrush_t *VAR_3, *VAR_4;
 bspbrush_t *VAR_5;

 VAR_5 = VAR_0;
 for (VAR_2=0 ; VAR_2<VAR_1->numsides && VAR_5 ; VAR_2++)
 {
  FUNC_1(VAR_5, VAR_1->sides[VAR_2].planenum, &VAR_3, &VAR_4);
  if (VAR_5 != VAR_0) FUNC_0(VAR_5);
  if (VAR_3) FUNC_0(VAR_3);
  VAR_5 = VAR_4;
 }

 if (VAR_5 == VAR_0) return ((void*)0);

 VAR_5->next = ((void*)0);
 return VAR_5;
}
