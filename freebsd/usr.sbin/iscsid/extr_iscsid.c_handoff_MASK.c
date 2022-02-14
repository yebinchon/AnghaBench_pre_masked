
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_daemon_handoff {int idh_first_burst_length; int idh_max_burst_length; int idh_max_send_data_segment_length; int idh_max_recv_data_segment_length; int idh_immediate_data; int idh_initial_r2t; int idh_data_digest; int idh_header_digest; int idh_statsn; int idh_tsih; int idh_target_alias; int idh_socket; int idh_session_id; } ;
struct connection {int conn_iscsi_fd; int conn_first_burst_length; int conn_max_burst_length; int conn_max_send_data_segment_length; int conn_max_recv_data_segment_length; int conn_immediate_data; int conn_initial_r2t; int conn_data_digest; int conn_header_digest; int conn_statsn; int conn_tsih; int conn_target_alias; int conn_socket; int conn_session_id; } ;
typedef int idh ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct iscsi_daemon_handoff*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct iscsi_daemon_handoff*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct connection *VAR_1)
{
 struct iscsi_daemon_handoff VAR_2;
 int VAR_3;

 FUNC_1("handing off connection to the kernel");

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.idh_session_id = VAR_1->conn_session_id;
 VAR_2.idh_socket = VAR_1->conn_socket;
 FUNC_4(VAR_2.idh_target_alias, VAR_1->conn_target_alias,
     sizeof(VAR_2.idh_target_alias));
 VAR_2.idh_tsih = VAR_1->conn_tsih;
 VAR_2.idh_statsn = VAR_1->conn_statsn;
 VAR_2.idh_header_digest = VAR_1->conn_header_digest;
 VAR_2.idh_data_digest = VAR_1->conn_data_digest;
 VAR_2.idh_initial_r2t = VAR_1->conn_initial_r2t;
 VAR_2.idh_immediate_data = VAR_1->conn_immediate_data;
 VAR_2.idh_max_recv_data_segment_length =
     VAR_1->conn_max_recv_data_segment_length;
 VAR_2.idh_max_send_data_segment_length =
     VAR_1->conn_max_send_data_segment_length;
 VAR_2.idh_max_burst_length = VAR_1->conn_max_burst_length;
 VAR_2.idh_first_burst_length = VAR_1->conn_first_burst_length;

 VAR_3 = FUNC_0(VAR_1->conn_iscsi_fd, VAR_0, &VAR_2);
 if (VAR_3 != 0)
  FUNC_2(1, "ISCSIDHANDOFF");
}
