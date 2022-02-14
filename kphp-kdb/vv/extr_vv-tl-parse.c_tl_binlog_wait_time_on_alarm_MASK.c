
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_saved_query {int failed; int (* free_extra ) (struct tl_saved_query*) ;int wait_num; int error_code; } ;
struct binlog_wait_query {struct tl_saved_query* extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tl_saved_query*) ;
 int FUNC_1 (struct tl_saved_query*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct binlog_wait_query*) ;
 int FUNC_4 (struct tl_saved_query*,int) ;

void FUNC_5 (struct binlog_wait_query *VAR_3) {
  struct tl_saved_query *VAR_4 = VAR_3->extra;
  VAR_1 = FUNC_3 (VAR_1, VAR_3);
  FUNC_2 ();

  VAR_4->wait_num --;
  VAR_2 ++;
  if (!VAR_4->failed) {
    VAR_4->error_code = VAR_0;
    FUNC_1 (VAR_4);

  }
  VAR_4->failed = 1;
  if (!VAR_4->wait_num) {
    VAR_4->free_extra (VAR_4);
    FUNC_4 (VAR_4, sizeof (*VAR_4));
  }
}
