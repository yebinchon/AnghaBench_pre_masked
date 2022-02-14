
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct snmp_pdu {scalar_t__ version; } ;
struct TYPE_3__ {scalar_t__ syntax; } ;
struct snmp_object {TYPE_2__* info; TYPE_1__ val; } ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ access; int string; } ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int32_t
FUNC_3(struct snmp_toolinfo *VAR_3, struct snmp_pdu *VAR_4,
    struct snmp_object *VAR_5)
{
 if (VAR_4->version == VAR_2 && VAR_5->val.syntax ==
     VAR_1) {
  FUNC_2("64-bit counters are not supported in SNMPv1 PDU");
  return (-1);
 }

 if (FUNC_1(VAR_3) || FUNC_0(VAR_3))
  return (1);

 if (VAR_5->info->access < VAR_0) {
  FUNC_2("Object %s not accessible for set - try 'bsnmpset -a'",
      VAR_5->info->string);
  return (-1);
 }

 return (1);
}
