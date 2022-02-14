
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_get_file_data {int out; } ;
struct rpc_forward_query {double deadline; struct rpc_forward_query* prev; struct rpc_forward_query* next; struct rpc_get_file_data* L; } ;
struct connection {int dummy; } ;


 struct connection* FUNC_0 (struct rpc_get_file_data*) ;
 int FUNC_1 (struct connection*,struct rpc_get_file_data*) ;
 int FUNC_2 (int ,struct rpc_get_file_data*) ;

__attribute__((used)) static int FUNC_3 (struct rpc_forward_query *VAR_0, double VAR_1) {
  int VAR_2 = 0;
  struct rpc_get_file_data *VAR_3 = VAR_0->L;
  struct connection *VAR_4 = FUNC_0 (VAR_3);
  if (VAR_4) {
    FUNC_1 (VAR_4, VAR_3);
    VAR_2 = 1;
  } else if (VAR_1 >= VAR_0->deadline) {
    FUNC_2 (VAR_3->out, VAR_3);
    VAR_2 = 1;
  }
  if (VAR_2) {
    struct rpc_forward_query *VAR_5 = VAR_0->prev, *VAR_6 = VAR_0->next;
    VAR_5->next = VAR_6;
    VAR_6->prev = VAR_5;
  }
  return VAR_2;
}
