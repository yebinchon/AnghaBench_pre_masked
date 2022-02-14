
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int target; void* last_response_time; void* last_query_sent_time; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 () ;

int FUNC_3 (struct connection *VAR_3) {
  VAR_3->last_query_sent_time = VAR_2;
  VAR_3->last_response_time = VAR_2;

  int VAR_4 = VAR_3->target - VAR_0;
  if (VAR_4 == FUNC_0() && !FUNC_1()) {
    VAR_1 = 1;
    FUNC_2();
  }
  return 0;
}
