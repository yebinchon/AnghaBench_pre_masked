
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct snmp_value {int var; } ;
struct bridge_port {int status; } ;
struct bridge_if {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bridge_if* FUNC_0 (char*) ;
 int FUNC_1 (struct bridge_port*,char*) ;
 int FUNC_2 (struct bridge_port*,char*) ;
 struct bridge_port* FUNC_3 (int ,struct bridge_if*) ;
 scalar_t__ FUNC_4 (int *,int ,char*,int *) ;
 int FUNC_5 (struct bridge_port*,struct bridge_if*) ;

__attribute__((used)) static int
FUNC_6(struct snmp_value *VAR_4, uint VAR_5)
{
 int32_t VAR_6;
 char VAR_7[VAR_0];
 struct bridge_if *VAR_8;
 struct bridge_port *VAR_9;

 if (FUNC_4(&VAR_4->var, VAR_5, VAR_7, &VAR_6) < 0)
  return (VAR_2);

 if ((VAR_8 = FUNC_0(VAR_7)) == ((void*)0) ||
     (VAR_9 = FUNC_3(VAR_6, VAR_8)) == ((void*)0))
  return (VAR_2);

 switch (VAR_9->status) {
  case 129:
   if (FUNC_1(VAR_9, VAR_7) < 0)
    return (VAR_1);
   break;

  case 128:
   if (FUNC_2(VAR_9, VAR_7) < 0)
    return (VAR_1);
   FUNC_5(VAR_9, VAR_8);
   break;
 }

 return (VAR_3);
}
