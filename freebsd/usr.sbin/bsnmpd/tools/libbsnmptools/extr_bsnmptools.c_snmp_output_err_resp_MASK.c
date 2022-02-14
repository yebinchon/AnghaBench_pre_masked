
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct snmp_pdu {int error_index; size_t error_status; TYPE_1__* bindings; scalar_t__ nbindings; } ;
struct snmp_object {int dummy; } ;
typedef int int32_t ;
struct TYPE_6__ {char* str; } ;
struct TYPE_5__ {char* chost; char* cport; } ;
struct TYPE_4__ {int var; } ;


 int VAR_0 ;
 int FUNC_0 (struct snmp_toolinfo*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,char*) ;
 struct snmp_object* FUNC_2 (int,int) ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct snmp_object*) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_5 (struct snmp_toolinfo*,struct snmp_object*,TYPE_1__*) ;
 int FUNC_6 (struct snmp_toolinfo*,struct snmp_object*) ;
 int VAR_6 ;
 char* FUNC_7 (int ) ;

void
FUNC_8(struct snmp_toolinfo *VAR_7, struct snmp_pdu *VAR_8)
{
 struct snmp_object *VAR_9;
 char VAR_10[VAR_0];

 if (VAR_8 == ((void*)0) || (VAR_8->error_index > (int32_t) VAR_8->nbindings)) {
  FUNC_3(VAR_6, "Invalid error index in PDU\n");
  return;
 }

 if ((VAR_9 = FUNC_2(1, sizeof(struct snmp_object))) == ((void*)0)) {
  FUNC_3(VAR_6, "calloc: %s", FUNC_7(VAR_3));
  return;
 }

 FUNC_3(VAR_6, "Agent %s:%s returned error \n", VAR_5.chost,
     VAR_5.cport);

 if (!FUNC_0(VAR_7) && (FUNC_5(VAR_7, VAR_9,
     &(VAR_8->bindings[VAR_8->error_index - 1])) > 0))
  FUNC_6(VAR_7, VAR_9);
 else {
  FUNC_1(&(VAR_8->bindings[VAR_8->error_index - 1].var), VAR_10);
  FUNC_3(VAR_6,"%s", VAR_10);
 }

 FUNC_3(VAR_6," caused error - ");
 if ((VAR_8->error_status > 0) && (VAR_8->error_status <=
     VAR_1))
  FUNC_3(VAR_6, "%s\n", VAR_4[VAR_8->error_status].str);
 else
  FUNC_3(VAR_6,"%s\n", VAR_4[VAR_2].str);

 FUNC_4(VAR_9);
 VAR_9 = ((void*)0);
}
