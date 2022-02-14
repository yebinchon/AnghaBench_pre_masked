
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int headnode; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_8__ {int numsides; TYPE_1__* original_sides; } ;
typedef TYPE_3__ mapbrush_t ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;

void FUNC_2(tree_t *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 mapbrush_t *VAR_7;
 int VAR_8;

 FUNC_0("--- MarkVisibleSides ---\n");


 for (VAR_5=VAR_3 ; VAR_5<VAR_4 ; VAR_5++)
 {
  VAR_7 = &VAR_1[VAR_5];

  VAR_8 = VAR_7->numsides;
  for (VAR_6=0 ; VAR_6<VAR_8 ; VAR_6++)
   VAR_7->original_sides[VAR_6].flags &= ~VAR_0;
 }


 FUNC_1 (VAR_2->headnode);
}
