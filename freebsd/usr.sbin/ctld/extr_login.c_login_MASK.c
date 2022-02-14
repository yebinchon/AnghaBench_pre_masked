
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct portal_group {int pg_tag; struct auth_group* pg_discovery_auth_group; } ;
struct pdu {scalar_t__ pdu_bhs; } ;
struct keys {int dummy; } ;
struct iscsi_bhs_login_request {scalar_t__ bhslr_tsih; int bhslr_flags; int bhslr_isid; } ;
struct connection {scalar_t__ conn_session_type; TYPE_2__* conn_target; int conn_initiator_sa; TYPE_3__* conn_port; void* conn_initiator_alias; int * conn_initiator_name; int conn_initiator_addr; int conn_initiator_isid; TYPE_1__* conn_portal; } ;
struct auth_group {scalar_t__ ag_type; int * ag_name; } ;
struct TYPE_6__ {struct auth_group* p_auth_group; TYPE_2__* p_target; } ;
struct TYPE_5__ {char* t_alias; int t_name; struct auth_group* t_auth_group; } ;
struct TYPE_4__ {struct portal_group* p_portal_group; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct auth_group*,char const*) ;
 scalar_t__ FUNC_2 (struct auth_group*,int *) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct keys*,char*,char*) ;
 int FUNC_6 (struct keys*,char*,int ) ;
 int FUNC_7 (struct keys*) ;
 char* FUNC_8 (struct keys*,char*) ;
 int FUNC_9 (struct keys*,struct pdu*) ;
 struct keys* FUNC_10 () ;
 int FUNC_11 (struct keys*,struct pdu*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 (struct connection*,struct auth_group*) ;
 scalar_t__ FUNC_17 (struct pdu*) ;
 scalar_t__ FUNC_18 (char const*,char*) ;
 int FUNC_19 (struct connection*,struct pdu*) ;
 struct pdu* FUNC_20 (struct pdu*) ;
 int FUNC_21 (struct connection*,struct pdu*) ;
 struct pdu* FUNC_22 (struct connection*,int) ;
 int FUNC_23 (struct pdu*,int,int) ;
 int FUNC_24 (struct pdu*,scalar_t__) ;
 int FUNC_25 (struct connection*) ;
 int FUNC_26 (int ,int ,int) ;
 int FUNC_27 (struct pdu*) ;
 int FUNC_28 (struct pdu*) ;
 TYPE_3__* FUNC_29 (struct portal_group*,char const*) ;
 int FUNC_30 (char*,int ,int *) ;
 scalar_t__ FUNC_31 (char const*,char*) ;
 int FUNC_32 (char const*) ;

void
FUNC_33(struct connection *VAR_8)
{
 struct pdu *VAR_9, *VAR_10;
 struct iscsi_bhs_login_request *VAR_11;
 struct keys *VAR_12, *VAR_13;
 struct auth_group *VAR_14;
 struct portal_group *VAR_15;
 const char *VAR_16, *VAR_17, *VAR_18,
     *VAR_19, *VAR_20;
 bool VAR_21, VAR_22, VAR_23;






 FUNC_12("beginning Login Phase; waiting for Login PDU");
 VAR_9 = FUNC_22(VAR_8, 1);
 VAR_11 = (struct iscsi_bhs_login_request *)VAR_9->pdu_bhs;
 if (VAR_11->bhslr_tsih != 0) {
  FUNC_23(VAR_9, 0x02, 0x0a);
  FUNC_13(1, "received Login PDU with non-zero TSIH");
 }

 VAR_15 = VAR_8->conn_portal->p_portal_group;

 FUNC_26(VAR_8->conn_initiator_isid, VAR_11->bhslr_isid,
     sizeof(VAR_8->conn_initiator_isid));




 VAR_12 = FUNC_10();
 FUNC_9(VAR_12, VAR_9);

 FUNC_0(VAR_8->conn_initiator_name == ((void*)0));
 VAR_16 = FUNC_8(VAR_12, "InitiatorName");
 if (VAR_16 == ((void*)0)) {
  FUNC_23(VAR_9, 0x02, 0x07);
  FUNC_13(1, "received Login PDU without InitiatorName");
 }
 if (FUNC_32(VAR_16) == 0) {
  FUNC_23(VAR_9, 0x02, 0x00);
  FUNC_13(1, "received Login PDU with invalid InitiatorName");
 }
 VAR_8->conn_initiator_name = FUNC_3(VAR_16);
 FUNC_14(VAR_8->conn_initiator_name);
 FUNC_30("%s (%s)", VAR_8->conn_initiator_addr, VAR_8->conn_initiator_name);

 VAR_21 = FUNC_21(VAR_8, VAR_9);
 if (VAR_21) {
  FUNC_12("initiator redirected; exiting");
  FUNC_4(0);
 }

 VAR_17 = FUNC_8(VAR_12, "InitiatorAlias");
 if (VAR_17 != ((void*)0))
  VAR_8->conn_initiator_alias = FUNC_3(VAR_17);

 FUNC_0(VAR_8->conn_session_type == VAR_6);
 VAR_18 = FUNC_8(VAR_12, "SessionType");
 if (VAR_18 != ((void*)0)) {
  if (FUNC_31(VAR_18, "Normal") == 0) {
   VAR_8->conn_session_type = VAR_7;
  } else if (FUNC_31(VAR_18, "Discovery") == 0) {
   VAR_8->conn_session_type = VAR_5;
  } else {
   FUNC_23(VAR_9, 0x02, 0x00);
   FUNC_13(1, "received Login PDU with invalid "
       "SessionType \"%s\"", VAR_18);
  }
 } else
  VAR_8->conn_session_type = VAR_7;

 FUNC_0(VAR_8->conn_target == ((void*)0));
 if (VAR_8->conn_session_type == VAR_7) {
  VAR_19 = FUNC_8(VAR_12, "TargetName");
  if (VAR_19 == ((void*)0)) {
   FUNC_23(VAR_9, 0x02, 0x07);
   FUNC_13(1, "received Login PDU without TargetName");
  }

  VAR_8->conn_port = FUNC_29(VAR_15, VAR_19);
  if (VAR_8->conn_port == ((void*)0)) {
   FUNC_23(VAR_9, 0x02, 0x03);
   FUNC_13(1, "requested target \"%s\" not found",
       VAR_19);
  }
  VAR_8->conn_target = VAR_8->conn_port->p_target;
 }




 if (VAR_8->conn_session_type == VAR_7) {
  VAR_14 = VAR_8->conn_port->p_auth_group;
  if (VAR_14 == ((void*)0))
   VAR_14 = VAR_8->conn_target->t_auth_group;
  if (VAR_14->ag_name != ((void*)0)) {
   FUNC_12("initiator requests to connect "
       "to target \"%s\"; auth-group \"%s\"",
       VAR_8->conn_target->t_name,
       VAR_14->ag_name);
  } else {
   FUNC_12("initiator requests to connect "
       "to target \"%s\"", VAR_8->conn_target->t_name);
  }
 } else {
  FUNC_0(VAR_8->conn_session_type == VAR_5);
  VAR_14 = VAR_15->pg_discovery_auth_group;
  if (VAR_14->ag_name != ((void*)0)) {
   FUNC_12("initiator requests "
       "discovery session; auth-group \"%s\"", VAR_14->ag_name);
  } else {
   FUNC_12("initiator requests discovery session");
  }
 }

 if (VAR_14->ag_type == VAR_0) {
  FUNC_23(VAR_9, 0x02, 0x01);
  FUNC_13(1, "auth-type is \"deny\"");
 }

 if (VAR_14->ag_type == VAR_2) {



  FUNC_23(VAR_9, 0x02, 0x01);
  FUNC_13(1, "auth-type not set, denying access");
 }




 if (FUNC_1(VAR_14, VAR_16) != 0) {
  FUNC_23(VAR_9, 0x02, 0x02);
  FUNC_13(1, "initiator does not match allowed initiator names");
 }

 if (FUNC_2(VAR_14, &VAR_8->conn_initiator_sa) != 0) {
  FUNC_23(VAR_9, 0x02, 0x02);
  FUNC_13(1, "initiator does not match allowed "
      "initiator portals");
 }





 if (FUNC_17(VAR_9) == VAR_4) {
  if (VAR_14->ag_type != VAR_1) {
   FUNC_23(VAR_9, 0x02, 0x01);
   FUNC_13(1, "initiator skipped the authentication, "
       "but authentication is required");
  }

  FUNC_7(VAR_12);

  FUNC_12("initiator skipped the authentication, "
      "and we don't need it; proceeding with negotiation");
  FUNC_19(VAR_8, VAR_9);
  return;
 }

 VAR_22 = 0;
 VAR_10 = FUNC_20(VAR_9);
 VAR_13 = FUNC_10();
 VAR_23 = (VAR_11->bhslr_flags & VAR_3) != 0;
 VAR_20 = FUNC_8(VAR_12, "AuthMethod");
 if (VAR_14->ag_type == VAR_1) {
  FUNC_12("authentication not required");
  if (VAR_20 == ((void*)0) ||
      FUNC_18(VAR_20, "None")) {
   FUNC_5(VAR_13, "AuthMethod", "None");
  } else {
   FUNC_15("initiator requests "
       "AuthMethod \"%s\" instead of \"None\"",
       VAR_20);
   FUNC_5(VAR_13, "AuthMethod", "Reject");
  }
  if (VAR_23)
   FUNC_24(VAR_10, VAR_4);
 } else {
  FUNC_12("CHAP authentication required");
  if (VAR_20 == ((void*)0) ||
      FUNC_18(VAR_20, "CHAP")) {
   FUNC_5(VAR_13, "AuthMethod", "CHAP");
  } else {
   FUNC_15("initiator requests unsupported "
       "AuthMethod \"%s\" instead of \"CHAP\"",
       VAR_20);
   FUNC_5(VAR_13, "AuthMethod", "Reject");
   VAR_22 = 1;
  }
 }
 if (VAR_8->conn_session_type == VAR_7) {
  if (VAR_8->conn_target->t_alias != ((void*)0))
   FUNC_5(VAR_13,
       "TargetAlias", VAR_8->conn_target->t_alias);
  FUNC_6(VAR_13,
      "TargetPortalGroupTag", VAR_15->pg_tag);
 }
 FUNC_11(VAR_13, VAR_10);

 FUNC_28(VAR_10);
 FUNC_27(VAR_10);
 FUNC_7(VAR_13);
 FUNC_27(VAR_9);
 FUNC_7(VAR_12);

 if (VAR_22) {
  FUNC_12("sent reject for AuthMethod; exiting");
  FUNC_4(1);
 }

 if (VAR_14->ag_type != VAR_1) {
  FUNC_16(VAR_8, VAR_14);
  FUNC_19(VAR_8, ((void*)0));
 } else if (VAR_23) {
  FUNC_19(VAR_8, ((void*)0));
 } else {
  FUNC_25(VAR_8);
 }
}
