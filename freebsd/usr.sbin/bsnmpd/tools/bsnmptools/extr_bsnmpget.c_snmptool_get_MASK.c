
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct snmp_pdu {int error_index; int error_status; int * bindings; } ;


 int FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_2 (struct snmp_toolinfo*) ;
 int FUNC_3 (struct snmp_toolinfo*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_6 (struct snmp_toolinfo*,int *,int ) ;
 int FUNC_7 (struct snmp_toolinfo*,struct snmp_pdu*) ;
 int FUNC_8 (struct snmp_toolinfo*,struct snmp_pdu*,int *) ;
 scalar_t__ FUNC_9 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_10 (struct snmp_toolinfo*,int ,int ,struct snmp_pdu*,int ) ;
 int FUNC_11 (struct snmp_pdu*,scalar_t__) ;
 int FUNC_12 (struct snmp_pdu*) ;
 int FUNC_13 (struct snmp_pdu*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(struct snmp_toolinfo *VAR_5)
{
 struct snmp_pdu VAR_6, VAR_7;

 FUNC_11(&VAR_6, FUNC_2(VAR_5));

 while ((FUNC_10(VAR_5, VAR_2,
      VAR_3, &VAR_6, VAR_0)) > 0) {

  if (FUNC_2(VAR_5) == VAR_1)
   FUNC_13(&VAR_6, FUNC_0(VAR_5),
       FUNC_1(VAR_5));

  if (FUNC_5(&VAR_6, &VAR_7) == -1) {
   FUNC_14("Snmp dialog");
   break;
  }

  if (FUNC_9(&VAR_7, &VAR_6) >= 0) {
   FUNC_8(VAR_5, &VAR_7, ((void*)0));
   FUNC_12(&VAR_7);
   break;
  }

  FUNC_7(VAR_5, &VAR_7);
  if (FUNC_2(VAR_5) == VAR_1 ||
      !FUNC_3(VAR_5)) {
   FUNC_12(&VAR_7);
   break;
  }





  if (FUNC_6(VAR_5,
      &(VAR_7.bindings[VAR_7.error_index - 1]),
      VAR_7.error_status) <= 0) {
   FUNC_12(&VAR_7);
   break;
  }

  FUNC_4(VAR_4, "Retrying...\n");
  FUNC_12(&VAR_7);
  FUNC_11(&VAR_6, FUNC_2(VAR_5));
 }

 FUNC_12(&VAR_6);

 return (0);
}
