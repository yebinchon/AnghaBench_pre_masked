
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int contents; TYPE_4__* brushlist; int expansionbboxes; scalar_t__ modelnum; int planenum; int * side; } ;
typedef TYPE_3__ node_t ;
struct TYPE_11__ {int numsides; TYPE_2__* original; struct TYPE_11__* next; TYPE_1__* sides; } ;
typedef TYPE_4__ bspbrush_t ;
struct TYPE_12__ {int allpresencetypes; } ;
struct TYPE_9__ {int contents; scalar_t__ modelnum; int expansionbbox; } ;
struct TYPE_8__ {scalar_t__ texinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_0(node_t *VAR_5, bspbrush_t *VAR_6)
{
 bspbrush_t *VAR_7;
 int VAR_8;

 VAR_5->side = ((void*)0);
 VAR_5->planenum = VAR_1;
 VAR_5->contents = 0;

 for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->next)
 {


  if (VAR_7->original->contents & VAR_0)
  {
   for (VAR_8=0 ; VAR_8<VAR_7->numsides ; VAR_8++)
    if (VAR_7->sides[VAR_8].texinfo != VAR_2)
     break;
   if (VAR_8 == VAR_7->numsides)
   {
    VAR_5->contents = VAR_0;
    break;
   }
  }
  VAR_5->contents |= VAR_7->original->contents;
 }

 if (VAR_4)
 {
  VAR_5->expansionbboxes = 0;
  VAR_5->contents = 0;
  for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->next)
  {
   VAR_5->expansionbboxes |= VAR_7->original->expansionbbox;
   VAR_5->contents |= VAR_7->original->contents;
   if (VAR_7->original->modelnum)
    VAR_5->modelnum = VAR_7->original->modelnum;
  }
  if (VAR_5->contents & VAR_0)
  {
   if (VAR_5->expansionbboxes != VAR_3.allpresencetypes)
   {
    VAR_5->contents &= ~VAR_0;
   }
  }
 }

 VAR_5->brushlist = VAR_6;
}
