
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_5__ {int flags; struct TYPE_5__* next; int resetString; int name; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void FUNC_2(qboolean VAR_7)
{
 cvar_t *VAR_8;

 VAR_8 = VAR_5;

 while(VAR_8)
 {
  if((VAR_8->flags & VAR_3) ||
   (VAR_7 && (VAR_8->flags & VAR_4)))
  {

   VAR_8 = FUNC_1(VAR_8);
   continue;
  }

  if(!(VAR_8->flags & (VAR_2 | VAR_0 | VAR_1)))
  {

   FUNC_0(VAR_8->name, VAR_8->resetString, VAR_6);
  }

  VAR_8 = VAR_8->next;
 }
}
