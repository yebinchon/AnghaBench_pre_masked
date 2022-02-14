
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snmp_toolinfo {scalar_t__ objects; int passwd; } ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ engine_len; int engine_id; } ;
struct TYPE_4__ {scalar_t__ version; TYPE_1__ engine; int user; } ;





 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_2 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_3 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_5 ;
 char* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_11 (struct snmp_toolinfo*,int ,char*) ;
 scalar_t__ FUNC_12 (int *,int *,int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int *,int ) ;
 int FUNC_16 (struct snmp_toolinfo*) ;
 int VAR_8 ;
 int FUNC_17 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_18 (struct snmp_toolinfo*) ;
 int FUNC_19 (struct snmp_toolinfo*,int,char**) ;
 int FUNC_20 (struct snmp_toolinfo*) ;
 int FUNC_21 (struct snmp_toolinfo*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_22 (char*,char*) ;
 char* FUNC_23 (char*,char) ;
 int FUNC_24 () ;
 int FUNC_25 (char*) ;

int
FUNC_26(int VAR_12, char ** VAR_13)
{
 struct snmp_toolinfo VAR_14;
 int32_t VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0;


 if (*VAR_13 == ((void*)0))
  VAR_6 = "snmptool";
 else {
  VAR_6 = FUNC_23(*VAR_13, '/');
  if (VAR_6 != ((void*)0))
   VAR_6++;
  else
   VAR_6 = *VAR_13;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_6(VAR_11, "Error: No program name?\n");
  FUNC_5 (1);
 } else if (FUNC_22(VAR_6, "bsnmpget") == 0)
  VAR_5 = 130;
 else if (FUNC_22(VAR_6, "bsnmpwalk") == 0)
  VAR_5 = 128;
 else if (FUNC_22(VAR_6, "bsnmpset") == 0)
  VAR_5 = 129;
 else {
  FUNC_6(VAR_11, "Unknown snmp tool name '%s'.\n", VAR_6);
  FUNC_5 (1);
 }


 if (FUNC_18(&VAR_14) < 0)
  FUNC_5 (1);

 if ((VAR_17 = FUNC_19(&VAR_14, VAR_12, VAR_13)) < 0) {
  FUNC_16(&VAR_14);

  if (VAR_17 == -2)
   FUNC_5(0);
  else
   FUNC_5(1);
 }

 VAR_15 = VAR_12 - VAR_17 - 1;
 if (VAR_15 == 0) {
  switch (VAR_5) {
  case 130:
   if (!FUNC_2(&VAR_14) &&
       !FUNC_3(&VAR_14)) {
    FUNC_6(VAR_11, "No OID given.\n");
    FUNC_24();
    FUNC_16(&VAR_14);
    FUNC_5(1);
   }
   break;

  case 128:
   if (FUNC_11(&VAR_14, VAR_10,
       ((void*)0)) < 0) {
    FUNC_6(VAR_11,
        "Error setting default subtree.\n");
    FUNC_16(&VAR_14);
    FUNC_5(1);
   }
   break;

  case 129:
   FUNC_6(VAR_11, "No OID given.\n");
   FUNC_24();
   FUNC_16(&VAR_14);
   FUNC_5(1);
  }
 }

 if (FUNC_10(&VAR_14) < 0) {
  FUNC_16(&VAR_14);
  FUNC_5(1);
 }


 if (VAR_5 == 130 && VAR_7.version == VAR_3 &&
     FUNC_1(&VAR_14) == VAR_2) {
  FUNC_6(VAR_11, "Cannot send GETBULK PDU with SNMPv1.\n");
  FUNC_16(&VAR_14);
  FUNC_5(1);
 }

 for (VAR_16 = VAR_12 - 1; VAR_15 > 0; VAR_16--, VAR_15--) {
  if ((FUNC_11(&VAR_14, (VAR_5 == 129) ?
      VAR_8 : VAR_9,
      VAR_13[VAR_16])) < 0) {
   FUNC_6(VAR_11, "Error parsing OID string '%s'.\n",
       VAR_13[VAR_16]);
   FUNC_16(&VAR_14);
   FUNC_5(1);
  }
 }

 if (FUNC_12(((void*)0), ((void*)0), ((void*)0), ((void*)0))) {
  FUNC_25("Failed to open snmp session");
  FUNC_16(&VAR_14);
  FUNC_5(1);
 }

 if (VAR_7.version == VAR_4 && VAR_7.engine.engine_len == 0)
  FUNC_4(&VAR_14);

 if (FUNC_2(&VAR_14) &&
     FUNC_8(VAR_14.passwd) < 0) {
  FUNC_25("Unknown SNMP Engine ID");
  VAR_18 = 1;
  goto cleanup;
 }

 if (FUNC_0(&VAR_14) == VAR_0 ||
     FUNC_2(&VAR_14))
  FUNC_13();

 if (VAR_7.version == VAR_4 && FUNC_3(&VAR_14) &&
     !FUNC_2(&VAR_14)) {
  if (FUNC_15(&VAR_7.user,
      VAR_14.passwd) != VAR_1 ||
      FUNC_9(&VAR_7.user,
      VAR_7.engine.engine_id,
      VAR_7.engine.engine_len) != VAR_1) {
       FUNC_25("Failed to get keys");
   VAR_18 = 1;
   goto cleanup;
  }
 }

 if (FUNC_0(&VAR_14) == VAR_0 ||
     FUNC_2(&VAR_14))
  FUNC_14();

 if (FUNC_2(&VAR_14) && VAR_14.objects == 0)
  goto cleanup;

 switch (VAR_5) {
 case 130:
  VAR_18 = FUNC_17(&VAR_14);
  break;
 case 128:
  VAR_18 = FUNC_21(&VAR_14);
  break;
 case 129:
  VAR_18 = FUNC_20(&VAR_14);
  break;
 }


cleanup:
 FUNC_16(&VAR_14);
 FUNC_7();

 FUNC_5(VAR_18);
}
