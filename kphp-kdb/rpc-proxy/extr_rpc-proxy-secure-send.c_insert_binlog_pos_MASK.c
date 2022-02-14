
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binlog_pos {long long pos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct binlog_pos FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct binlog_pos,int ) ;

void FUNC_4 (long long VAR_1, int VAR_2) {
  struct binlog_pos VAR_3;
  VAR_3 = FUNC_1 (VAR_2);
  FUNC_0 (VAR_3.pos == VAR_1);
  VAR_0 = FUNC_3 (VAR_0, VAR_3, FUNC_2 ());
}
