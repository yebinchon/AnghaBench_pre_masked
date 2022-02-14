
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_pdu {scalar_t__ version; scalar_t__ error_status; scalar_t__ nbindings; int type; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct snmp_pdu*,struct snmp_pdu*) ;
 int FUNC_1 (struct snmp_pdu*,struct snmp_pdu*) ;
 int FUNC_2 (struct snmp_pdu*,struct snmp_pdu*) ;
 int FUNC_3 (char*,...) ;

int32_t
FUNC_4(struct snmp_pdu *VAR_2, struct snmp_pdu *VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (-2);

 if (VAR_2->version != VAR_3->version) {
  FUNC_3("Response has wrong version");
  return (-1);
 }

 if (VAR_2->error_status == VAR_1) {
  FUNC_3("Error - No Such Name");
  return (0);
 }

 if (VAR_2->error_status != VAR_0) {
  FUNC_3("Error %d in response", VAR_2->error_status);
  return (-1);
 }

 if (VAR_2->nbindings != VAR_3->nbindings && VAR_3->type != 129){
  FUNC_3("Bad number of bindings in response");
  return (-1);
 }

 switch (VAR_3->type) {
  case 130:
   return (FUNC_0(VAR_2,VAR_3));
  case 129:
   return (FUNC_1(VAR_2,VAR_3));
  case 128:
   return (FUNC_2(VAR_2,VAR_3));
  default:

   break;
 }

 return (-2);
}
