
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {int integer; } ;
struct snmp_value {TYPE_1__ v; int var; } ;
struct snmp_context {TYPE_2__* scratch; } ;
struct mibif {int dummy; } ;
struct bridge_port {int status; int span_enable; } ;
struct bridge_if {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {int int1; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bridge_if* FUNC_0 (char*) ;
 struct bridge_port* FUNC_1 (struct mibif*,struct bridge_if*) ;
 struct bridge_port* FUNC_2 (int ,struct bridge_if*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,int *) ;
 struct mibif* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct snmp_context *VAR_4,
 struct snmp_value *VAR_5, uint VAR_6)
{
 int32_t VAR_7;
 char VAR_8[VAR_0];
 struct bridge_if *VAR_9;
 struct bridge_port *VAR_10;
 struct mibif *VAR_11;

 if (FUNC_3(&VAR_5->var, VAR_6, VAR_8, &VAR_7) < 0)
  return (VAR_2);

 if ((VAR_9 = FUNC_0(VAR_8)) == ((void*)0) ||
     (VAR_11 = FUNC_4(VAR_7)) == ((void*)0))
  return (VAR_2);

 VAR_10 = FUNC_2(VAR_7, VAR_9);

 switch (VAR_5->v.integer) {
     case 133:
  if (VAR_10 == ((void*)0))
      return (VAR_2);

  if (VAR_10->span_enable == 0)
      return (VAR_2);

  VAR_4->scratch->int1 = VAR_10->status;
  VAR_10->status = 133;
  break;

     case 129:
  if (VAR_10 == ((void*)0) || VAR_10->span_enable == 0 ||
      VAR_10->status == 133)
   return (VAR_2);

  VAR_4->scratch->int1 = VAR_10->status;
  VAR_10->status = 129;

     case 128:

     case 132:
  return (VAR_2);

     case 131:
  if (VAR_10 != ((void*)0))
      return (VAR_2);

  if ((VAR_10 = FUNC_1(VAR_11, VAR_9)) == ((void*)0))
   return (VAR_1);

  VAR_4->scratch->int1 = 130;
  VAR_10->status = 128;
  break;

     case 130:
  if (VAR_10 == ((void*)0))
      return (VAR_2);

  VAR_4->scratch->int1 = VAR_10->status;
  VAR_10->status = 130;
  break;
 }

 return (VAR_3);
}
