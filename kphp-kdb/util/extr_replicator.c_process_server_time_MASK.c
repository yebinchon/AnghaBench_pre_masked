
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct repl_server_status {int flags; TYPE_2__* conn; int session_id; int handshake_id; struct related_binlog* rb; int buffer; } ;
struct repl_pos_info {int binlog_time; int binlog_pos; int session_id; int handshake_id; int type; } ;
struct related_binlog {int engine_time; int engine_log_pos; } ;
struct TYPE_4__ {int total_bytes; } ;
struct TYPE_5__ {TYPE_1__ Out; int remote_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct repl_pos_info* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,char*,int ,int ,int ,int ,int ,int ,int ,...) ;

int FUNC_4 (struct repl_server_status *VAR_7) {
  if (!(VAR_7->flags & VAR_3) || !VAR_7->buffer) {
    return 0;
  }
  struct related_binlog *VAR_8 = VAR_7->rb;

  if (VAR_7->conn->Out.total_bytes > VAR_0) {
    static int VAR_9;
    FUNC_3 (VAR_4 / VAR_1 != VAR_9 ? 0 : 2,
       "Server is NOT sending server time packet to %s:%d, session %d:%d, position %lld, time %016llx; %d bytes in output buffer (%lld such errors)\n",
       FUNC_2 (VAR_7->conn), VAR_7->conn->remote_port, VAR_7->handshake_id, VAR_7->session_id,
       VAR_8->engine_log_pos, VAR_8->engine_time, VAR_7->conn->Out.total_bytes, VAR_5);
    VAR_5++;
    VAR_9 = VAR_4 / VAR_1;
    return 1;
  }

  struct repl_pos_info *VAR_10 = FUNC_0 (sizeof (struct repl_pos_info));
  VAR_10->type = VAR_2;
  VAR_10->handshake_id = VAR_7->handshake_id;
  VAR_10->session_id = VAR_7->session_id;
  VAR_10->binlog_pos = VAR_8->engine_log_pos;
  VAR_10->binlog_time = VAR_8->engine_time;
  VAR_6++;
  FUNC_3 (2, "Server is sending server time packet to %s:%d, session %d:%d, position %lld, time %016llx; %d bytes in output buffer\n",
     FUNC_2 (VAR_7->conn), VAR_7->conn->remote_port, VAR_7->handshake_id, VAR_7->session_id,
     VAR_10->binlog_pos, VAR_10->binlog_time, VAR_7->conn->Out.total_bytes);
  FUNC_1 (VAR_7->conn, sizeof (struct repl_pos_info));

  return 0;
}
