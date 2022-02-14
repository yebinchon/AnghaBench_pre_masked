
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sym; } ;
struct TYPE_4__ {int flags; int name; } ;


 int VAR_0 ;




 TYPE_3__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,...) ;

void FUNC_2(int VAR_4, char *VAR_5)
{
 switch (VAR_4) {
 case 128:
  if (VAR_2)
   FUNC_1("symbol '%s' redefines option 'modules'"
        " already defined by symbol '%s'",
        VAR_1->sym->name,
        VAR_2->name
        );
  VAR_2 = VAR_1->sym;
  break;
 case 130:
  if (!VAR_3)
   VAR_3 = VAR_1->sym;
  else if (VAR_3 != VAR_1->sym)
   FUNC_1("trying to redefine defconfig symbol");
  break;
 case 129:
  FUNC_0(VAR_5);
  break;
 case 131:
  VAR_1->sym->flags |= VAR_0;
  break;
 }
}
