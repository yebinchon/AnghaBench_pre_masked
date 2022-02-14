
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_forward_query {struct rpc_forward_query* next; } ;


 struct rpc_forward_query VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_forward_query*,double) ;
 double FUNC_1 () ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int FUNC_3 (void) {
  struct rpc_forward_query *VAR_1 = VAR_0.next;
  if (VAR_1 == &VAR_0) {
    return 0;
  }
  int VAR_2 = 0;
  double VAR_3 = FUNC_1 ();
  while (VAR_1 != &VAR_0) {
    struct rpc_forward_query *VAR_4 = VAR_1->next;
    VAR_2 += FUNC_0 (VAR_1, VAR_3);
    VAR_1 = VAR_4;
  }
  if (VAR_2) {
    FUNC_2 (2, "forward_query_check_all_completion returns %d.\n", VAR_2);
  }
  return VAR_2;
}
