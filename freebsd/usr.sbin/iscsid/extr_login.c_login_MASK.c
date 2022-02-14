
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdu {scalar_t__ pdu_bhs; } ;
struct keys {char const** keys_names; int * keys_values; } ;
struct iscsi_bhs_login_response {int bhslr_flags; } ;
struct TYPE_2__ {char* isc_mutual_user; char* isc_user; char* isc_initiator; char* isc_initiator_alias; scalar_t__ isc_discovery; char* isc_target; char* isc_secret; } ;
struct connection {TYPE_1__ conn_conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct connection*,char*) ;
 int FUNC_1 (struct keys*,char*,char*) ;
 int FUNC_2 (struct keys*) ;
 char* FUNC_3 (struct keys*,char*) ;
 int FUNC_4 (struct keys*,struct pdu*) ;
 struct keys* FUNC_5 () ;
 int FUNC_6 (struct keys*,struct pdu*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (struct connection*) ;
 int FUNC_10 (struct connection*) ;
 int FUNC_11 (struct connection*,char const*,int ) ;
 struct pdu* FUNC_12 (struct connection*,int ) ;
 scalar_t__ FUNC_13 (struct pdu*) ;
 struct pdu* FUNC_14 (struct connection*) ;
 int FUNC_15 (struct pdu*) ;
 int FUNC_16 (struct pdu*) ;
 scalar_t__ FUNC_17 (char const*,char*) ;

void
FUNC_18(struct connection *VAR_4)
{
 struct pdu *VAR_5, *VAR_6;
 struct keys *VAR_7, *VAR_8;
 struct iscsi_bhs_login_response *VAR_9;
 const char *VAR_10;
 int VAR_11;

 FUNC_7("beginning Login phase; sending Login PDU");
 VAR_5 = FUNC_12(VAR_4, VAR_2);
 VAR_7 = FUNC_5();
 if (VAR_4->conn_conf.isc_mutual_user[0] != '\0') {
  FUNC_1(VAR_7, "AuthMethod", "CHAP");
 } else if (VAR_4->conn_conf.isc_user[0] != '\0') {
  FUNC_1(VAR_7, "AuthMethod", "None,CHAP");
 } else {
  FUNC_1(VAR_7, "AuthMethod", "None");
 }
 FUNC_1(VAR_7, "InitiatorName",
     VAR_4->conn_conf.isc_initiator);
 if (VAR_4->conn_conf.isc_initiator_alias[0] != '\0') {
  FUNC_1(VAR_7, "InitiatorAlias",
      VAR_4->conn_conf.isc_initiator_alias);
 }
 if (VAR_4->conn_conf.isc_discovery == 0) {
  FUNC_1(VAR_7, "SessionType", "Normal");
  FUNC_1(VAR_7,
      "TargetName", VAR_4->conn_conf.isc_target);
 } else {
  FUNC_1(VAR_7, "SessionType", "Discovery");
 }
 FUNC_6(VAR_7, VAR_5);
 FUNC_2(VAR_7);
 FUNC_16(VAR_5);
 FUNC_15(VAR_5);

 VAR_6 = FUNC_14(VAR_4);

 VAR_8 = FUNC_5();
 FUNC_4(VAR_8, VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_8->keys_names[VAR_11] == ((void*)0))
   break;
  if (FUNC_17(VAR_8->keys_names[VAR_11], "AuthMethod") == 0)
   continue;

  FUNC_11(VAR_4,
      VAR_8->keys_names[VAR_11], VAR_8->keys_values[VAR_11]);
 }

 VAR_9 = (struct iscsi_bhs_login_response *)VAR_6->pdu_bhs;
 if ((VAR_9->bhslr_flags & VAR_0) != 0 &&
     FUNC_13(VAR_6) == VAR_1) {
  if (VAR_4->conn_conf.isc_mutual_user[0] != '\0') {
   FUNC_8(1, "target requested transition "
       "to operational parameter negotiation, "
       "but we require mutual CHAP");
  }

  FUNC_7("target requested transition "
      "to operational parameter negotiation");
  FUNC_2(VAR_8);
  FUNC_15(VAR_6);
  FUNC_10(VAR_4);
  return;
 }

 VAR_10 = FUNC_3(VAR_8, "AuthMethod");
 if (VAR_10 == ((void*)0))
  FUNC_8(1, "received response without AuthMethod");
 if (FUNC_17(VAR_10, "None") == 0) {
  if (VAR_4->conn_conf.isc_mutual_user[0] != '\0') {
   FUNC_8(1, "target does not require authantication, "
       "but we require mutual CHAP");
  }

  FUNC_7("target does not require authentication");
  FUNC_2(VAR_8);
  FUNC_15(VAR_6);
  FUNC_10(VAR_4);
  return;
 }

 if (FUNC_17(VAR_10, "CHAP") != 0) {
  FUNC_0(VAR_4, "Unsupported AuthMethod");
  FUNC_8(1, "received response "
      "with unsupported AuthMethod \"%s\"", VAR_10);
 }

 if (VAR_4->conn_conf.isc_user[0] == '\0' ||
     VAR_4->conn_conf.isc_secret[0] == '\0') {
  FUNC_0(VAR_4, "Authentication required");
  FUNC_8(1, "target requests CHAP authentication, but we don't "
      "have user and secret");
 }

 FUNC_2(VAR_8);
 VAR_8 = ((void*)0);
 FUNC_15(VAR_6);
 VAR_6 = ((void*)0);

 FUNC_9(VAR_4);
 FUNC_10(VAR_4);
}
