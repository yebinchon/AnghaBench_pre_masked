
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pdu {scalar_t__ pdu_bhs; } ;
struct keys {int * keys_values; int ** keys_names; } ;
struct iscsi_bhs_login_response {int bhslr_tsih; } ;
struct connection {scalar_t__ conn_session_type; int conn_max_recv_data_segment_limit; int conn_max_send_data_segment_limit; int conn_max_burst_limit; int conn_first_burst_limit; int conn_max_send_data_segment_length; scalar_t__ conn_first_burst_length; scalar_t__ conn_max_burst_length; TYPE_3__* conn_portal; TYPE_1__* conn_target; } ;
struct TYPE_6__ {TYPE_2__* p_portal_group; } ;
struct TYPE_5__ {int pg_tag; int pg_offload; } ;
struct TYPE_4__ {int * t_alias; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int*,int*,int*) ;
 int FUNC_4 (struct keys*,char*,int *) ;
 int FUNC_5 (struct keys*,char*,int ) ;
 int FUNC_6 (struct keys*) ;
 int FUNC_7 (struct keys*,struct pdu*) ;
 struct keys* FUNC_8 () ;
 int FUNC_9 (struct keys*,struct pdu*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (struct pdu*,int *,int ,int,struct keys*) ;
 struct pdu* FUNC_13 (struct pdu*) ;
 struct pdu* FUNC_14 (struct connection*,int) ;
 int FUNC_15 (struct pdu*,int ) ;
 int FUNC_16 (struct pdu*,int ) ;
 int FUNC_17 (struct connection*,struct pdu*) ;
 int FUNC_18 (struct pdu*) ;
 int FUNC_19 (struct pdu*) ;

__attribute__((used)) static void
FUNC_20(struct connection *VAR_5, struct pdu *VAR_6)
{
 struct pdu *VAR_7;
 struct iscsi_bhs_login_response *VAR_8;
 struct keys *VAR_9, *VAR_10;
 int VAR_11;
 bool VAR_12, VAR_13;

 if (VAR_5->conn_session_type == VAR_2) {




  FUNC_0(VAR_5->conn_target != ((void*)0));
  VAR_5->conn_max_recv_data_segment_limit = (1 << 24) - 1;
  VAR_5->conn_max_send_data_segment_limit = (1 << 24) - 1;
  VAR_5->conn_max_burst_limit = (1 << 24) - 1;
  VAR_5->conn_first_burst_limit = (1 << 24) - 1;
  FUNC_3(VAR_5->conn_portal->p_portal_group->pg_offload,
      &VAR_5->conn_max_recv_data_segment_limit,
      &VAR_5->conn_max_send_data_segment_limit,
      &VAR_5->conn_max_burst_limit,
      &VAR_5->conn_first_burst_limit);


  FUNC_0(VAR_5->conn_max_recv_data_segment_limit >= 512);
  FUNC_0(VAR_5->conn_max_recv_data_segment_limit < (1 << 24));
  FUNC_0(VAR_5->conn_max_send_data_segment_limit >= 512);
  FUNC_0(VAR_5->conn_max_send_data_segment_limit < (1 << 24));
  FUNC_0(VAR_5->conn_max_burst_limit >= 512);
  FUNC_0(VAR_5->conn_max_burst_limit < (1 << 24));
  FUNC_0(VAR_5->conn_first_burst_limit >= 512);
  FUNC_0(VAR_5->conn_first_burst_limit < (1 << 24));
  FUNC_0(VAR_5->conn_first_burst_limit <=
      VAR_5->conn_max_burst_limit);






  if (VAR_5->conn_max_send_data_segment_limit <
      VAR_5->conn_max_send_data_segment_length) {
   VAR_5->conn_max_send_data_segment_length =
       VAR_5->conn_max_send_data_segment_limit;
  }
 } else {
  VAR_5->conn_max_recv_data_segment_limit =
      VAR_4;
  VAR_5->conn_max_send_data_segment_limit =
      VAR_4;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_10("beginning operational parameter negotiation; "
      "waiting for Login PDU");
  VAR_6 = FUNC_14(VAR_5, 0);
  VAR_13 = 0;
 } else
  VAR_13 = 1;







 VAR_12 = FUNC_17(VAR_5, VAR_6);
 if (VAR_12) {
  FUNC_10("initiator redirected; exiting");
  FUNC_1(0);
 }

 VAR_9 = FUNC_8();
 FUNC_7(VAR_9, VAR_6);

 VAR_7 = FUNC_13(VAR_6);
 VAR_8 = (struct iscsi_bhs_login_response *)VAR_7->pdu_bhs;
 VAR_8->bhslr_tsih = FUNC_2(0xbadd);
 FUNC_15(VAR_7, VAR_1);
 FUNC_16(VAR_7, VAR_0);
 VAR_10 = FUNC_8();

 if (VAR_13 &&
     VAR_5->conn_session_type == VAR_2) {
  if (VAR_5->conn_target->t_alias != ((void*)0))
   FUNC_4(VAR_10,
       "TargetAlias", VAR_5->conn_target->t_alias);
  FUNC_5(VAR_10, "TargetPortalGroupTag",
      VAR_5->conn_portal->p_portal_group->pg_tag);
 }

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_9->keys_names[VAR_11] == ((void*)0))
   break;

  FUNC_12(VAR_6, VAR_9->keys_names[VAR_11],
      VAR_9->keys_values[VAR_11], VAR_13,
      VAR_10);
 }
 if (VAR_5->conn_session_type == VAR_2 &&
     VAR_5->conn_first_burst_length > VAR_5->conn_max_burst_length) {
  FUNC_11(1, "initiator sent FirstBurstLength > MaxBurstLength");
 }

 FUNC_10("operational parameter negotiation done; "
     "transitioning to Full Feature Phase");

 FUNC_9(VAR_10, VAR_7);
 FUNC_19(VAR_7);
 FUNC_18(VAR_7);
 FUNC_6(VAR_10);
 FUNC_18(VAR_6);
 FUNC_6(VAR_9);
}
