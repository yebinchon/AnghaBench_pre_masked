
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_saved_query {int failed; int (* free_extra ) (struct tl_saved_query*) ;int wait_num; int error_code; } ;
struct conn_query {struct tl_saved_query* extra; } ;


 int VAR_0 ;
 int FUNC_0 (struct tl_saved_query*) ;
 int FUNC_1 (struct tl_saved_query*) ;
 int FUNC_2 (struct conn_query*) ;
 int FUNC_3 (struct tl_saved_query*,int) ;

int FUNC_4 (struct conn_query *VAR_1) {
  struct tl_saved_query *VAR_2 = VAR_1->extra;
  VAR_2->wait_num --;

  if (!VAR_2->failed) {
    VAR_2->error_code = VAR_0;

    FUNC_1 (VAR_2);
  }
  VAR_2->failed = 1;
  if (!VAR_2->wait_num) {
    VAR_2->free_extra (VAR_2);
    FUNC_3 (VAR_2, sizeof (*VAR_2));
  }
  FUNC_2 (VAR_1);
  return 0;
}
