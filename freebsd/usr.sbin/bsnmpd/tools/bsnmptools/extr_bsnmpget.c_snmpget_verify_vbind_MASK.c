
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct snmp_pdu {scalar_t__ version; scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ syntax; } ;
struct snmp_object {TYPE_1__ val; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int32_t
FUNC_2(struct snmp_toolinfo *VAR_6, struct snmp_pdu *VAR_7,
    struct snmp_object *VAR_8)
{
 if (VAR_7->version == VAR_5 && VAR_8->val.syntax ==
     VAR_3) {
  FUNC_1("64-bit counters are not supported in SNMPv1 PDU");
  return (-1);
 }

 if (FUNC_0(VAR_6) || VAR_7->type == VAR_2 ||
     VAR_7->type == VAR_1)
  return (1);

 if (VAR_7->type == VAR_0 && VAR_8->val.syntax == VAR_4) {
  FUNC_1("Only leaf object values can be added to GET PDU");
  return (-1);
 }

 return (1);
}
