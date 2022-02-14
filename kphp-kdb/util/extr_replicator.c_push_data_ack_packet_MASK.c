
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_data_ack {int handshake_id; int session_id; long long binlog_written_pos; long long binlog_received_pos; int type; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 struct repl_data_ack* FUNC_0 (int) ;
 int FUNC_1 (struct connection*,int) ;

__attribute__((used)) static void FUNC_2 (struct connection *VAR_1, int VAR_2, int VAR_3, long long VAR_4) {
  struct repl_data_ack *VAR_5 = FUNC_0 (sizeof (struct repl_data_ack));
  VAR_5->type = VAR_0;
  VAR_5->handshake_id = VAR_2;
  VAR_5->session_id = VAR_3;
  VAR_5->binlog_written_pos = VAR_5->binlog_received_pos = VAR_4;
  FUNC_1 (VAR_1, sizeof (struct repl_data_ack));
}
