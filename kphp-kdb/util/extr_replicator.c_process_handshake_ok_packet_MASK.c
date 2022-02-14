
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_handshake_ok {scalar_t__ binlog_slice_start_pos; scalar_t__ binlog_slice_end_pos; scalar_t__ binlog_last_start_pos; scalar_t__ binlog_last_end_pos; scalar_t__ session_id; int handshake_id; } ;
struct repl_client_status {int flags; scalar_t__ session_id; struct related_binlog* rb; } ;
struct related_binlog {scalar_t__ slice_binlog_pos; scalar_t__ max_binlog_pos; scalar_t__ kfs_replica; } ;
struct connection {int remote_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct repl_client_status*) ;
 struct repl_client_status* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct connection*,int ,scalar_t__,int ,char*,...) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int,char*,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_5 (struct connection *VAR_3, struct repl_handshake_ok *VAR_4) {
  struct repl_client_status *VAR_5 = FUNC_1 (VAR_4->handshake_id, 0);
  FUNC_4 (2, "received handshake acknowledgement packet from %s:%d, session %d:%d, current slice %lld..%lld, last slice %lld..%lld\n", FUNC_3 (VAR_3), VAR_3->remote_port, VAR_4->handshake_id, VAR_4->session_id, VAR_4->binlog_slice_start_pos, VAR_4->binlog_slice_end_pos, VAR_4->binlog_last_start_pos, VAR_4->binlog_last_end_pos);
  if (!VAR_5) {
    return FUNC_2 (VAR_3, VAR_4->handshake_id, VAR_4->session_id, VAR_1, "unknown handshake id");
  }
  if (VAR_5->session_id) {
    return FUNC_2 (VAR_3, VAR_4->handshake_id, VAR_4->session_id, VAR_1, "handshake already complete for this id");
  }

  struct related_binlog *VAR_6 = VAR_5->rb;
  VAR_5->session_id = VAR_4->session_id;

  if (VAR_4->binlog_slice_start_pos > VAR_4->binlog_slice_end_pos || VAR_4->binlog_last_start_pos > VAR_4->binlog_last_end_pos ||
      VAR_4->binlog_last_end_pos < VAR_4->binlog_slice_end_pos || VAR_4->binlog_last_start_pos < VAR_4->binlog_slice_start_pos ||
      VAR_4->binlog_slice_start_pos < 0 || VAR_4->binlog_slice_end_pos < 0 ||
      (VAR_4->binlog_last_start_pos > VAR_4->binlog_slice_start_pos && VAR_4->binlog_last_start_pos < VAR_4->binlog_slice_end_pos)) {
    FUNC_0 (VAR_5);
    return FUNC_2 (VAR_3, VAR_4->handshake_id, VAR_4->session_id, VAR_2, "invalid binlog start/end positions");
  }

  if (VAR_6->kfs_replica) {
    if (VAR_6->slice_binlog_pos != VAR_4->binlog_slice_start_pos || VAR_6->max_binlog_pos > VAR_4->binlog_slice_end_pos) {
      FUNC_0 (VAR_5);
      return FUNC_2 (VAR_3, VAR_4->handshake_id, VAR_4->session_id, VAR_2, "binlog start/end positions mismatch: client %lld..%lld, server %lld..%lld", VAR_6->slice_binlog_pos, VAR_6->max_binlog_pos, VAR_4->binlog_slice_start_pos, VAR_4->binlog_slice_end_pos);
    }
    if (VAR_4->binlog_last_end_pos == VAR_6->max_binlog_pos) {
      VAR_5->flags |= VAR_0;
    }
  } else {
    if (VAR_4->binlog_slice_start_pos || VAR_4->binlog_slice_end_pos < 0) {
      FUNC_0 (VAR_5);
      return FUNC_2 (VAR_3, VAR_4->handshake_id, VAR_4->session_id, VAR_2, "binlog start/end positions mismatch: client %lld..%lld, server %lld..%lld", VAR_6->slice_binlog_pos, VAR_6->max_binlog_pos, VAR_4->binlog_slice_start_pos, VAR_4->binlog_slice_end_pos);
    }
  }

  return 0;
}
