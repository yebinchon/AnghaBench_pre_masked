
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct snmp_value {int var; } ;
struct snmp_context {TYPE_1__* scratch; } ;
struct bridge_port {scalar_t__ status; } ;
struct bridge_if {int dummy; } ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ int1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bridge_if* FUNC_0 (char*) ;
 struct bridge_port* FUNC_1 (int ,struct bridge_if*) ;
 scalar_t__ FUNC_2 (int *,int ,char*,int *) ;
 int FUNC_3 (struct bridge_port*,struct bridge_if*) ;

__attribute__((used)) static int
FUNC_4(struct snmp_context *VAR_4,
 struct snmp_value *VAR_5, uint VAR_6)
{
 int32_t VAR_7;
 char VAR_8[VAR_0];
 struct bridge_if *VAR_9;
 struct bridge_port *VAR_10;

 if (FUNC_2(&VAR_5->var, VAR_6, VAR_8, &VAR_7) < 0)
  return (VAR_2);

 if ((VAR_9 = FUNC_0(VAR_8)) == ((void*)0) ||
     (VAR_10 = FUNC_1(VAR_7, VAR_9)) == ((void*)0))
  return (VAR_2);

 if (VAR_4->scratch->int1 == VAR_1)
  FUNC_3(VAR_10, VAR_9);
 else
  VAR_10->status = VAR_4->scratch->int1;

 return (VAR_3);
}
