
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repl_pos_info {scalar_t__ session_id; long long binlog_time; scalar_t__ binlog_pos; int handshake_id; } ;
struct repl_client_status {scalar_t__ session_id; struct related_binlog* rb; } ;
struct related_binlog {TYPE_1__* kfs_replica; int replica_name_hash; } ;
struct connection {int remote_port; } ;
struct TYPE_2__ {int replica_prefix; } ;


 int VAR_0 ;
 int FUNC_0 (struct repl_client_status*) ;
 struct repl_client_status* FUNC_1 (int ,int ) ;
 long long FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct connection*,int ,scalar_t__,int ,char*) ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (int ,scalar_t__,long long) ;
 int FUNC_6 (int,char*,int ,scalar_t__,long long,int,...) ;

int FUNC_7 (struct connection *VAR_2, struct repl_pos_info *VAR_3) {
  VAR_1++;
  struct repl_client_status *VAR_4 = FUNC_1 (VAR_3->handshake_id, 0);
  FUNC_6 (2, "received server time packet from %s:%d, session %d:%d, position %lld, time %016llx\n", FUNC_4 (VAR_2), VAR_2->remote_port, VAR_3->handshake_id, VAR_3->session_id, VAR_3->binlog_pos, VAR_3->binlog_time);
  if (!VAR_4) {
    return FUNC_3 (VAR_2, VAR_3->handshake_id, VAR_3->session_id, VAR_0, "unknown handshake id");
  }
  if (VAR_4->session_id != VAR_3->session_id) {
    FUNC_0 (VAR_4);
    return FUNC_3 (VAR_2, VAR_3->handshake_id, VAR_3->session_id, VAR_0, "handshake/session id mismatch");
  }

  long long VAR_5 = FUNC_2 (1000000);

  struct related_binlog *VAR_6 = VAR_4->rb;

  if (VAR_3->binlog_time > VAR_5 + (5LL << 32) || VAR_3->binlog_time < VAR_5 - (30LL << 32)) {
    FUNC_6 (1, "WARNING: server time packet from %s:%d, session %d:%d, position %lld, time %016llx for binlog %s is ignored because of bad time (current time %016llx)\n", FUNC_4 (VAR_2), VAR_2->remote_port, VAR_3->handshake_id, VAR_3->session_id, VAR_3->binlog_pos, VAR_3->binlog_time, VAR_6->kfs_replica->replica_prefix, VAR_5);
    return 0;
  }

  if ((unsigned long long) VAR_3->binlog_pos > 1LL << 56) {
    FUNC_6 (1, "WARNING: server time packet from %s:%d, session %d:%d, position %lld, time %016llx for binlog %s is ignored because of bad position\n", FUNC_4 (VAR_2), VAR_2->remote_port, VAR_3->handshake_id, VAR_3->session_id, VAR_3->binlog_pos, VAR_3->binlog_time, VAR_6->kfs_replica->replica_prefix);
    return 0;
  }

  int VAR_7 = FUNC_5 (VAR_6->replica_name_hash, VAR_3->binlog_pos, VAR_3->binlog_time);
  FUNC_6 (2, "Result of updating binlog position info for replica %s to position %lld, time %016llx is %d\n", VAR_6->kfs_replica->replica_prefix, VAR_3->binlog_pos, VAR_3->binlog_time, VAR_7);

  return 0;
}
