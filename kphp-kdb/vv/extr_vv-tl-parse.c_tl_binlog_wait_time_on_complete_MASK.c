
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_saved_query {int failed; int wait_num; } ;
struct binlog_wait_query {scalar_t__ timeout; scalar_t__ start_time; int wait_pos; int ev; struct tl_saved_query* extra; } ;


 int FUNC_0 (struct tl_saved_query*) ;
 int FUNC_1 (int) ;
 long long FUNC_2 () ;
 long long FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tl_saved_query*,long long,scalar_t__) ;

void FUNC_6 (struct binlog_wait_query *VAR_1) {
  struct tl_saved_query *VAR_2 = VAR_1->extra;
  FUNC_4 (&VAR_1->ev);
  VAR_2->wait_num --;
  long long VAR_3 = FUNC_3 (VAR_1->wait_pos);
  FUNC_1 (VAR_3 > 0);
  if (FUNC_2 () < VAR_3 && !VAR_2->failed) {
    FUNC_5 (VAR_2, VAR_3, VAR_1->start_time + VAR_1->timeout - VAR_0);
  }

  if (!VAR_2->wait_num && !VAR_2->failed) {
    FUNC_0 (VAR_2);
  }
}
