
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_4__ {scalar_t__ integer; } ;
struct snmp_value {TYPE_2__ v; int var; } ;
struct snmp_context {TYPE_1__* scratch; } ;
struct mibif {int dummy; } ;
struct bridge_port {scalar_t__ status; scalar_t__ span_enable; } ;
struct bridge_if {int dummy; } ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ int1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct bridge_if* FUNC_0 (char*) ;
 struct bridge_port* FUNC_1 (struct mibif*,struct bridge_if*) ;
 struct bridge_port* FUNC_2 (int ,struct bridge_if*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,int *) ;
 struct mibif* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct snmp_context *VAR_10,
  struct snmp_value *VAR_11, uint VAR_12)
{
 int32_t VAR_13;
 char VAR_14[VAR_0];
 struct bridge_if *VAR_15;
 struct bridge_port *VAR_16;
 struct mibif *VAR_17;

 if (VAR_11->v.integer != VAR_9 &&
     VAR_11->v.integer != VAR_8)
  return (VAR_4);

 if (FUNC_3(&VAR_11->var, VAR_12, VAR_14, &VAR_13) < 0)
  return (VAR_6);

 if ((VAR_15 = FUNC_0(VAR_14)) == ((void*)0))
  return (VAR_6);

 if ((VAR_16 = FUNC_2(VAR_13, VAR_15)) == ((void*)0)) {
  if ((VAR_17 = FUNC_4(VAR_13)) == ((void*)0))
   return (VAR_6);

  if ((VAR_16 = FUNC_1(VAR_17, VAR_15)) == ((void*)0))
   return (VAR_5);

  VAR_10->scratch->int1 = VAR_2;
 } else if (VAR_16->status == VAR_1) {
  return (VAR_6);
 } else {
  VAR_10->scratch->int1 = VAR_16->status;
 }

 VAR_16->span_enable = VAR_11->v.integer;
 VAR_16->status = VAR_3;

 return (VAR_7);
}
