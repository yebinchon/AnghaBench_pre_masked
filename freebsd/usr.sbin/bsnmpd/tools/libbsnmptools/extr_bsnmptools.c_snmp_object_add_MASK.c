
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {scalar_t__ objects; int snmp_objectlist; } ;
struct snmp_object {int dummy; } ;
typedef scalar_t__ (* snmp_verify_inoid_f ) (struct snmp_toolinfo*,struct snmp_object*,char*) ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct snmp_object*,int ) ;
 scalar_t__ VAR_1 ;
 struct snmp_object* FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (struct snmp_object*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,char*) ;

int32_t
FUNC_6(struct snmp_toolinfo *VAR_4, snmp_verify_inoid_f VAR_5,
    char *VAR_6)
{
 struct snmp_object *VAR_7;

 if (VAR_4 == ((void*)0))
  return (-1);


 if (VAR_4->objects >= VAR_1) {
  FUNC_5("Too many bindings in PDU - %u", VAR_4->objects + 1);
  return (-1);
 }

 if ((VAR_7 = FUNC_1(1, sizeof(struct snmp_object))) == ((void*)0)) {
  FUNC_4(VAR_0, "malloc() failed: %s", FUNC_3(VAR_2));
  return (-1);
 }

 if (VAR_5(VAR_4, VAR_7, VAR_6) < 0) {
  FUNC_5("Invalid OID - %s", VAR_6);
  FUNC_2(VAR_7);
  return (-1);
 }

 VAR_4->objects++;
 FUNC_0(&VAR_4->snmp_objectlist, VAR_7, VAR_3);

 return (1);
}
