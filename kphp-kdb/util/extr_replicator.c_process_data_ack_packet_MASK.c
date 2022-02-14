
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_server_status {scalar_t__ handshake_id; scalar_t__ client_log_pos; scalar_t__ client_log_wrpos; scalar_t__ client_log_recvpos; } ;
struct repl_data_ack {scalar_t__ handshake_id; scalar_t__ binlog_written_pos; scalar_t__ binlog_received_pos; int session_id; } ;
struct connection {int remote_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct repl_server_status*) ;
 struct repl_server_status* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct repl_server_status*) ;
 int FUNC_3 (struct connection*,scalar_t__,int ,int ,char*) ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (int,char*,int ,int ,scalar_t__,int ,scalar_t__,scalar_t__) ;

int FUNC_6 (struct connection *VAR_2, struct repl_data_ack *VAR_3) {
  struct repl_server_status *VAR_4 = FUNC_1 (VAR_3->session_id, 0);
  FUNC_5 (2, "received data ack packet from %s:%d, session %d:%d, binlog written up to %lld, received up to %lld\n", FUNC_4 (VAR_2), VAR_2->remote_port, VAR_3->handshake_id, VAR_3->session_id, VAR_3->binlog_written_pos, VAR_3->binlog_received_pos);
  if (!VAR_4) {
    return FUNC_3 (VAR_2, VAR_3->handshake_id, VAR_3->session_id, VAR_0, "unknown session id");
  }
  if (VAR_4->handshake_id != VAR_3->handshake_id) {
    FUNC_0 (VAR_4);
    return FUNC_3 (VAR_2, VAR_3->handshake_id, VAR_3->session_id, VAR_0, "handshake/session id mismatch");
  }
  if (VAR_3->binlog_written_pos < 0 || VAR_3->binlog_received_pos < VAR_3->binlog_written_pos) {
    FUNC_0 (VAR_4);
    return FUNC_3 (VAR_2, VAR_3->handshake_id, VAR_3->session_id, VAR_1, "incorrect log positions");
  }
  if (VAR_3->binlog_written_pos > VAR_4->client_log_pos || VAR_3->binlog_written_pos < VAR_4->client_log_wrpos || VAR_3->binlog_received_pos < VAR_4->client_log_recvpos) {
    FUNC_0 (VAR_4);
    return FUNC_3 (VAR_2, VAR_3->handshake_id, VAR_3->session_id, VAR_1, "acknowledged log positions go backwards and/or after the end of transmitted data");
  }
  VAR_4->client_log_wrpos = VAR_3->binlog_written_pos;
  VAR_4->client_log_recvpos = VAR_3->binlog_received_pos;
  FUNC_2 (VAR_4);
  return 0;
}
