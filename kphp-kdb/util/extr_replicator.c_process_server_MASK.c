
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct repl_server_status {int flags; long long client_log_pos; long long client_log_wrpos; long buffer_file_pos; long long logrotate_pos; long wptr; long rptr; TYPE_5__* conn; TYPE_4__* binlog; scalar_t__ buffer_size; TYPE_2__* rb; int buffer; } ;
struct TYPE_6__ {scalar_t__ total_bytes; scalar_t__ unprocessed_bytes; } ;
struct TYPE_10__ {TYPE_1__ Out; } ;
struct TYPE_9__ {TYPE_3__* info; } ;
struct TYPE_8__ {long long file_size; scalar_t__ log_pos; } ;
struct TYPE_7__ {scalar_t__ slice_binlog_pos; } ;


 int VAR_0 ;
 long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct repl_server_status*) ;
 long FUNC_2 (struct repl_server_status*) ;
 int FUNC_3 (struct repl_server_status*) ;
 int FUNC_4 (TYPE_5__*,struct repl_server_status*,int) ;

int FUNC_5 (struct repl_server_status *VAR_7) {
  if (!(VAR_7->flags & VAR_5) || !VAR_7->buffer) {
    return 0;
  }
  long VAR_8 = FUNC_2 (VAR_7);
  if (!VAR_8) {
    return 0;
  }
  if (VAR_7->conn->Out.total_bytes + VAR_7->conn->Out.unprocessed_bytes > VAR_2) {
    return 0;
  }
  long long VAR_9 = VAR_7->client_log_pos - VAR_7->client_log_wrpos;
  FUNC_0 (VAR_9 >= 0);
  if (VAR_9 >= VAR_1) {
    return 0;
  }
  long long VAR_10 = VAR_7->buffer_file_pos + VAR_8;
  int VAR_11 = VAR_0 - (int) VAR_9;

  if (!(VAR_7->flags & VAR_6)) {
    if (VAR_10 < VAR_7->binlog->info->file_size && VAR_10 > VAR_7->binlog->info->file_size - 36) {
      VAR_8 = VAR_7->binlog->info->file_size - 36 - VAR_7->buffer_file_pos;
    } else if (VAR_10 >= VAR_7->binlog->info->file_size && VAR_11 >= VAR_8 - 36) {
      FUNC_0 (VAR_10 == VAR_7->binlog->info->file_size);
      if (VAR_7->binlog->info->log_pos != VAR_7->rb->slice_binlog_pos) {
        FUNC_0 (VAR_7->binlog->info->log_pos < VAR_7->rb->slice_binlog_pos);
        if (VAR_8 > 0) {
          VAR_8 -= 36;
        }
        FUNC_0 (VAR_8 >= 0);
        VAR_7->logrotate_pos = VAR_7->client_log_pos + VAR_8;
        VAR_7->flags |= VAR_4;
      } else {
        if (FUNC_1 (VAR_7)) {
          FUNC_3 (VAR_7);
          long VAR_12 = VAR_8;
          VAR_8 = VAR_7->wptr - VAR_7->rptr;
          if (VAR_8 < 0) {
            VAR_8 += VAR_7->buffer_size;
            FUNC_0 (VAR_8 > 0);
          }
          FUNC_0 (VAR_8 >= VAR_12);
          if (FUNC_1 (VAR_7) == 36) {
            FUNC_0 (VAR_8 >= 36);
            VAR_8 -= 36;
            FUNC_0 (VAR_8 >= 0);
            VAR_7->logrotate_pos = VAR_7->client_log_pos + VAR_8;
            VAR_7->flags |= VAR_4;
          }
        }
      }
    }
  } else {
    if (VAR_10 == VAR_7->binlog->info->file_size) {
      VAR_7->flags |= VAR_4;
      VAR_7->logrotate_pos = VAR_7->client_log_pos + VAR_8;
    }
  }

  if (VAR_8 <= 0) {
    return 0;
  }

  if (VAR_11 > VAR_8) {
    VAR_11 = VAR_8;
  }
  if (VAR_11 > VAR_3) {
    VAR_11 = VAR_3;
  }

  return FUNC_4 (VAR_7->conn, VAR_7, VAR_11);
}
