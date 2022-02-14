
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct snmp_pdu {int error_index; int error_status; int * bindings; } ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_4 (struct snmp_toolinfo*,int *,int ) ;
 int FUNC_5 (struct snmp_toolinfo*,struct snmp_pdu*) ;
 int FUNC_6 (struct snmp_toolinfo*,struct snmp_pdu*,int *) ;
 scalar_t__ FUNC_7 (struct snmp_toolinfo*,int ,int ,struct snmp_pdu*,int ) ;
 scalar_t__ FUNC_8 (struct snmp_pdu*,struct snmp_pdu*) ;
 int FUNC_9 (struct snmp_pdu*,int ) ;
 int FUNC_10 (struct snmp_pdu*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(struct snmp_toolinfo *VAR_6)
{
 struct snmp_pdu VAR_7, VAR_8;

 FUNC_9(&VAR_7, VAR_2);

 while ((FUNC_7(VAR_6, VAR_4,
     VAR_3, &VAR_7, VAR_1)) > 0) {
  if (FUNC_3(&VAR_7, &VAR_8)) {
   FUNC_11("Snmp dialog");
   break;
  }

  if (FUNC_8(&VAR_7, &VAR_8) > 0) {
   if (FUNC_0(VAR_6) != VAR_0)
    FUNC_6(VAR_6, &VAR_8, ((void*)0));
   FUNC_10(&VAR_8);
   break;
  }

  FUNC_5(VAR_6, &VAR_8);
  if (!FUNC_1(VAR_6)) {
   FUNC_10(&VAR_8);
   break;
  }

  if (FUNC_4(VAR_6,
      &(VAR_8.bindings[VAR_8.error_index - 1]),
      VAR_8.error_status) <= 0) {
   FUNC_10(&VAR_8);
   break;
  }

  FUNC_2(VAR_5, "Retrying...\n");
  FUNC_10(&VAR_7);
  FUNC_9(&VAR_7, VAR_2);
 }

 FUNC_10(&VAR_7);

 return (0);
}
