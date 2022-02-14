
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repl_client_status {scalar_t__ unflushed_bytes; double last_flush_time; struct related_binlog* rb; } ;
struct related_binlog {TYPE_2__* kfs_binlog; } ;
struct TYPE_4__ {int fd; TYPE_1__* info; } ;
struct TYPE_3__ {int filename; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 double FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__,int ) ;

int FUNC_4 (struct repl_client_status *VAR_4) {
  double VAR_5 = FUNC_2 (VAR_0);
  if (VAR_4->unflushed_bytes >= VAR_1 || (VAR_4->unflushed_bytes && VAR_5 > VAR_4->last_flush_time + VAR_2)) {
    struct related_binlog *VAR_6 = VAR_4->rb;
    FUNC_3 (2, "%lld unflushed bytes pending in binlog slice %s, syncing...\n", VAR_4->unflushed_bytes, VAR_6->kfs_binlog->info->filename);
    FUNC_0 (FUNC_1 (VAR_6->kfs_binlog->fd) >= 0);
    VAR_3 -= VAR_4->unflushed_bytes;
    VAR_4->unflushed_bytes = 0;
    VAR_4->last_flush_time = VAR_5;
    return 1;
  }
  return 0;
}
