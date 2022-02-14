
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int immediate_data; int first_burst_length; int max_burst_length; int max_send_data_segment_length; int max_recv_data_segment_length; int statsn; int cmdsn; void* data_digest; void* header_digest; int portal_group_tag; int socket; int connection_id; int offload; int target_name; int initiator_isid; int initiator_alias; int initiator_addr; int initiator_name; } ;
struct TYPE_10__ {TYPE_4__ handoff; } ;
struct ctl_iscsi {scalar_t__ status; int error_str; TYPE_5__ data; int type; } ;
struct connection {scalar_t__ conn_header_digest; scalar_t__ conn_data_digest; int conn_immediate_data; int conn_first_burst_length; int conn_max_burst_length; int conn_max_send_data_segment_length; int conn_max_recv_data_segment_length; int conn_statsn; int conn_cmdsn; TYPE_3__* conn_portal; int conn_socket; TYPE_1__* conn_target; int conn_initiator_isid; int * conn_initiator_alias; int * conn_initiator_addr; int * conn_initiator_name; } ;
typedef int req ;
struct TYPE_8__ {TYPE_2__* p_portal_group; } ;
struct TYPE_7__ {int pg_tag; int * pg_offload; } ;
struct TYPE_6__ {int * t_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ctl_iscsi*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct ctl_iscsi*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int *,int) ;

void
FUNC_6(struct connection *VAR_7)
{
 struct ctl_iscsi VAR_8;

 FUNC_0(&VAR_8, sizeof(VAR_8));

 VAR_8.type = VAR_3;
 FUNC_5(VAR_8.data.handoff.initiator_name,
     VAR_7->conn_initiator_name, sizeof(VAR_8.data.handoff.initiator_name));
 FUNC_5(VAR_8.data.handoff.initiator_addr,
     VAR_7->conn_initiator_addr, sizeof(VAR_8.data.handoff.initiator_addr));
 if (VAR_7->conn_initiator_alias != ((void*)0)) {
  FUNC_5(VAR_8.data.handoff.initiator_alias,
      VAR_7->conn_initiator_alias, sizeof(VAR_8.data.handoff.initiator_alias));
 }
 FUNC_4(VAR_8.data.handoff.initiator_isid, VAR_7->conn_initiator_isid,
     sizeof(VAR_8.data.handoff.initiator_isid));
 FUNC_5(VAR_8.data.handoff.target_name,
     VAR_7->conn_target->t_name, sizeof(VAR_8.data.handoff.target_name));
 if (VAR_7->conn_portal->p_portal_group->pg_offload != ((void*)0)) {
  FUNC_5(VAR_8.data.handoff.offload,
      VAR_7->conn_portal->p_portal_group->pg_offload,
      sizeof(VAR_8.data.handoff.offload));
 }






 VAR_8.data.handoff.socket = VAR_7->conn_socket;

 VAR_8.data.handoff.portal_group_tag =
     VAR_7->conn_portal->p_portal_group->pg_tag;
 if (VAR_7->conn_header_digest == VAR_0)
  VAR_8.data.handoff.header_digest = VAR_2;
 if (VAR_7->conn_data_digest == VAR_0)
  VAR_8.data.handoff.data_digest = VAR_2;
 VAR_8.data.handoff.cmdsn = VAR_7->conn_cmdsn;
 VAR_8.data.handoff.statsn = VAR_7->conn_statsn;
 VAR_8.data.handoff.max_recv_data_segment_length =
     VAR_7->conn_max_recv_data_segment_length;
 VAR_8.data.handoff.max_send_data_segment_length =
     VAR_7->conn_max_send_data_segment_length;
 VAR_8.data.handoff.max_burst_length = VAR_7->conn_max_burst_length;
 VAR_8.data.handoff.first_burst_length = VAR_7->conn_first_burst_length;
 VAR_8.data.handoff.immediate_data = VAR_7->conn_immediate_data;

 if (FUNC_1(VAR_5, VAR_1, &VAR_8) == -1) {
  FUNC_2(1, "error issuing CTL_ISCSI ioctl; "
      "dropping connection");
 }

 if (VAR_8.status != VAR_4) {
  FUNC_3(1, "error returned from CTL iSCSI handoff request: "
      "%s; dropping connection", VAR_8.error_str);
 }
}
