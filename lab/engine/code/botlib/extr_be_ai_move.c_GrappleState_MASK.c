
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int moveflags; } ;
typedef TYPE_1__ bot_movestate_t ;
typedef int aas_reachability_t ;
struct TYPE_8__ {int weapon; } ;
typedef TYPE_2__ aas_entityinfo_t ;
struct TYPE_10__ {scalar_t__ value; } ;
struct TYPE_9__ {scalar_t__ value; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;

int FUNC_3(bot_movestate_t *VAR_3, aas_reachability_t *VAR_4)
{
 int VAR_5;
 aas_entityinfo_t VAR_6;


 if (VAR_3->moveflags & VAR_0)
  return 2;


 for (VAR_5 = FUNC_2(0); VAR_5; VAR_5 = FUNC_2(VAR_5))
 {
  if (FUNC_1(VAR_5) == (int) VAR_1->value)
  {
   FUNC_0(VAR_5, &VAR_6);
   if (VAR_6.weapon == (int) VAR_2->value)
   {
    return 1;
   }
  }
 }

 return 0;
}
