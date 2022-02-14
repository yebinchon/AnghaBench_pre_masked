
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int name; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,...) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(void)
{
 cvar_t *VAR_1;

 if(FUNC_0() != 2)
 {
  FUNC_2("Usage: %s <varname>\n", FUNC_1(0));
  return;
 }

 VAR_1 = FUNC_3(FUNC_1(1));

 if(!VAR_1)
  return;

 if(VAR_1->flags & VAR_0)
  FUNC_4(VAR_1);
 else
  FUNC_2("Error: %s: Variable %s is not user created.\n", FUNC_1(0), VAR_1->name);
}
