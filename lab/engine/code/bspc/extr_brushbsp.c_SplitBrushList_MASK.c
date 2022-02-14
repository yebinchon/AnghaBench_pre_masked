
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int planenum; int texinfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_14__ {int planenum; } ;
typedef TYPE_2__ node_t ;
struct TYPE_15__ {int side; int numsides; struct TYPE_15__* next; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int,TYPE_3__**,TYPE_3__**) ;
 int VAR_4 ;

void FUNC_2 (bspbrush_t *VAR_5,
 node_t *VAR_6, bspbrush_t **VAR_7, bspbrush_t **VAR_8)
{
 bspbrush_t *VAR_9, *VAR_10, *VAR_11;
 side_t *VAR_12;
 int VAR_13;
 int VAR_14;

 *VAR_7 = *VAR_8 = ((void*)0);

 for (VAR_9 = VAR_5; VAR_9; VAR_9 = VAR_9->next)
 {
  VAR_13 = VAR_9->side;

  if (VAR_13 == VAR_1)
  {
   FUNC_1 (VAR_9, VAR_6->planenum, &VAR_10, &VAR_11);
   if (VAR_10)
   {
    VAR_10->next = *VAR_7;
    *VAR_7 = VAR_10;
   }
   if (VAR_11)
   {
    VAR_11->next = *VAR_8;
    *VAR_8 = VAR_11;
   }
   continue;
  }

  VAR_10 = FUNC_0 (VAR_9);




  if (VAR_13 & VAR_2)
  {
   for (VAR_14=0 ; VAR_14<VAR_10->numsides ; VAR_14++)
   {
    VAR_12 = VAR_10->sides + VAR_14;
    if ( (VAR_12->planenum& ~1) == VAR_6->planenum)
     VAR_12->texinfo = VAR_4;
   }
  }
  if (VAR_13 & VAR_3)
  {
   VAR_10->next = *VAR_7;
   *VAR_7 = VAR_10;
   continue;
  }
  if (VAR_13 & VAR_0)
  {
   VAR_10->next = *VAR_8;
   *VAR_8 = VAR_10;
   continue;
  }
 }
}
