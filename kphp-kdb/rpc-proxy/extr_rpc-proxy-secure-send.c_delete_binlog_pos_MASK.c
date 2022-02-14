
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binlog_pos {long long pos; scalar_t__ timestamp; scalar_t__ crc32; } ;
struct tree_binlog_pos {struct binlog_pos x; } ;


 int FUNC_0 (struct tree_binlog_pos*) ;
 int VAR_0 ;
 struct binlog_pos FUNC_1 (int) ;
 int FUNC_2 (int ,struct binlog_pos) ;
 struct tree_binlog_pos* FUNC_3 (int ) ;
 int FUNC_4 (long long,scalar_t__,scalar_t__) ;

void FUNC_5 (long long VAR_1, int VAR_2) {
  struct binlog_pos VAR_3;
  VAR_3.pos = VAR_1;
  VAR_3.crc32 = 0;
  VAR_3.timestamp = 0;
  VAR_0 = FUNC_2 (VAR_0, VAR_3);
  if (!VAR_0) {
    VAR_3 = FUNC_1 (VAR_2);
  } else {
    struct tree_binlog_pos *VAR_4 = FUNC_3 (VAR_0);
    FUNC_0 (VAR_4);
    VAR_3 = VAR_4->x;
  }
  FUNC_4 (VAR_3.pos, VAR_3.crc32, VAR_3.timestamp);
}
