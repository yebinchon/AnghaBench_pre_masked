
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {int integer; } ;
struct snmp_value {int var; TYPE_1__ v; } ;
struct snmp_context {TYPE_2__* scratch; } ;
struct bridge_if {int if_status; int bif_name; } ;
struct TYPE_4__ {int int1; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 struct bridge_if* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct snmp_context *VAR_6,
 struct snmp_value *VAR_7, uint VAR_8)
{
 struct bridge_if *VAR_9;
 char VAR_10[VAR_0];

 VAR_9 = FUNC_1(&VAR_7->var, VAR_8);

 switch (VAR_7->v.integer) {
     case 133:
  if (VAR_9 == ((void*)0))
      return (VAR_3);

  VAR_6->scratch->int1 = VAR_9->if_status;

  switch (VAR_9->if_status) {
      case 133:
   return (VAR_4);
      case 129:
   if (FUNC_3(VAR_9->bif_name, 1) < 0)
       return (VAR_2);
   return (VAR_4);
      default:
   break;
  }
  return (VAR_3);

     case 129:
  if (VAR_9 == ((void*)0))
      return (VAR_3);

  VAR_6->scratch->int1 = VAR_9->if_status;

  switch (VAR_9->if_status) {
      case 133:
   if (FUNC_3(VAR_9->bif_name, 1) < 0)
       return (VAR_2);
   return (VAR_4);
      case 129:
   return (VAR_4);
      default:
   break;
  }
  return (VAR_3);

     case 128:
  return (VAR_3);

     case 132:
  if (VAR_9 != ((void*)0))
      return (VAR_3);

  VAR_6->scratch->int1 = 130;

  if (FUNC_2(&VAR_7->var, VAR_8, VAR_10) == ((void*)0))
      return (VAR_1);
  if (FUNC_0(VAR_10, 1) < 0)
      return (VAR_2);
  return (VAR_4);

     case 131:
  if (VAR_9 != ((void*)0))
      return (VAR_3);

  if (FUNC_2(&VAR_7->var, VAR_8, VAR_10) == ((void*)0))
      return (VAR_1);

  VAR_6->scratch->int1 = 130;

  if (FUNC_0(VAR_10, 0) < 0)
      return (VAR_2);
  return (VAR_4);

     case 130:
  if (VAR_9 == ((void*)0))
      return (VAR_5);

  VAR_6->scratch->int1 = VAR_9->if_status;
  VAR_9->if_status = 130;
 }

 return (VAR_4);
}
