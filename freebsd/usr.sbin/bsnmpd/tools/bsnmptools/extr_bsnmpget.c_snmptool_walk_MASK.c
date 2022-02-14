
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct snmp_toolinfo {int dummy; } ;
struct snmp_pdu {int nbindings; TYPE_1__* bindings; } ;
struct asn_oid {int dummy; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {struct asn_oid var; } ;


 int FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_2 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct asn_oid*,struct asn_oid*) ;
 int FUNC_4 (struct asn_oid*,int ,int) ;
 scalar_t__ FUNC_5 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_6 (struct snmp_toolinfo*,struct asn_oid*) ;
 int FUNC_7 (struct snmp_toolinfo*,struct snmp_pdu*) ;
 scalar_t__ FUNC_8 (struct snmp_toolinfo*,struct snmp_pdu*,struct asn_oid*) ;
 scalar_t__ FUNC_9 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_10 (struct snmp_toolinfo*,int *,int ,struct snmp_pdu*,int) ;
 int FUNC_11 (struct snmp_pdu*,scalar_t__) ;
 int FUNC_12 (struct snmp_pdu*) ;
 int FUNC_13 (struct snmp_pdu*,int ,int ) ;
 int VAR_4 ;
 int FUNC_14 (scalar_t__,struct asn_oid*,struct snmp_pdu*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(struct snmp_toolinfo *VAR_5)
{
 struct snmp_pdu VAR_6, VAR_7;
 struct asn_oid VAR_8;
 int32_t VAR_9, VAR_10;
 uint32_t VAR_11;

 if (FUNC_2(VAR_5) == VAR_2)
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_3;

 FUNC_11(&VAR_6, VAR_11);

 while ((VAR_10 = FUNC_10(VAR_5, ((void*)0),
     VAR_4, &VAR_6, 1)) > 0) {


  FUNC_4(&VAR_8, 0, sizeof(struct asn_oid));
  FUNC_3(&VAR_8, &(VAR_6.bindings[0].var));

  if (VAR_11 == VAR_2)
   FUNC_13(&VAR_6, FUNC_0(VAR_5),
       FUNC_1(VAR_5));

  VAR_9 = 0;
  while (FUNC_5(&VAR_6, &VAR_7) >= 0) {
   if ((FUNC_9(&VAR_7, &VAR_6)) < 0) {
    FUNC_7(VAR_5, &VAR_7);
    FUNC_12(&VAR_7);
    VAR_9 = -1;
    break;
   }

   VAR_10 = FUNC_8(VAR_5, &VAR_7, &VAR_8);
   if (VAR_10 < 0) {
    FUNC_12(&VAR_7);
    VAR_9 = -1;
    break;
   }

   VAR_9 += VAR_10;

   if ((u_int)VAR_10 < VAR_7.nbindings) {
    FUNC_12(&VAR_7);
    break;
   }

   FUNC_14(VAR_11,
       &(VAR_7.bindings[VAR_7.nbindings - 1].var), &VAR_6);
   if (VAR_11 == VAR_2)
    FUNC_13(&VAR_6, FUNC_0(VAR_5),
        FUNC_1(VAR_5));
   FUNC_12(&VAR_7);
  }


  if (VAR_9 == 0) {
   FUNC_14(VAR_1, &VAR_8, &VAR_6);
   if (FUNC_5(&VAR_6, &VAR_7) == VAR_0) {
    if (FUNC_9(&VAR_7, &VAR_6) < 0)
     FUNC_7(VAR_5, &VAR_7);
    else
     FUNC_8(VAR_5, &VAR_7,
         ((void*)0));
    FUNC_12(&VAR_7);
   } else
    FUNC_15("Snmp dialog");
  }

  if (FUNC_6(VAR_5, &VAR_8) < 0) {
   FUNC_16("snmp_object_remove");
   break;
  }

  FUNC_12(&VAR_6);
  FUNC_11(&VAR_6, VAR_11);
 }

 FUNC_12(&VAR_6);

 if (VAR_10 == 0)
  return (0);
 else
  return (1);
}
