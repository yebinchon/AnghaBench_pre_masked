
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binlog_pos {int timestamp; int crc32; scalar_t__ pos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

struct binlog_pos FUNC_5 (int VAR_3) {
  struct binlog_pos VAR_4;
  if (VAR_3) {
    FUNC_3 (0);
    FUNC_0 (FUNC_1 () == VAR_1);
  } else {
    FUNC_4 ();
    FUNC_0 (FUNC_2 () == VAR_1);
  }

  VAR_4.pos = VAR_1;
  VAR_4.crc32 = ~VAR_0;
  VAR_4.timestamp = VAR_2;
  return VAR_4;
}
