
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*,int) ;

int FUNC_2 (struct connection *VAR_0) {
  int VAR_1 = FUNC_0 ();
  if (VAR_1 > 0) {
    FUNC_1 (3, "rpcc_ready: forward_query_check_all_completions () returns %d.\n", VAR_1);
  }
  return 0;
}
