
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct snmp_value {int var; } ;
struct snmp_context {TYPE_1__* scratch; } ;
struct bridge_if {int if_status; int bif_name; } ;
struct TYPE_2__ {int int1; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bridge_if*) ;
 struct bridge_if* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct snmp_context *VAR_2,
 struct snmp_value *VAR_3, uint VAR_4)
{
 struct bridge_if *VAR_5;

 if ((VAR_5 = FUNC_2(&VAR_3->var, VAR_4)) == ((void*)0))
  return (VAR_0);

 switch (VAR_2->scratch->int1) {
  case 129:
   FUNC_1(VAR_5);
   return (VAR_1);

  case 128:
   if (VAR_5->if_status != VAR_2->scratch->int1)
    FUNC_3(VAR_5->bif_name, 0);
   VAR_5->if_status = 128;
   return (VAR_1);

  case 130:
   if (VAR_5->if_status != VAR_2->scratch->int1)
    FUNC_3(VAR_5->bif_name, 1);
   VAR_5->if_status = 130;
   return (VAR_1);
 }

 FUNC_0();
}
