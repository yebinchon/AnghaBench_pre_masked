
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_7__ {scalar_t__ type; int snum; int link; struct TYPE_7__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_6__ {int frame; } ;
struct TYPE_8__ {TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0 (centity_t *VAR_5, qboolean VAR_6)
{
 cparticle_t *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = VAR_5->currentState.frame;

 for (VAR_7=VAR_2 ; VAR_7 ; VAR_7=VAR_8)
 {
  VAR_8 = VAR_7->next;

  if (VAR_7->type == VAR_0 || VAR_7->type == VAR_1)
  {
   if (VAR_7->snum == VAR_9)
   {
    if (VAR_6)
     VAR_7->link = VAR_4;
    else
     VAR_7->link = VAR_3;
   }
  }

 }
}
